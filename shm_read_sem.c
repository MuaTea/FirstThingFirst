#include "sem.h"
#define SIZE 1024
#define QUIT "quit"

int main(){
    key_t key_shm=-1;
    key_t key_sem=-1;

    int shmid=-1;
    int semid=-1;

    char * p_shm;
    key_shm= ftok("/home/muatea/CLionProjects/mutex/test.txt",'a');
    if(key_shm<0){
        perror(("ftok"));
        exit(1);
    }

    key_sem= ftok("/home/muatea/CLionProjects/mutex/test.txt",'b');
    if(key_sem<0){
        perror("ftok");
        exit(1);
    }
    //创建/获取共享内存
    shmid= shmget(key_shm,SIZE,IPC_CREAT|0666);
    if(shmid<0){
        perror("shmget");
        exit(1);
    }
    //创建信号量
    semid= sem_create(key_sem,1);
    if(semid<0){
        perror("sem_create");
    }
    //映射共享内存
    p_shm=(char*) shmat(shmid,NULL,0);
    if(p_shm==(void*)-1){
        perror("shmat");
    }
    bzero(p_shm,SIZE);
    //读操作
    while(1){
        sem_p(semid,0,1);
        if(p_shm[0]!='\0'){
            if(!strncasecmp(p_shm,QUIT, strlen(QUIT))){
                printf("读端关闭\n");
                sem_v(semid,0,1);
                break;
            }
            printf("you said:%s\n",(char*)p_shm);
            bzero(p_shm,SIZE);
        }
        sem_v(semid,0,1);
        usleep(100000);
    }
#if 1
    //取消映射
    shmdt(p_shm);
    //释放共享内存
    shmctl(shmid,IPC_RMID,NULL);
#endif
    return 0;
}
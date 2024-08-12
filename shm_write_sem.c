#include "sem.h"
#define SIZE 1024
#define QUIT "quit"

int main(void){
    key_t key_shm=-1;
    key_t key_sem=-1;
    int shmid = -1;
    int semid = -1;
    void * p_shm;

    /* 生成一个键值给共享内存创建使用 */
    key_shm= ftok("/",'c');
    if(key_shm<0){
        perror("ftok");
        exit(1);
    }

    /* 生成一个键值给信号量创建使用 */
    key_sem= ftok("/",'d');
    if(key_sem < 0)
    {
        perror("ftok");
        exit(1);
    }

    //创建/获取共享内存
    shmid= shmget(key_shm,SIZE,IPC_CREAT|0666);
    if(shmid < 0)
    {
        perror("shmget");
        exit(1);
    }

    /* 创建信号量 */
    semid= sem_create(key_sem,1);
    if(semid < 0)
    {
        perror("sem_create");
        exit(1);
    }

    /* 初始化信号量 */
    if(sem_init(semid,0,1)<0){
        perror("sem init");
    }

    //映射共享内存
    p_shm= shmat(shmid,NULL,0);
    if(p_shm == (void *)-1)
    {
        perror("shmat");
    }

    //写操作
    while(1){
        //从键盘获取数据，写入到共享内存
        fprintf(stderr,"plz input:");
        sem_p(semid,0,1);//lock
        fgets(p_shm,100-1,stdin);
        if(!strncasecmp(p_shm,QUIT, strlen(QUIT))){
            printf("写端关闭...\n");
            sem_v(semid,0,1);
            break;
        }
        sem_v(semid,0,1);//unlock
    }
#if 0
    //取消映射
	shmdt(p_shm);

	//释放共享内存
	shmctl(shmid,IPC_RMID,NULL);
#endif
    return 0;
}
#include "sem.h"

/*
 *@brief:创建信号量集/获取信号量集的标识符
 *@param:key键值
 *@param:nsems信号量的个数
 *@retval:semid获取到的标识符
 */
int sem_create(key_t key,int nsems){
    int semid=-1;
    semid= semget(key,nsems,IPC_CREAT|0666);
    return semid;
}


/*
 *@brief:初始化信号量
 *@param:semid信号量集的标识符
 *@param:semnum信号量的下标
 *@retval:ret成功返回0，失败返回-1
 */
int sem_init(int semid,int semnum,int val){
    int ret=-1;
    union semun sem;
    sem.val=val;
    ret=semctl(semid,semnum,SETVAL,sem);
    return ret;
}



/*
 *@brief:加锁操作，即p操作
 *@param:semid信号量集的标识符
 *@param:semnum信号量下标
 *@param:nsems操作的信号量个数
 *@retval:ret成功返回0失败返回-1
 */
int sem_p(int semid,int semnum,int nsems){
    int ret=-1;
    struct sembuf sops;
    sops.sem_num=semnum;
    sops.sem_op=-1;
    sops.sem_flg=SEM_UNDO;
    ret= semop(semid,&sops,nsems);
    return  ret;
}



/*
 *@brief:解锁操作，即v操作
 *@param:semid信号量集的标识符
 *@param:semnum信号量下标
 *@param:nsems操作的信号量个数
 *@retval:ret成功返回0失败返回-1
 */
int sem_v(int semid,int semnun,int nsems){
    int ret=-1;
    struct sembuf sops;
    sops.sem_num=semnun;
    sops.sem_op=+1;
    sops.sem_flg=SEM_UNDO;
    ret=semop(semid,&sops,nsems);
    return ret;
}

/*
 *@brief:删除信号量
 *@param:semid信号量集的标识符
 *@param:semnum要删除的信号量下标
 *@retval:ret成功返回0失败返回-1
 */
int sem_delete(int semid,int semnum){
    int ret=-1;
    ret= semctl(semid,semnum,IPC_RMID);
    return ret;
}
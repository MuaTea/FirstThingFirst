#ifndef __SEM_H
#define __SEM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <unistd.h>

union semun {
    int val;//    /* Value for SETVAL */当semctl函数的cmd参数是SETVAL时，使用它设置信号量的值
    struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
    unsigned short  *array;  /* Array for GETALL, SETALL */
    struct seminfo  *__buf;  /* Buffer for IPC_INFO							(Linux-specific) */
};

int sem_create(key_t key,int nsems);
int sem_init(int semid,int semnum,int val);
int sem_p(int semid,int semnum,int nsems);
int sem_v(int semid,int semnun,int nsems);
int sem_delete(int semid,int semnum);

#endif
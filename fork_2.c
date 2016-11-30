/*
Elia Fagioli 4 INA
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
main(){
    pid_t pid;
    printf("sono il padre %d \n ",getpid());
    pid=fork();
    if(pid==0){
     printf("sono il figlio (PID%d);il pid di mio padre è%d \n",getpid(),getppid());
    }else if(pid>0){
     printf("sono il padre %d, ho creato un figlio con pid %d \n",getpid(),pid);}
getchar();
getchar();
}


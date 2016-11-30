/*
Elia Fagioli
4 IN A
23/11/2016
*/
//numero processi da 1 a 10
//ciclo n volte fork
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
main(){
    pid_t pid;
    int i,n;
    do{
        printf("Numero di elementi da inserire: \n");
        scanf("%d",&n);
    }while((n<1)||(n>3));
    printf("Io sono: %d \n",getpid());
    for(i=0;i<n;i++){
        pid=fork();
        if(pid==0){
            sleep(1);
            printf("\nIo sono: %d , Mio padre e' : %d\n ",getpid(),getppid());
        }
    }
    exit(0);
}

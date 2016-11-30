/*
Elia Fagioli 4INA
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
main(){
   pid_t pid;
   int k=13;
   printf("sono il padre %d \n",getpid());
   pid=fork();
   if(pid==0){
        printf("figlio PID %d, Il pid di mio padre è %d \n",getpid(),getppid());
        printf("\n  k=%d ora è %d  \n",k,k*2);
        k=k*2;
        printf("\n ora k è %d",k);
        }
   else if(pid>0){
                printf("sono il padre %d, ho creato %d",getpid(),pid);
                printf("\n k=%d ora è %d",k,k*k);
                k=k*k;
                printf("\n ora k è = %d",k);
}
   getchar();
   getchar();
}

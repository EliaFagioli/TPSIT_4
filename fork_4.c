/*
Elia Fagioli 4INA
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
main(){
   pid_t pid,wpid;
   int i;
   int status;
   printf("sono il padre %d \n",getpid());
   pid=fork();
   if(pid==0){
        printf("figlio PID %d, Il pid di mio padre è %d \n",getpid(),getppid());
        for(i=10;i>0;i--){
            printf("%d\n",i);
            sleep(1);
        }
   }else {if(pid>0){
                printf("sono il padre %d, ho creato %d",getpid(),pid);
                   }
   }
   wpid=wait(&status);
   printf("il processo di mio figlio è terminato\n");
   exit(1);
   getchar();
   getchar();
}

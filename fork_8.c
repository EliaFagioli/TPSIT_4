/*ogni processo prima di terminare la sua esecuzione
stampa il suo pid e il numero di volte che ha eseguito
 il ciclo for*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    int i,p;
    int cont=0;
    // solo se è il padre aumenta il cont
    for(i=0;i<2;i++){
        p=fork();
        if(p>0){fork();
        printf("Sono il processo %d\n Ho eseguito il ciclo %d volte",getpid(),cont);
        }
        if(p>0)cont++;
    }
}

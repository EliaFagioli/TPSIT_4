#include<pthread.h>
#include<stdio.h>
int b,h;
void *area(){
    int A;
    A=b*h;
    printf("\nArea: %d\n",A);
}
void *perimetro(){
    int P;
    P=(b+h)*2;
    printf("\nPerimetro: %d\n",P);
}
main(){
    int A,P;
    pthread_t t1,t2;
    printf("\nInserisci base: ");
    scanf("%d",&b);
    printf("\nInserisci altezza: ");
    scanf("%d",&h);
    pthread_create(&t1,NULL,&area,NULL);
    pthread_create(&t2,NULL,&perimetro,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}

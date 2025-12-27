#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    //rand();//para gerar numeros aleatorios usamos esse metodo

   // printf("%d",rand());//o problema deste metodo e que sempre vai gerar o mesmo numero

    srand(time(NULL));//usado para evitar que rand() imprima o mesmo numero
    //printf("%d",rand());
   // printf("%d",RAND_MAX);//para saber qual sera o valor aleatorio maximo que pode ser exibido
    //int num=rand()%2; //gera um numero entre 0 e 1
    //int num=(rand()%2)+1;// gera um valor entre 0 e 1 adicionado por 1, se o valor gerado tiver sido 0, vai imprimir 1
    int min=50;
    int max=100;
    //int num=(rand()%max);//imprime um valor aleatorio entre 0 e max-1;
    int num=(rand()%(max-min+1))+min;
    printf("%d",num);
    return 0;
}
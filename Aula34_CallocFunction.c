#include<stdio.h>
#include<stdlib.h>

int main() {

    int num=0;
    printf("Insira o numero de jogadores");
    scanf("%d",&num);
    int *scores=calloc(num,sizeof(int));
        //o uso do calloc e similiar ao do malloc, mas o calloc e responsavel por "limpar" a estrutura de dados antes de usarmos
        //inicializa a estrutura com zeros
        if (scores==NULL) {
            printf("A alocacao de memoria falhou");
            return 1;
        }
    for (int i=0;i<num;i++) {
        printf("Insira as pontuacoes #%d: ",i+1);
        scanf("%d",&scores[i]);
    }
    for (int i=0;i<num;i++) {
        printf("%d ",scores[i]);
    }


    return 0;
}
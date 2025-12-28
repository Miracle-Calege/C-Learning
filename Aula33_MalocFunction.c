/*funcao malloc e uma funcao que aloca memoria de forma dinamica para que nao haja excesso e nem desperdicio de memoria
 *NB:todos os elementos do mesmo tipo de dado tem o mesmo tamanho
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num=0;
    printf("Insira o numero de notas");
    scanf("%d",&num);
    //char*notas=malloc(100);//tipo de dados*nomeDaEStrutura=malloc(tamanho a alocar);
    char*notas=malloc(num*sizeof(char));// para usar a funcao malloc para alocar espaco para uma estrutura de dados
    //tipo de dados* nome=malloc(quantidade de elementos*sizeof(tipo de dado da estrutura));

    if (notas==NULL){// e muito importante ter essa condicao para evitar segmentation fault
        printf("Problemas com a alocacao de memoria");
        return 1;
    }
    for (int i=0;i<num;i++) {
        printf("Insira a nota#%d: ",i+1);
        scanf(" %c",&notas[i]);
    }
    for (int i=0;i<num;i++) {
        printf(" %c",notas[i]);
    }


    free(notas);//depois de nao estamos mais a usar a estrutura usamos a funcao free(estrutura) de modo a libertar espaco de memoria;
     notas=NULL;//e inicializamos a estrutura com NULL;
    return 0;
}

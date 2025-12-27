#include<stdio.h>

/*tipo de dado nome[tamanho]";"
 *e uma boa pratica inicializar o array com 0/null porque c nao tem garbagge collector
 *
 */

int main() {
    int pontos[5]={0};
    for (int i=0;i<sizeof(pontos)/sizeof(pontos[0]);i++) {
        printf("Insira a pontuacao:\n");
        scanf("%d",&pontos[i]);
    }
    for (int i=0;i<sizeof(pontos)/sizeof(pontos[0]);i++) {
        printf("%d ",pontos[i]);
    }

    return 0;
}
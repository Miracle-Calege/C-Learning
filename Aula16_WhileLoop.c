#include<stdio.h>


/* While loop executa uma certa acccao enquanto uma determinada condicao for verdadeira
 * while(condicao){ accao} verificar a condicao e so depois executa
 * do{ accao}while(condicao); executa e depois verifica a condicao
 */

int main() {
     int num=10;
     // while (num<=0) {
     //     printf("Insira um valor maior que zero");
     //     scanf("%d",&num);
    // por num ser >0 nao entrara no loop
     // }
    do {
        printf("Insira um valor maior que zero");
            scanf("%d",&num);
    }while (num<=0);
    // mesmo num sendo >0 entrara no loop





    return 0;
}



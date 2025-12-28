#include <stdio.h>
#include <stdlib.h>
/*a funcao realloc realoca/redimensiona o tamanho de uma memoria ja alocada
 *usado para aumentar ou diminuir o tamanho da estrutura
 */


int main () {
    int num=0;
    printf("Insira a quantidade");
    scanf("%d",&num);

    float*prices=malloc(num*sizeof(float));

    if (prices==NULL) {
        printf("Erro");
        return 1;
    }
    for (int i=0;i<num;i++) {
        printf("Insira um price #%d: ",i+1);
        scanf("%f",&prices[i]);
    }
    int novNum=0;
    printf("Insira a nova quantidade de prices");
    scanf("%d",&novNum);

    float*temp=realloc(prices,novNum*sizeof(float));
    //para usar realloc->tipo de dado* nomeDaVariavel=realloc(nome da estrutura,novaQunatidadeElementos*sizeof(tipo de dado da estrutura));

    if (temp==NULL) {//para avisar se a realocacao foi bem sucedida ou ano
        printf("Erro nao deu para realocar");
    }else {
        prices=temp;//agora a estrutura prices esta a apontar para o novo endereco temp
        for (int i=num;i<novNum ;i++) {
            printf("Insira um price #%d: ",i+1);
            scanf("%f",&prices[i]);
        }
        for (int i=0;i<novNum;i++) {
            printf("%.2f ",prices[i]);
        }


    }




    free(prices);
    prices=NULL;



    return 0;
}
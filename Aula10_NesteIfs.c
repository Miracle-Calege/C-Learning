#include <stdio.h>
#include <stdbool.h>//para poder usar bool

int main() {

    bool isStudent=true;
    bool isSenior=true;
    float price=10;
    if (isStudent) {
        if (isSenior) {
            printf("tem desconto de 30%\n");
            printf("O desconto e de%.1f",price*=0.7);
        }else {
             printf("tem desconto de 10%\n");
            printf("O desconto e de%.1f",price*=0.9);
        }
    }
    /*nested if e um if dentro de um outro
    *  if (isStudent) { se essa condicao for cumprida passara para outra condicao
        if (isSenior) {//se esta tambem for cumprida a mensagem sera impresa
            printf("tem desconto de 30%\n");
            printf("O desconto e de%.1f",price*=0.3);
        }else {se a primeira nao for cumprida esta sera impresa porque cumpriu com a condicao isStudent
            printf("tem desconto de 10%\n");
            printf("O desconto e de%.1f",price*=0.1);
        }
    }
     *
    */



    return 0;
}
#include <stdio.h>
/*Para criar um array de Strings usamos 2D array
 * criacao char nome [][tamanho]={};
 * char nome[quantidade de nomes][tamanho maximo do nomes]={};
 *
 */




int main() {

    char frutas[][10]=
        {"maca",
        "Banana",
        "coco"};

    frutas[0][0]='e';//em c String e um array de char's por isso pode ser acessado indice por indice
    frutas[0][4]='A';
    frutas[1][0]='a';
    frutas[1][5]='B';
    frutas[2][0]='t';
    frutas[1][5]='e';


    for (int i=0;i<sizeof(frutas)/sizeof(frutas[0]);i++) {
        printf("%s ",frutas[i]);//como e um array de strings usamos apenas um par de "[]" para a impressao e a localizacao de elementos via indice

    }


    return 0;
}
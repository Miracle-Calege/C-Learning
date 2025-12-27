#include <stdio.h>
/* array uma estrutura de dados que armazena mais de um dados e todos devem ser do mesmo tipo
 * tipo de dado nome da variavel "[]"
 *inicializacao manual tipo de dado nome da variavel[]={dado1,dado2,dado3}
 * nao ha outofbounds exception em c
 * para mudar os valores do array e so nome da variavel[index]=novo valor
 */

int main() {
    int numbers[]={10,20,30,40,50,1000,400,-40};
    // numbers[0]=100;// os valores do array ja foram alterados
    // numbers[1]=90;
    // numbers[2]=80;
    // numbers[3]=70;
    // numbers[4]=60;
    // int sizeArray=sizeof(numbers);//retorna o tamanho em bytes do array
    // int sizeElement=sizeof(numbers[0]);//retorna o tamanho de cada elemento(todos elementos do array tem o mesmo tamanho)
    //tamanho do array sera igual ao tamanho do array em bytes/tamanhos dos elementos em bytes

    int size=sizeof(numbers)/sizeof(numbers[0]);


        for (int i=0;i<size;i++) {
            printf("%d ",numbers[i]);
        }

    return 0;
}

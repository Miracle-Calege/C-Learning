#include <stdio.h>
#include <stdbool.h>
/*um shortcut para if-else
 *(condicao)? o que acontece caso a condicao seja verdadeira:o que acontece caso a condicao seja falsa
 *
 *
 *
 */
int main() {

    // int x=10;
    // int y=6;
    // int max=(x>y) ?x:y;//condicao->(x>y) caso seja verdade retorna x caso contrario y
    // printf("%d",max);
    // bool isOnline=true;
    // printf("%s",(isOnline)? "online":"offline");
    // int num=8;
    // printf("%d e %s",num,(num%2==0)? "Par": "Impar");
    // int idade=18;
    //
    // printf("%s",(idade>=18)? "adulto":"menor");
    int hora=11;
    int minutos=3;
    printf("%02d %02d %s",hora,minutos,(hora<12)?"AM":"PM");
    // o 02 entre "%" e "d" sao para garantir que os numeros tenham dois algarismo, os que nao tiverem
    //serao adicionados um 0 a frente


    return 0;
}
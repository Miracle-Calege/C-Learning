#include<stdio.h>

int main() {

    int day=0;
    printf("Insira um dia de semana\n");
    scanf("%d",&day);

    switch (day) {//usamos o switch que vai levar day como argumento
        case 1: //case (day) caso day seja 1 a mensagem e impressa
            printf("E domingo");
            break;//usado para evitar que o switch execute tambem as instrucoes subsequentes
        case 2://case (day) caso day seja 1 a mensagem e impressa
            printf("E Segunda");
            break;
        case 3://case (day) caso day seja 1 a mensagem e impressa
            printf("E terca");
            break;
        case 4://case (day) caso day seja 1 a mensagem e impressa
            printf("E quarta");
            break;
        case 5://case (day) caso day seja 1 a mensagem e impressa
            printf("E quinta");
            break;
        case 6://case (day) caso day seja 1 a mensagem e impressa
            printf("E sexta");
            break;
        case 7://case (day) caso day seja 1 a mensagem e impressa
            printf("E sabado");
            break;
            default:
            printf("So sao validos numeros de 1-7");


    }


    return 0;
}
#include <stdio.h>
#include <stdbool.h>//para podermos usar o bool
int main() {
    int age=19;             //criacao de uma variavels
    float nota=15.5;
    double pi=3.14159265358979;
    char letra='M';
    char nome[]="Miracle Calege";//esta e a representacao de String em c
    bool isEmpty=true; //bool=boolean true=1 false=0; podemos substuir o true por 1

    printf("Eu tenho %d anos\n",age);  //usamos %d para imprimir numeros inteiros
    printf("Eu tive %.1f pontos no teste\n",nota);//%f para numeros decimais
    //e colocamos um "%.xf"sendo x o numeros de casas decimais que queremos
    printf("Pi=%.15lf\n",pi);//usamos %lf para doubles
    printf("Inicial do meu nome e %c\n",letra);//%c
    printf("Chamo me %s e tenho %d anos\n",nome,age);//%s para Strings
    printf("%d",isEmpty);//%d usamos porque o resultado sera 1 ou 0

    return 0;
}
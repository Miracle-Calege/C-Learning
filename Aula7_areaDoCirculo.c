#include<stdio.h>
#include <math.h>

int main() {
    double raio=0.0;
    double area=0.0;
    const double PI=3.14159;//const=final=constante
    printf("Insira o raio\n");
    scanf("%lf",&raio);
    area=PI*pow(raio,2);
    printf("A area do circulo e:%lf",area);



}
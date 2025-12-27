#include <stdio.h>

int main() {

    int age=0;
    float nota=0.0f;//f no final para mostrar que e um float
    char letra='\0';// =null
    char name[30]="";//30 e tamanho da palavra


    printf("Insira o seu nome:\n");
    fgets(name,sizeof(name),stdin);//variavel,tamanho da string(poderiamos ter colocado directamente 30)
    //e stdin
    //usamos esse visto que scanf para de ler assim que encontra
    //um espacoe em branco
        printf("Insira a sua idade:\n");//o metodo recebe uma entrada que ficara na variavel
        //name que deve ser precedida por "&"
    scanf("%d",&age);
    printf("Insira a nota do seu teste:\n");
    scanf("%f",&nota);
    printf("Insira a inicial do sei nome:\n");
    //colocamos um espaco antes de c pois a entrada anterior era um numero
    getchar();//metodo alternativo para resolver o problema de buffer
    scanf("%c",&letra);

    printf("O usuario chama-se :%s, tem %d anos, teve a nota %f e a inicial do nome e %c",name,age,nota,letra);


    return 0;
}
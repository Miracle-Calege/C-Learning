#include <stdio.h>
int main() {
    int quantidade=0;
    float preco=0.0f;
    char produto[50]="";
    float total=0.0f;
    char moeda='$';

    printf("O que deeja comprar?\n");
    fgets(produto,sizeof(produto),stdin);
    printf("Unidade?\n");
    scanf("%d",&quantidade);
    printf("Preco?\n");
    scanf("%f",&preco);
    total=quantidade*preco;
    printf( "Comprou:%s e o total a pagar e:%.1f%c",produto,total,moeda);
    return 0;
}
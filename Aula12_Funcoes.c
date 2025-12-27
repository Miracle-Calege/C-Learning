#include<stdio.h>


void happyBirthday(char nome[],int idade) {//criamos uma funcao do tipo void que canta paraens
    // a funcao deve estar acima da funcao main
    // e colocamos parametros(se o metodo precisar)
    printf("Parabens a voce\n");
    printf("Parabens a voce\n");
    printf("Nesta data querida\n");
    printf("Muitas felicidade\n");
    printf("Muitas felicidade  para %s \n",nome);
    printf("Faz  anos de vida %d \n",idade);
}



int main() {
    char nome[50]="Miracle Calege";
    int idade=19;

    happyBirthday(nome,idade);// aqui chamamos a funcao e colocamos argumentos(se o metodo tiver/precisar)
    happyBirthday(nome,idade);
    happyBirthday(nome,idade);


    return 0;
}


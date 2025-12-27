#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool verificarIdade(int idade) {
    if (idade>=18) {
        return true;
    }else {
        return false;
    }
}

double cube(double num) {
    return num*num*num;
}

int square(int num) { //retorno e int (os tipos de dados tambem podem ser retornos de um metodo)
    return pow(num,2);

}


int main() {
    int x=square(5);// colocamos o resultado do metodo na variavel x
    double y=cube(2.1);
    printf("%d\n",x);
    printf("%lf\n",y);
    if (verificarIdade(18)) {
        printf("Nao podes jogar jogos de azar");
    }else {
        printf("Jogue com moderacao");
    }

    return 0;
}
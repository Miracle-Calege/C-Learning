/* De modo o permitir que as funcoes venham depois da funcao main, usamos funcoes prototipo
 * e considerada uma boa pratica visto que o compilador le o programa de cima para baixo
 *
 *
 */
#include<stdio.h>
#include <stdbool.h>

void hello(char nome[],int idade);// essa e a funcao prototipo, vem antes do mai
// declaramos o tipo de retorno, nome e parametros e ";" depois ela sera desenvolvida a posterior

bool verificarIdade(int idade);

int main() {

    hello("Miracle Calege",19);
    if (verificarIdade(19)) {
        printf("POdes votar");
    }else {
        printf("Tentar nas proximas eleicoes");
    }


    return 0;
}

void hello(char nome[],int idade) {// depois do metodo main desenvolvemos a funcao prototipo
printf("Hello\n");
printf("Chamaste:%s e tens %d anos\n",nome,idade);

}

bool verificarIdade(int idade) {
    return idade>=18;// true se cumprir com esse criterio
}
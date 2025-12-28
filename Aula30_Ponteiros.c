/*ponteiros sao usados para armazenas enderecos de uma outra variavel
 *sao usados para mudar o conteudo da variavel directamente atraves do endereco de memoria
 */
#include <stdio.h>

//void birthday(int idade);
void birthday(int*idade);//adicionamos o prefixo"*"antes da variavel

int main() {

    int idade=19;
    int *pIdade=&idade;//para criar um ponteiro usamos o tipo de dado da variavel * p(minusculo)nome da variavel(a inicial com letra maiuscula)
    //="&"nome da variavel
   // printf("%p",&idade);//para imprimir o endereco usamos "%p","&"e a variavel que desjeamos conhecer o endereco
    // birthday(19);
    // printf("%d",idade);//era suposto que a saida fosse 20, mas em c quando passamos um elemento como argumento de um metodo
    //c cria uma copia dele e as alteracoes serao feitas e guardadas num outro endereco por isso nao veremos as alteracoes na variavel pretendida
    //a solucao e usar ponteiros;
    birthday(pIdade);
    printf("%d",idade);
    return 0;
}

// void birthday(int idade) {
//     idade++;
// }
void birthday(int*idade) {//adicionamos o prefixo"*"antes da variavel
       (*idade)++;// e colocar entre parenteses (*variavel)
     }
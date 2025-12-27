#include <stdio.h>
/*Array 2D e um array onde cada elemento e um array
 *tipo de dado nome da variavel [][]";" [][] representam linhas e colunas
 *inicializacao-> tipo de dado nome da variavel [][]={{},{},{}}";"
 *somos obrigados a declarar o numero de colunas [][numero]
 */


int main() {
int numbers[][3]={{1,2,3},{4,5,6},{7,8,9}};
    // printf("%d ",numbers[0][0]);//linha 0 e coluna 0
    // printf("%d ",numbers[0][1]);//linha 0 e coluna 1 e similar a nested loop

    for (int i=0;i<3;i++) {//linhas
        for (int j=0;j<3;j++) {//colunas
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }


    return 0;
}
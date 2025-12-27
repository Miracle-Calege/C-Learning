#include <stdio.h>
/*nested loops e basicamento uma estrutura de repeticao dentro da outra
 */

int main() {

    for (int i=1;i<=10;i++) {
        for (int j=1;j<=10;j++) {
            printf("%3d ",i*j);//3 antes do d deu  3 " " aos valores
        }
        printf("\n");
    }

    return 0;
}
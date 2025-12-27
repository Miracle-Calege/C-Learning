/*usado quando conhecemos a quantidade de vez que queremos repetir uma
 *determinada accao
 *for(tipo de dado variavel,variavel e a condicao de parada, actualizacao)
 */

#include<stdio.h>
#include<unistd.h>//para linux/mac para poder usar o metodo sleep

int main() {

    for (int i=10;i>0;i--) {
        sleep(1);//para dar uma pause de 1 segundo
        printf("%d\n",i);
    }
    printf("Happy New Year");
    return 0;
}

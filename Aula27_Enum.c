#include <stdio.h>
/*enum sao sempre criadas antes do metodo main
 *criacao enum nome{};
 *se nao associarmos as constantes do enum a algum num, por definicao estarao o primeiro sera associado a 0 e incrementara 1 para os subsequentes
 *para retornar o valor de um enum ->enum nomeDoEnum nomeDaVariavel=o enum que deseja;
* para inicializar o enum-> enum=valor/numero pretendido
* typedef + enum->typedef enum{}nome; isso permite que so usemos o nome do enum como tipo de dado
*
*/


// enum Dias {
// // DOMINGO,SEGUNDA,TERCA,QUARTA,QUINTA,SEXTA,SABADO
//     DOMINGO=1,SEGUNDA=2,TERCA=3,QUARTA=4,QUINTA=5,SEXTA=6,SABADO=7
//
// };

typedef enum{DOMINGO=1,SEGUNDA=2,TERCA=3,QUARTA=4,QUINTA=5,SEXTA=6,SABADO=7}Dias;

int main() {
    //enum Dias hoje=DOMINGO;
    Dias hoje=DOMINGO;
    printf("%d",hoje);



}
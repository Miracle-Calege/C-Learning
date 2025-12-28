#include <stdio.h>
/*typedef e usado para renomear um tipo de dado
 *posso renomear as variaveis do tipo int em tipo numero
 *NB: isso deve ser feito acima ou antes do metodo main
 *criacao typedef tipo de dado anterior o nome que quer dar";"
 *depois muda o tipo de dado anterior pelo novo naa variaveis existente
 */

typedef  int numero;
typedef  char String[50];//quando queremos mudar o char devemos especificar o tamanho
//typedef  char* String;//para nao especificar o tamanho
int main() {

 numero x=3;   //<-int x=3;
 numero y=4;             //<-int y=4;
  String nome="Miracle Calege";   //<-char nome[]="Miracle Calege";


}

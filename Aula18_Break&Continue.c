/*break->sai do loop se uma condicao for cumprida
 *continue-> "salta" o ciclo se uma condicao for cumprida
 *
 *
 */


#include<stdio.h>
int main() {

 for (int i=1;i<=10;i++) {

 //     if (i==4) {
 //         break;// se i ==4 o loop vai parar
 //     }
 //     printf("%d\n",i);
 // }
     if (i==4) {
         continue;// se i ==4 o loop vai saltar o 4
     }
     printf("%d\n",i);
 }



    return 0;
}
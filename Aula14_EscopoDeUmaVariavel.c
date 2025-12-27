#include <stdio.h>
/* escopo de uma variavel e onde uma variavel e reconhecida e acessavel
 * variaveis podem ter o mesmo nome se estiver em escopos diferentes
 * variavel local aquele que so e vista e acessada pelo metodo
 * variavel global e aquela que pode ser acessada por todo programa, aquela variavel que nao foi criada em nenhum metofo
 */
//int result=0;//escopo global, todo o programa tem acesso a essavariavel

int adicionar(int x,int y) {
    int result=x+y;
    return result; // usamos o result na linha 9 e 14 porque estao em escopos diferentes
}
int subtrair(int x,int y) {
    int result=x-y;
    return result; // usamos o result na linha 12 e 14 porque estao em escopos diferentes
}

int main() {

    int result=subtrair(4,3);
    printf("%d",result);


    return 0;
}
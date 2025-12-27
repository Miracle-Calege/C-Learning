#include<stdio.h>
#include <stdbool.h>


//and=&& so sera verdade se as duas condicoes forem verdadeira
// ou=|| para ser verdade so precisa que uma das condicoes seja verdadeira
// nao=!
int main() {

    int temp=20;
    bool isSunny=false;
    // if (temp>0 && temp<30) { //se a segunda condicao fosse temp<20 o output seria false
    //     printf("true");
    // }else {
    //     printf("false");
    // }
    // if (temp>0 || temp>30) { //o output sera true por que a primeira condicao e verdadeira
    //     printf("true");
    // }else {
    //     printf("false");
    // }
if (!isSunny) {// o ! tornou isSunny true
    printf("It's sunny outside");
}else {
    printf("It's cloudy outside");
}



    return 0;
}
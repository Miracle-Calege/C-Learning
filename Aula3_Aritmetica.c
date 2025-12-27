#include <stdio.h>

int main() {
    int x=2;
    int y=3;
    int z;
    z=x+y;
    printf("resultado:%d\n",z);
    z=z-y;
    printf("resultado:%d\n",z);
    printf("resultado:%d\n",z%x);
    x++;//x=x+1 ou x+=1
    printf("resultado:%d\n",x);
    y--;//y=y-1 y-=1;
    printf("resultado:%d",y);
    //x=x*2 == x*=2
    //x=x/2 == x/=2
    return 0;
}

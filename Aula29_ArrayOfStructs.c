#include<stdio.h>
/*array de structs nome da struct nomeDaEstrutura[]={{dados1},{dados2}};
 *os dados serao acessados por via de indices
 *
 */

typedef  struct{
    char modelo[25];
    int ano;
    int preco;
}Carro;

int main() {
    Carro carros[]={{"Rolls & Royce",2021,10000},{"Ferrari",2023,20000},{"Lambo",2022,30000}};
    // Carro carro1={"Rolls & Royce",2021,10000};
    // Carro carro2={"Ferrari",2023,20000};
    // Carro carro3={"Lambo",2022,30000};
    // printf("%s %d %d\n",carro1.modelo,carro1.ano,carro1.preco);
    // printf("%s %d %d\n",carro2.modelo,carro2.ano,carro2.preco);
    // printf("%s %d %d\n",carro3.modelo,carro3.ano,carro3.preco);
    for (int i=0;i<sizeof(carros)/sizeof(carros[0]);i++){
        printf("%s %d %d\n",carros[i].modelo,carros[i].ano,carros[i].preco);

    }

    return 0;
}
/*Struct e parecido com objectos em java opp, onde cada struct tera caracteristicas propria
 *criacao struct nome{caracteristicas}";"
 *e sempre criado antes/acima do metodo main
 *e inicializaremos no metodo main ->struct nome da struct nomeDaObjecto={os argumentos respectivamente as caracteristicas do student em ordem de declaracao na struct };
 *para acessar cada elemento da struct e nome do objecto."elemento desejado"
 *usado typedef->typedef struct{caracteristicas}nome";"
 *para inicializacao(usando typedef) nome da struct nome do object
 */

#include <stdio.h>
#include <stdbool.h>
#include<string.h>//para trabalhar com metodos de strings

// struct Estudante { // essas sao as caracteristicas de um estudante
//     char nome[50];
//     int idade;
//     float media;
//     bool tempoIntegral;
// };

typedef struct {
    char nome[50];
    int idade;
    float media;
    bool tempoIntegral;
}Estudante;


int main() {
    // struct Estudante estudante ={"Miracle Calege",19,20,true};
    //
    //     printf("%s %d %.1f %d",estudante.nome,estudante.idade,estudante.media,estudante.tempoIntegral);

    Estudante estudante={"Miracle Calege",19,20,true};
    Estudante estudante2={"Siswee Calege",20,20,false};
    Estudante estudante3={0};//se quisermos inicializar mais tarde e sempre boa pratica
    //inicializar com 0/null porque c nao tem gc

    strcpy(estudante3.nome,"Calege");//para inicializar strings(objecto.parametro,string desejada)
    estudante3.idade=40;
    estudante3.media=17;
    estudante3.tempoIntegral=true;

    printf("%s %d %.0f %d",estudante.nome,estudante.idade,estudante.media,estudante.tempoIntegral);
    printf(" %s %d %.0f %d",estudante3.nome,estudante3.idade,estudante3.media,estudante3.tempoIntegral);


    return 0;
}



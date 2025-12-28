#include <stdio.h>
/*Para escrever um ficheiro em C ->FILE *p"nome"=fopen(caminho do ficheiro, operacoes que queremos efectuar:w-write, r-read)
 *
 *
 */


int main() {

    char texto[]="Meu primeiro file escrito em c";

    FILE *pFile=fopen("/home/miracle-calege/Documents/C-Learning/firstCFile.txt","w");//fopen()->abre o ficheiro
    if (pFile==NULL) {// se o caminho do ficheiro que quisermos abrir for NULL
        printf("Erro abrindo o ficheiro");
        return 1;//poderiamos retornar qualquero coisa!=0 serviria como codigo de escape
    }

    fprintf(pFile,"%s",texto);//para escrever um ficheiro usamos fprintf(nome do ficheiro,"%tipo de dado que sera inserido",o conteudo(nosso caso texto))
    printf("escrito com sucesso");

    fclose(pFile);//fecha o ficheiro


return 0;
}
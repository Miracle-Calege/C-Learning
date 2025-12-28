#include <stdio.h>
/*Para ler um ficheiro em C ->FILE *p"nome"=fopen(caminho do ficheiro, operacoes que queremos efectuar:w-write, r-read)
 *criamos um array de char nome[tamanho] para armazenar os dados que estamos a ler
 *
 */


int main() {
    char buffer[1024]={0};

    char texto[]="Meu primeiro file escrito em c";

    FILE *pFile=fopen("/home/miracle-calege/Documents/C-Learning/firstCFile.txt","r");//fopen()->abre o ficheiro
    if (pFile==NULL) {// se o caminho do ficheiro que quisermos abrir for NULL
        printf("Erro abrindo o ficheiro");
        return 1;//poderiamos retornar qualquero coisa!=0 serviria como codigo de escape
    }

    while (fgets(buffer,sizeof(buffer),pFile)!=NULL) {//enquanto o fgets nao retornar null
    // como argumentos do fgets teremos(buffer,tamanho do buffers,nome do ficheiro)
        printf("%s",buffer);
    }



    fclose(pFile);//fecha o ficheiro


    return 0;
}

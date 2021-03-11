#include <stdio.h>
//Faça um programa que recebe como parâmetro pela linha de comando 2 nomes de
//arquivos e realize a comparação caracter a caracter entre ambos, informando quantas
//diferenças existem. Caso os arquivos tiverem tamanhos diferentes, informar que é
//impossível realizar a comparação.

//Melyssa Mariana


int main( int argc, char *argv[ ] ){
    FILE *p1,*p2;
    int size1,size2,i = 0;
    char aux1[100]; //utilizado para comparar
    char aux2[100];
    int bufferSize = 100;

    char *nome_arquivo1,*nome_arquivo2, *string, *texto;
    nome_arquivo1 = realloc(NULL,sizeof(nome_arquivo1)*bufferSize);
    nome_arquivo2 = realloc(NULL,sizeof(nome_arquivo2)*bufferSize);
        
    printf("\n Insira o nome de um arquivo: ");
    scanf("%s",nome_arquivo1);
    printf("\n Insira o nome de um outro arquivo: ");
    scanf("%s",nome_arquivo2);

    p1 = fopen(nome_arquivo1,"r");
    p2 = fopen(nome_arquivo2,"r");

    //Calcula tamanho
    fseek(p1,0,SEEK_END);   size1 = ftell(p1);
    fseek(p2,0,SEEK_END);   size2 = ftell(p2);

    if(size1 != size2){
        printf("\n Impossivel realizar comparacao: ");
    }else{

        fgets(aux1,bufferSize,p1);
        fgets(aux2,bufferSize,p2);
        while (! feof(p1)){
            if(strstr(aux1,aux2)==NULL) {  printf("\nnão encontrou\n");}
            else { printf("alou"); i++;}
        }
        printf("\n Quantidade de diferencas: %d ",i);
    }


    fclose(p1); fclose(p2);
    return 0;

}
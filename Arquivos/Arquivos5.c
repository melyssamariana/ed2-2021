#include <stdio.h>
//Faça um programa que divida um arquivo em duas partes iguais. O usuário deverá
//informar o nome do arquivo.

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    FILE *p;
    int size;
    int bufferSize = 100;

    char *nome_arquivo;
        nome_arquivo = realloc(NULL,sizeof(nome_arquivo)*bufferSize);


    printf("\n Insira o nome de um arquivo: ");
    scanf("%s",nome_arquivo);
     
    p = fopen(nome_arquivo,"r");
    if(p == NULL){
        printf("Error");
        return 1;
    }

    fseek(p,0,SEEK_END);
    size = (ftell(p))/2;
    fclose(p);

    printf("\n Cada parte do arquivo eh igual a = %d  bytes",size);
    return 0;

}
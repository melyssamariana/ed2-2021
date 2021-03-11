#include <stdio.h>
#define bufferSize 90
//Faça um programa onde seja informado o nome de um arquivo e o mesmo seja listado na tela

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    char *nome_arquivo;
    nome_arquivo = realloc(NULL,sizeof(nome_arquivo)*bufferSize);

    FILE *p;

    printf("\n Insira o nome de um arquivo: ");
    scanf("%s",nome_arquivo);

    FILE *fopen(nome_arquivo,modo);

    printf("\n nome do arquivo : %s ",nome_arquivo);
    return 0;

}
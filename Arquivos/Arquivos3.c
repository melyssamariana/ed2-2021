#include <stdio.h>
#define bufferSize 100
//Faça um programa que mostre o tamanho de um arquivo informado pelo usuário. Utilize as funções fseek e ftell.

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    FILE *p;
    int size;

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
    size = ftell(p);
    fclose(p);

    printf("\n Tamanho arquivo : %d ",size);
    return 0;

}
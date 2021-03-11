#include <stdio.h>
//Faça um programa que realize a cópia de um arquivo. O usuário deverá informar o
//nome do arquivo original e o nome do arquivo de destino.

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    int bufferSize = 100;

    char i;
    char *nome_arquivo1, *nome_arquivo2;
        nome_arquivo1 = realloc(NULL,sizeof(nome_arquivo1)*bufferSize);
        nome_arquivo2 = realloc(NULL,sizeof(nome_arquivo2)*bufferSize);
    FILE *p,*f;

    printf("\n Insira o nome de um arquivo para copiar: ");
    scanf("%s",nome_arquivo1);
        
    p = fopen(nome_arquivo1,"r");
    if(p == NULL){
        printf("Error");
        return 1;
    }


    printf("\n Insira o nome de um arquivo para colar: ");
    scanf("%s",nome_arquivo2);
    f = fopen(nome_arquivo2,"w");
    if(p == NULL){
        printf("Error");
        return 1;
    }

    while((i = getc(p)) != EOF){
        putc(i,f);
    }
    fclose(p);
    fclose(f);



    return 0;
}
#include <stdio.h>
#define bufferSize 10

//Faça um programa que permita ao usuário digitar um texto de qualquer tamanho. Gravar este texto em um arquivo. O nome do arquivo também deve ser informado pelo usuário.

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    FILE *p;
    char texto[100];
    int i;
    
    char *nome_arquivo;
    nome_arquivo = realloc(NULL,sizeof(nome_arquivo)*bufferSize);   

    printf("\n Digite algo: ");
    gets(texto);
    printf("\n Para Salvar digite o nome do arquivo: ");
    scanf("%s",nome_arquivo);

     p = fopen(nome_arquivo,"w");

    if(!p){printf("Erro ao abrir");}

    for(i=0;texto[i];i++){putc(texto[i],p);}
    fclose(p);
    
    printf("\n Arquivo salvo ");

    return 0;

}
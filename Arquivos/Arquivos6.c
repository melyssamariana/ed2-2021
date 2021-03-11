#include <stdio.h>
//Faça um programa que realize a busca de uma string dentro de um arquivo. Informar
//o nome do arquivo e a string a buscar.

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    FILE *p;
    int bufferSize = 100;
    char *nome_arquivo, *string;

    nome_arquivo = "file.txt";
    string = "teste";

    p = fopen(nome_arquivo,"r");
    
    if(p == NULL){printf("Error");return 1;}

    while ( fgets(string,sizeof(string),p) != NULL){
        printf("\nPalavra nao encontrada ");
    }
    printf("\nPalavra encontrada ");
      
    fclose(p);
    return 0;

}
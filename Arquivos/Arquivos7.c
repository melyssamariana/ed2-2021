#include <stdio.h>
//Refazer o exercício anterior passando o nome do arquivo e a string como parâmetros
//pela linha de comando.

//Melyssa Mariana

int main( int argc, char *argv[ ] ){
    FILE *p;
    int size,i;
    char aux[10];
    
    int bufferSize = 100;

    char *nome_arquivo, *string, *texto;
    nome_arquivo = realloc(NULL,sizeof(nome_arquivo)*bufferSize);
    string = realloc(NULL,sizeof(string)*bufferSize);
        
    printf("\n Insira o nome de um arquivo: ");
    scanf("%s",nome_arquivo);

    printf("\n Insira a string de busca: ");
    scanf("%s",string);

    p = fopen(nome_arquivo,"r");
    
    if(p == NULL){printf("Error");return 1;}

    while ( fgets(string,sizeof(string),p) != NULL){
        printf("\nPalavra nao encontrada ");
    }
    printf("\nPalavra encontrada ");
      
    fclose(p);
    return 0;

}
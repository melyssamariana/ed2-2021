#include <stdio.h>



void selection_sort (int vetor[],int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (vetor[j] > vetor[min]) {
        min = j;
      }
    }
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  /* Imprime o vetor ordenado */
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");
}


int main( int argc, char *argv[ ] ){
  
  int i;
  int max;
  max = 6;

  
  int  vetor[6] = {31,41,59,26,41,58};
  /* Lê os algarismos do vetor */

  
  selection_sort (vetor, 6);

   printf("vetor ordenado: \n");
   for (i = 0; i < (max); i++) {
      printf(" %d,", vetor[i]);
   }
  return 1; 
}
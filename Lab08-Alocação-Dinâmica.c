//Estudo em C
//Lab 8 (Lista 2) - 12/4

//Exercício 1
/*
Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as
suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um
ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de x1
e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *uniao(int *x1, int n1, int *x2, int n2, int *qtd);

int main(void) {
  int x1[] = {1, 3, 5, 6, 7};
  int x2[] = {1, 3, 4, 6, 8};
  int *qtd;
  int n1 = sizeof(x1)/sizeof(x1[0]);
  int n2 = sizeof(x1)/sizeof(x1[0]);

  int *x3 = uniao(x1,n1,x2,n2,&qtd);

  for(int cont = 0;cont<qtd;cont++){
    printf("x3[%d]=%d\n", cont, *(x3+cont));
  }
  
  free(x3);
    
  return 0;
}

int *uniao(int *x1, int n1, int *x2,  int n2, int *qtd){
  int aux = 0;
  int adicionar = 0;
  for(int cont = 0;cont<n1;cont++){
    int igual= 0; 
    for(int cont1 = 0;cont1<n2;cont1++){
        if(*(x1+cont)==*(x2+cont1)){
          igual = 1;
        }
    }
    if(igual == 0){
      adicionar +=1;
    }
  }

  int tam = n2 + adicionar;
  int *x3 = malloc(tam*sizeof(int));

  for(int cont1 = 0;cont1<n2;cont1++){
      x3[cont1] = *(x2+cont1);
    }
  
  for(int cont = 0;cont<n1;cont++){
      int igual= 0; 
      for(int cont1 = 0;cont1<n2;cont1++){
          if(*(x1+cont)==*(x2+cont1)){
            igual = 1;
          }
      }
      if(igual == 0){
        x3[(n2+aux)] = *(x1+cont);
        aux++;
      }
    }
  *qtd = (n2+aux);

  return x3;
  
  free(x3);
}

//Exercício 2
/*
Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as
suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um
ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção
de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *interseccao(int *x1, int n1, int *x2,  int n2,int *qtd);

int main(void) { 
  int x1[] = {1, 3, 5, 6, 7};
  int x2[] = {1, 3, 4, 6, 8};
  int *qtd;
  int n1 = sizeof(x1)/sizeof(x1[0]);
  int n2 = sizeof(x1)/sizeof(x1[0]);

  int *x3 = interseccao(x1,n1,x2,n2,&qtd);

  for(int cont = 0;cont<qtd;cont++){
    printf("x3[%d]=%d\n", cont, *(x3+cont));
  }
  
  free(x3);
  
  return 0;
}

int *interseccao(int *x1, int n1, int *x2,  int n2,int *qtd){
  int igual = 0;
  for(int cont = 0;cont<n1;cont++){
    for(int cont1 = 0;cont1<n1;cont1++){
        if(*(x1+cont)==*(x2+cont1)){
          igual += 1;
        }
    }
  }
  int *x3 = malloc(igual*sizeof(int));
  int cont3 = 0;
  for(int cont = 0;cont<n1;cont++){
    for(int cont1 = 0;cont1<n2;cont1++){
        if(*(x1+cont)==*(x2+cont1)){
          x3[cont3] = *(x1+cont);
          cont3 += 1;
      }
    }
  }

  *qtd=cont3;
  
  return x3;
  
  free(x3);
}

//Exercício 3
/*
Faça um programa que leia a quantidade de elementos n e crie dinamicamente um
vetor de n elementos e passe esse vetor para uma função que irá ler os elementos desse
vetor. Depois, no programa principal, o vetor preenchido deve ser impresso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ler(int *v,int tamanho);

int main(){
  int tamanho = 0;
  int *vetor;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&tamanho);
  vetor = malloc(tamanho*sizeof(int));
  ler(vetor,tamanho);
  for(int cont=0;cont<tamanho;cont++){
    printf("v[%d]=%d\n", cont, *(vetor+cont));
  }
  free(vetor);
}

void ler(int *v,int tamanho){
  for(int cont=0;cont<tamanho;cont++){
    printf("Insira um valor para a posição %d\n", cont);
    scanf("%d",v+cont);
  }
}

//Exercício 4
/*
Utilizando alocação dinâmica de matrizes, escreva um programa para receber duas
matrizes de tamanho 3x3 e calcular seu produto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIN 3
#define COL 3

int main(){
  int *mat1;
  int *mat2;
  int i;
  int j;
  int l;
  
  mat1 = malloc (LIN * COL * sizeof (int));
  mat2 = malloc (LIN * COL * sizeof (int));

  printf("Matriz 1\n");
  for(i=0; i < LIN; i++){
    for(j=0; j < COL; j++){
      printf("Mat1[%d][%d] = ",i,j);
      scanf("%d",&mat1[(i*COL) + j]);
    }
  }
  printf("\nMatriz 2\n");
  for(i=0; i < LIN; i++){
    for(j=0; j < COL; j++){
      printf("Mat2[%d][%d] = ",i,j);
      scanf("%d",&mat2[(i*COL) + j]);
    }
  }

  printf("\nProduto da Matriz 3x3: \n");

  for(i=0; i < LIN; i++){
    for(j=0; j < COL; j++){
        int soma=0;
        for(l=0; l < COL; l++){
           soma = soma + ((*(mat1+((i*COL) + l)))*(*(mat2+((l*COL) + j))));
        }
      printf("%3d ",soma);
      }
    printf("\n");
    }

  free (mat1);
  free (mat2);
}

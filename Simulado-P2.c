//Estudo em C
//Simulado P2 - 17/5

//Exercício 1
/*
Considere o trecho de código dado abaixo:

#include <stdio.h>

int main(void){
  int a = 10;
  int b = 20;

  int *p1 = &a;
  int *p2 = &b;

  *p1 = 2;
  a = 3;
  *p2 = 7;

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", p1);  
  printf("%d\n", p2+1);   [Linha 17]
  printf("%d\n", *(p2+1));

  return 0;
}

Considerando que a variável 'a' esteja alocada na posição 314490 da stack e
a variável 'b' alocada na posição 314486 da stack, o que será impresso na linha 17 do código ?
*/
314490
  
//Exercício 2
/*
Considerando a função abaixo, responda:

int func(int x, int b){
  return 2*x + b;
}

Qual será o valor retornado pela chamada func(func(6, func(7,7)), 7). 
Obs: Caso essa chamada seja inválida, responda com -1.
*/
73
  
//Exercício 3
/*
Os ponteiros são [Variáveis]  que conseguem armazenar [Endereços].
*/
Funções Variáveis Strings Procedimentos Endereços Vetores
  
//Exercício 4
/*
As [Strings] são representadas através de [Vetores] do tipo [Char] e terminam com um caractér especial, o [0]
*/

//Exercício 5
/*
Considerando o assunto de arquivos, responda com as afirmações corretas:
*/
[X]a. fprintf é uma função que permite a escrita de strings em arquivos
[X]b. fscanf é uma função que permite a leitura de números a partir de arquivos.
[X]c. Em C os arquivos na verdade são streams, isto é, representam sequência de bytes.
[ ]d. Há 4 modos de abertura de arquivos: leitura, gravação, criação e exclusão
[ ]e. A seguinte linha de código abre um arquivo para leitura: FILE * f = malloc("arquivo.txt", "r");
  
//Exercício 6
/*
Sobre matrizes, assinale as afirmações corretas.
*/
[ ]a. Uma matriz alocada de forma estática deve ser desalocada utilizando a função free.
[ ]b. A seguinte linha de código aloca uma matriz de 9 linhas e 9 colunas: int M[10][10];
[X]c. Uma matriz pode ser alocada utilizando ponteiros para ponteiros
[X]d. Os elementos de uma matriz alocada de forma estática estão dispostos de forma contínua na memória RAM

//Exercício 7
/*
Sobre recursão, assinale as aifmrações corretas:
*/
[X]a. Toda função recursiva precisa de, pelo menos, 1 caso base.
[ ]b. Não é permitido o uso de iterações dentro de uma função recursiva
[X]c. Uma função recursiva sempre deve invocar a si mesma
[ ]d. Toda função recursiva pode ser reescrita como uma função não-recursiva usando iterações
[ ]e. Uma função recursiva não pode utilizar a palavra chave return.

//Exercício 8
/*
Um struct não pode conter outra struct (aninhada)
*/
[ ]Verdadeiro
[X]Falso 
  
//Exercício 9
/*
A alocação de um vetor estático pode ser feita utilizando memórias não-sequenciais da RAM.
*/
[ ]Verdadeiro
[X]Falso 
  
//Exercício 10
/*
Os dois fragmentos seguintes produzem o mesmo resultado:

a) for(i=0; i<10; i++)
      for(j=0; j<10; j++){
        v1[i+j]=i+j;
        printf(%d, v1[i+j]);
      }
b) for(i=0; i<10; i++)
      for(; j<10; j++){
        v2[i+j]=i+j;
        printf(%d, v2[i+j]);
      }
*/
[ ]Verdadeiro
[X]Falso 
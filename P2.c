//Estudo em C
//P2 - 07/6

//Exercício 1
/*
Uma professora de escola infantil deseja armazenar os dados de idade das crianças matriculadas na sua sala. Para isso pediu ao seu filho que estuda na FEI desenvolver um app para apenas armazenar o nome da criança e a idade. Como são salas pequenas o primeiro nome é suficiente, além do mais é importante que se ordene por idade decrescente! Assim ela conseguirá priorizar os alunos que ela irá iniciar o processo de desfralde primeiro. 

Dessa forma, você irá fazer uma interface simples em HTML que integrará com C. Nessa primeira parte você testará a sua lógica de armazenar nomes e idades, além de ordenar de forma decrescente.

Importante! Armazenar os meses da criança é imperativo. Dessa forma é comum armazenar dados fracionados, ou seja, 2 anos e 6 meses = 2,5 anos. Sua mãe como é legal, falou que você não precisa se preocupar em fazer a transformação, ela já vai inserir os anos de forma correta .
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNINHOS 5

typedef struct 
{
    char nome [50];  
    float idade;    
} Pessoa;

void imprime(Pessoa *ptr, int n);
void ordena (Pessoa p[], int n);

int main(void) {

  Pessoa p[MAX_ALUNINHOS];
  Pessoa *ptr;
  ptr=p;
  
  --> Implementar método para ler nome e idade
  
  --> Complementar chamada dos métodos
  
  ordena();
  imprime();
}

void imprime(Pessoa *p, int n){
  for(int i=0; i<n;i++){
    -->Imprimir peso e idade
  
  }
}
void ordena(Pessoa *p, int n){
  Pessoa atual;
    --> Implementar lógica de ordenação

  }
  
//Exercício 2
/*
Complete o algoritmo abaixo para encontrar o maior valor em um vetor:

[   ] maior([   ] v, int n){
int i = 0;
int m = v[   ];   
   [   ]{
      [   ]{
          [   ];
      }
   }
return m;
}

[for(i=1; i < n; i++)] [int] [int*] [if(m > v[i])] [while(m > v[i])] [if(m < v[i])] [m = v[i]] [int**] 

*/
[int] maior([int*] v, int n){
int i = 0;
int m = v[0];   
   [for(i=1; i < n; i++)]{
      [if(m < v[i])]{
          [m = v[i]];
      }
   }
return m;
}

//Exercício 3
/*
Uma área de memória com 10 elementos pode ser alocada dinamicamente conforme a linha abaixo:

int v[10];
*/
[ ]Verdadeiro
[X]Falso 

//Exercício 4
/*
Uma matriz estática em C de 10 linhas e 20 colunas pode ser criada conforme a seguinte instrução:

int V[10][20];
*/
[X]Verdadeiro
[ ]Falso 

//Exercício 5
/*
Considere o código e assinale as afirmações verdadeiras:

struc nome{
  char primeiro[30];
  char sobrenome[30];
};
struc ficha{
  float altura;
  float peso;
};
struc pessoa{
  struc nome n;
struc ficha f;
};

*/
[ ]a. A declaração da struct está errada
[ ]b. Considerando que x seja do tipo struct pessoa,x.nome.sobrenome é um ponteiro
[ ]c. Considerando que x seja do tipo struct pessoa, o acesso à segunda letra do primeiro nome pode ser feito como:
      x.nome.primeiro[1]
[X]d. Um struct pode ter uma única variável

//Exercício 6
/*
Considerando o estado da memória ilustrado na figura abaixo, qual será a saída da linha de código:
printf("%d", *(B+1));

Identificador de variável - A     - B     - C     - D     - E
Tipo                      - int   - int*  - int   - int   - int* 
Valor da memória          - 3     - #2008 - 1     - 2     - #2000
Endereço de memória       - #2000 - #2004 - #2008 - #2012 - #2000 
*/
2

//Exercício 7
/*
Toda função recursiva por ser reescrita como função iterativa
*/
[X]Verdadeiro
[ ]Falso 
//Estudo em C
//Lab 11 - 03/5

//Exercício 1
/*
Potência

Implemente a função Pot que imprime o valor de xn, onde x∈R e n é um número inteiro.

Utilizar recursão, dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Entrada                                                     Saída:
2  -3                                                           0.1250
5   3                                                           125
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double Pot (int,int);
int main(){
  int num=0;
  int exp=0;
  scanf("%d", &num);
  scanf("%d", &exp);
  printf("%.4lf",Pot(num,exp)) ;
}

double Pot(int num,int exp){
  double valor=num;
  if(exp>0){
    while(exp-1>0){
    return num*(Pot(num,exp-1)) ;
  }
  }
  if(exp==1){
    return num;
  }
  else{
    for(int i=0;i>exp+1;i--){
        valor=(valor*num);        
    }
    
    return 1/valor;
    }
    
  
  return 1; 
}

//Exercício 2
/*
Frequência de Números

Dada uma sequência de n números inteiros imprimir quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.


Exemplo:

Entrada:                                                   
7
9
11
9
13
5
11
11
Saída:
5 aparece 1 vez(es)
9 aparece 2 vez(es)
11 aparece 3 vez(es)
13 aparece 1 vez(es)

https://www.geeksforgeeks.org/bubble-sort/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define limite 10000
int lin[limite];
int n[limite];

int main(int argc,char *argv[]){
 int steve,erhg;
 scanf("%d",&steve);

 for(erhg=0;erhg<limite;erhg++)lin[erhg]=0;
 for(erhg=0;erhg<steve;erhg++){
  scanf("%d",&n[erhg]);
 }
 for(erhg=0;erhg<steve;erhg++){
  lin[n[erhg]]++;
 }
 for(erhg=0;erhg<limite;erhg++){
  if(lin[erhg]!=0)
   printf("%d aparece %d vez(es)\n",erhg,lin[erhg]);
 }
 return 0;
}

//Exercício 3
/*
Série Harmônica

Implemente, de forma recursiva, a série harmônica:

{\displaystyle \sum _{k=1}^{\infty }{\frac {1}{k}}=1+{\frac {1}{2}}+{\frac {1}{3}}+{\frac {1}{4}}+\cdots }


Utilizar recursão, dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Entrada                                                     Saída:
1                                                                1
10                                                              2.9290

https://pt.wikipedia.org/wiki/S%C3%A9rie_harm%C3%B3nica_%28matem%C3%A1tica%29
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float count = 0;
float res = 0;
float har(float x)
{
  if (count == x)
  {
    return res;
  }
  else
  {
    count++;
    res += 1 / count;
    return har(x);
  }
}
int main()
{
  float x;
  scanf("%f", &x);
  printf("%.4f", har(x));
}

//Exercício 4
/*
Torre de Hanói

Torre de Hanói é um "quebra-cabeça" que consiste em uma base contendo três pinos, em um dos quais são dispostos alguns discos uns sobre os outros, em ordem crescente de diâmetro, de cima para baixo.

O problema consiste em passar todos os discos de um pino para outro qualquer, usando um dos pinos como auxiliar, de maneira que um disco maior nunca fique em cima de outro menor em nenhuma situação.

O número de discos pode variar sendo que o mais simples contém apenas três.

É interessante observar que o número mínimo de "movimentos" para conseguir transferir todos os discos da primeira estaca à terceira é 2n−1, sendo n o número de discos. 

Logo:

Para solucionar um Hanói de 4 discos, só necessários 15 movimentos

Para solucionar um Hanói de 7 discos, são necessários 127 movimentos

Para solucionar um Hanói de 15 discos, são necessários 32.767 movimentos

Para solucionar um Hanói de 64 discos, como diz a lenda, são necessários 18.446.744.073.709.551.615 movimentos.

Elaborar um programa que recebe um número inteiro positivo n e que imprima o número de movimentos para solucionar um Hanói de n discos.

Utilizar recursão.

Exemplo:

Entrada                                                     Saída:
Digite o numero de discos:                       Numero de movimentos com 15 discos: 32767.
15                        

https://pt.wikipedia.org/wiki/Torre_de_Han%C3%B3i
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count=0;
int res = 1;
int hanoi(int x){
    if(count == x){
        return res-1;
    }else{
        count ++;
        res *= 2;
        return hanoi(x);
    }
}
int main(){
    int x;
    printf("Digite o numero de discos:\n");
    scanf("%d", &x);
    printf("Numero de movimentos com %d discos: %d.\n", x, hanoi(x));
}

//Exercício 5
/*
Conjectura de Collatz

A conjectura de Collatz é uma conjectura matemática que recebeu este nome em referência ao matemático alemão Lothar Collatz, que foi o primeiro a propô-lo, em 1937.

Esta conjectura aplica-se a qualquer número inteiro e positivo n, e diz-nos para, se este número for par, o dividir por 2, e se for impar, para multiplicar por 3 e adicionar 1.

Desta forma, por exemplo, se a sequência iniciar com o número 5 ter-se-á: 5; 16; 8; 4; 2; 1.

A conjectura apresenta uma regra dizendo que, qualquer número inteiro e positivo, quando aplicado a esta regra, eventualmente sempre chegará a 4, que se converte em 2 e termina em 1.

Considere a seguinte operação em um número inteiro positivo arbitrário dada por:

Se o número é par, divida-o por 2;
Se é ímpar, multiplique-o por 3 e some 1
Em notação aritmética, a função  é definida para todo x inteiro e positivo e tal que:

{\displaystyle C(x)={\begin{cases}3x+1&{\text{if }}x\equiv 1{\pmod {2}}\\x/2&{\text{if }}x\equiv 0{\pmod {2}}\end{cases}}}


Elaborar um programa que recebe um número inteiro positivo x e que imprima a sequência gerada pela função C(x).

Utilizar recursão.

Exemplo:

Entrada               Saída:
5                          5 16 8 4 2 1

https://pt.wikipedia.org/wiki/Conjectura_de_Collatz
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count = 0;
int res = 1;
int C(int n){
    if (count == n || n == 1){
        printf("%d ", n);
        return n;
    }else{
        count++;
        printf("%d ", n);
        if (n%2==0){
            n= n / 2;
        }else if(n%2==1){
            n= (3 *n) + 1;
        }
        return C(n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    C(n);
}
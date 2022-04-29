//Estudo em C
//Lab 1 - 15/2

//Exercício 1
//Elaborar um programa para calcular e exibir o quadrado de apenas UM número inteiro.
#include <stdio.h>
#include<stdlib.h>

int main() {
  int num, quadrado;
  scanf("%d",&num);
  quadrado = num*num;
  printf("%d",quadrado);
}

//Exercício 2
/*
Dados os coeficientes reais a, b e c, de um polinômio do segundo grau, com a diferente de zero. Elaborar um programa para calcular e exibir a abcissa do vértice da parábola.
A saída deve ser um número com 4 casas após o ponto decimal.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

  double A, B, C, resultado;

  scanf("%lf%lf%lf", &A, &B, &C);

  resultado = -B/(2*A);

  printf("%.4lf", resultado);
    }

//Exercício 3
//Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
#include <stdio.h>
#include<stdlib.h>

int main() {
  int valor, seg, min, hrs;
  scanf("%d",&valor);

  hrs = valor/3600;
  min = (valor%3600)/60;
  seg = (valor%60);
  
  printf("%d:%d:%d",hrs,min,seg);
}

//Exercício 4
/*
Leia 3 valores, no caso, variáveis Q, L e P, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota Q tem peso 2, a nota L tem peso 3 e a nota P tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos. 
*/
#include <stdio.h>
#include<stdlib.h>

int main() {
  double Q, L, P, media;
  scanf("%lf %lf %lf", &Q, &L, &P);

  int p1,p2,p3;

  p1 = 2;
  p2 = 3;
  p3 = 5;

  media = ((Q*2)+(L*3)+(P*5))/(p1+p2+p3);
  
  printf("MEDIA = %.1f",media);
}

//Exercício 5
/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Exemplo:

576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00 
*/
#include <stdio.h>
#include<stdlib.h>

int main() {
  int num, cem, cinq, vint, dez, cinco, dois, um, resto;
  scanf("%d",&num);

  cem = num / 100;
  resto = num % 100;
  cinq = resto / 50;
  resto = num % 50;
  vint = resto / 20;
  resto = resto % 20;
  dez = resto / 10;
  resto = resto % 10;
  cinco = resto / 5;
  resto = resto % 5;
  dois = resto / 2;
  resto = resto % 2;
  um = resto / 1;
  resto = resto % 1;
  
  printf("%d nota(s) de R$ 100,00  \n",cem);
  printf("%d nota(s) de R$ 50,00  \n",cinq);
  printf("%d nota(s) de R$ 20,00  \n",vint);
  printf("%d nota(s) de R$ 10,00  \n",dez);
  printf("%d nota(s) de R$ 5,00  \n",cinco);
  printf("%d nota(s) de R$ 2,00  \n",dois);
  printf("%d nota(s) de R$ 1,00  \n",um);
}

//Exercício 6
/*
Dado um número de 3 algarismos construir outro número

de quatro algarismos com a seguinte regra

a) os três primeiros algarismos, contados da esquerda para

direita são iguais aos do número dado

b) O quarto algarismo é um dígito de controle calculado da seguinte forma:

Primeiro algarismo + segundo algarismo x 3 + terceiro algarismo x 5;

o dígito de controle é igual ao resto da divisão dessa soma por 7
*/
#include<stdio.h>
#include<math.h>

int main()
{
   int num1,num2,num3,num4 ,x,digito,digitos;

   scanf("%d",&digito);

	num3 = digito % 10;
	x = digito / 10;
	num2 = x % 10;
	x = x / 10;
	num1 = x % 10;
	x = num1 + ( num2 * 3 ) + ( num3 * 5 );
	num4 = x % 7;
	digitos = digito * 10 + num4;


    printf("%d\n",digitos);
}
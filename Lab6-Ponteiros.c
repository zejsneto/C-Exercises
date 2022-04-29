//Estudo em C
//Lab 6 - 29/3

//Exercício 1
/*
Leia um vetor x  com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o módulo do vetor  x,   |x|.

|x|=∑i=1nx2i−−−−−√ 

Teste a função fazendo uma chamada dentro da função "main".

Utilize ponteiros.

Imprima o resultado solicitado com 4 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

2 3 4                                   Modulo = 5.0000

3 1 1 1                                Modulo = 1.7321
*/
#include <stdio.h>
#include <math.h>

double modulo(double v[], int);

int main() {
  int n;
  scanf("%d", &n);
  double v[n];
  for (int i=0; i<n; i++){
    scanf("%lf", &v[i]);
  }
  printf("Modulo = %.4lf", modulo(v, n));
}

double modulo (double *v, int n){
  
  double soma=0;
  for (int i=0; i<n; i++){
    soma+=v[i]*v[i];
  }
  return sqrt(soma);
}

//Exercício 2
/*
Leia dois vetores x e y com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o produto escalar  x⋅y  entre os dois vetores.

x⋅y=∑i=1nxiyi

Utilize ponteiros.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 4 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

3                                         6.0000

1 1 1

2 2 2         
*/
#include <stdio.h>
#include <math.h>
double prodEsc (double *u, double *v, int n)
{
  double soma1=0;
  for(int i=0; i<n; i++){
    soma1+=u[i]*v[i];
  }
  return soma1;
}
int main()
{
    int i = 0;
    int tam = 0;
    double presc = 0;

    scanf("%d", &tam);

    double x[tam];
    double y[tam];

    for (i = 0; i < tam; i++)
        scanf("%lf", &x[i]);

    for (i = 0; i < tam; i++)
        scanf("%lf", &y[i]);

    presc = prodEsc(x, y, tam);

    printf("Produto Escalar = %.4lf\n", presc);

    return 0;
}

//Exercício 3
/*
Observe o código e responda às perguntas:
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int a, b;
int *ptr;
a = 5;
b = 3;
ptr = &a;
*ptr = 10;
ptr = &b;
*ptr = *ptr + 4;

printf("a) %d\n", *ptr); [Linha 16]
printf("b) %d\n", b);    [Linha 17]
printf("c) %d\n", a);    [Linha 18]
return 0;
}

O que será impresso:

Na linha 16:
Na linha 17:
Na linha 18:
*/
7
7
10
//Exercício 4
/*
Observe o código e responda às perguntas:

#include <stdio.h>
#include <stdlib.h>
int main (void)
} 
int x = 5;
int *ptr;

ptr = &x;

printf("a) %d\n", *ptr);   [Linha 11]
printf("b) %d\n", ptr);    [Linha 12]
printf("c) %d\n", &ptr);   [Linha 13]
printf("d) %d\n", &*ptr);  [Linha 14]
printf("e) %d\n", **&ptr); [Linha 15]
return 0;
}

Supondo que o endereço do ponteiro ptr é #5008 e o endereço de x é #5012, o que será impresso:
Na linha 11:
Na linha 12:
Na linha 13:
Na linha 14:
Na linha 15:
*/
5
#5012
#5008
#5012
5
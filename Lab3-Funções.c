//Estudo em C
//Lab 3 - 08/3

//Exercício 1
/*
Elaborar um programa para exibir a distância entre dois pontos em R2. 
Use uma função dist2


Exemplo

Entrada:           

Digite as coordenadas do 1o. ponto:

0 0

Digite as coordenadas do 2o. ponto:

1 1

Saída:

Distancia entre os dois pontos: 1.414214
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist2(int, int, int, int);

int main(){
  int a, b, c, d;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%d",&c);
  scanf("%d",&d);
  printf("Distancia entre os dois pontos: %f", dist2(a, b, c, d));
}

float dist2 (int a, int b, int c, int d){
  float x;
  x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
  
  return x;
}

//Exercício 2
/*
Elaborar um programa para exibir a distância entre dois pontos do R^3. 
Use uma função dist3


Exemplo

Entrada:           

Digite as coordenadas do 1o. ponto:

0 0 0

Digite as coordenadas do 2o. ponto:

1 1 1

Saída:

Distancia entre os dois pontos: 1.732051
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist3(float, float, float, float, float, float);

int main(){
  float a, b, c, d, e, f;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%f",&d);
  scanf("%f",&e);
  scanf("%f",&f);
  printf("Distancia entre os dois pontos: %f", dist3(a, b, c, d, e, f));
}

float dist3(float a, float b, float c, float d, float e, float f){
  float x;
  x=sqrt(((a-d)*(a-d))+((b-e)*(b-e))+((c-f)*(c-f)));
  
  return x;
}

//Exercício 3
/*
Elaborar um programa para exibir o produto escalar de dois vetores em R3. 
Use uma função prodEsc.


Exemplo

Entrada:           

Digite as coordenadas do 1o vetor:

2.8 9.4 -8.4

Digite as coordenadas do 2o vetor:

2.8 -4.2 3.7

Saída:

Produto Escalar: -62.719997
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float prodEsc(float, float, float, float, float, float);

int main(){
  float a, b, c, d, e, f;
  printf("Digite as coordenadas do 1o vetor:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  printf("Digite as coordenadas do 2o vetor:\n");
  scanf("%f",&d);
  scanf("%f",&e);
  scanf("%f",&f);
  printf("Produto Escalar: %f", prodEsc(a, b, c, d, e, f));
}

float prodEsc (float a, float b, float c, float d, float e, float f){
  float x;
  x=((a*d)+(b*e)+(c*f));
  
  return x;
}

//Exercício 4
/*
Elaborar um programa para exibir o cosseno de um ângulo dado em graus.
Use uma função cosseno().


Exemplo

Entrada:           

Digite o angulo em graus:

45

Saída:

O cosseno de 45.000000 graus eh 0.707107
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

int main(){
  double a, x;
  printf("Digite o angulo em graus:\n");
  scanf("%lf", &a);
  x = cos(a*PI/180);
  printf("O cosseno de %lf graus eh %lf", a, x);

}

//Exercício 5
/*
Elaborar um programa para exibir o arco cujo cosseno é um valor x∈[-1, 1] .
Use uma função arccos()


Exemplo

Entrada:           

Digite o valor do arccos:

0.5

Saída:

O arccos de 0.500000 eh 60.00 graus.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void arccos(float entrada){
    printf("\nO arccos de %f eh %.2f graus.", entrada, (acos(entrada)*180)/3.14159265358979323846);

}

int main(){
    
    float entrada;
    printf("Digite o valor do arccos:");
    scanf("%f", &entrada);
    arccos(entrada);
}

//Exercício 6
/*
Elaborar um programa para exibir em graus um ângulo dado em radianos.
Use uma função graus()


Exemplo

Entrada:           

Digite o angulo em radianos:

3.141593

Saída:

O angulo de 3.141593 radianos equivale a 180.000000 graus.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

int main(){
  double a, x=0;
  printf("Digite o angulo em radianos:\n");
  scanf("%lf", &a);
  x = (a*180)/PI;
  printf("O angulo de %.6f radianos equivale a %.6f graus.",a, x); 
}

//Exercício 7
/*
Elaborar um programa para exibir o módulo de um vetor em R3. 
Use uma função modulo() e variavel float

Exemplo

Entrada:           

Digite as coordenadas do vetor:

-1 2 4.5

Saída:

Modulo do vetor: 5.024938
*/
#include <stdio.h>
#include <math.h>


int main(){
    float a, b, c, d;
    printf("Digite as coordenadas do vetor:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = sqrt((a*a)+(b*b)+(c*c));
    printf("Modulo do vetor: %f",d);
}

//Exercício 8
/*
Elaborar um programa para exibir o ângulo, em graus,  entre dois vetores não nulos do R3. 

cosθ=u⋅v / |u||v|

Utilize variável float e  #define PI 3.14159265359

Exemplo

Entrada

Digite as coordenadas do 1o. vetor nao nulo:

1 1 4

Digite as coordenadas do 2o. vetor nao nulo:

-1 2 2

Saída

Angulo entre os dois vetores: 44.999996 graus.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846


int main(){
    float a, b, c, d, e, f, g, h, i, j, k, l, m;
    printf("Digite as coordenadas do 1o vetor nao nulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Digite as coordenadas do 2o vetor nao nulo:\n");
    scanf("%f %f %f", &d, &e, &f);
    g=(a*d)+(b*e)+(c*f);
    h=sqrt((a*a)+(b*b)+(c*c));
    i=sqrt((d*d)+(e*e)+(f*f));
    k=h*i;
    j=g/k;
    l=acos(j);
    m=l*180/PI;
    
    printf("Angulo entre os dois vetores: %f graus.",m);
}

//Exercício 9
/*
Elaborar um programa para exibir a média μ  de n números reais.

μ=∑ni=1xin

Utilize variável float


Exemplo

Entrada

4 1 2 3 4

Saída

Media = 2.500000
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float entrada2, soma;
    int entrada1;
    soma = 0;
    
    scanf("%d", &entrada1);

    for (int i = entrada1; i > 0; i--){
        scanf("%f", &entrada2);
        soma = entrada2+soma;
    }
    printf("Media = %f", soma/entrada1);

}

//Exercício 10
/*
Elaborar um programa para exibir desvio padrão amostral s e a variância amostral s2  de n números reais.

s2=1n−1⎡⎣∑i=1nx2i−1n(∑i=1nxi)2⎤⎦


Utilize variável float

Exemplo

Entrada

5 -5 6 -9 8 5

Saída

Desvio Padrao Amostral = 7.516648

Variancia Amostral = 56.500002
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, x, x2, i, s,c, d;
    x=0;
    x2=0;
    scanf("%f", &a);
    for(i=1;i<=a;i++){
        scanf("%f", &b);
        x+=b;
        x2=x2+(b*b);
    }
    c=(x2-(x*x)/a);
    d=c/(a-1);
    
    s=sqrt(d);
    printf("Desvio Padrao Amostral = %f\n", s);
    printf("Variancia Amostral = %f", d);
}

//Exercício 11
/*
Elaborar um programa que informa se  dado um número inteiro e positivo  é primo ou se é composto.
Utilize variável int
Exemplo

Entrada                      Saída

Digite um numero inteiro e positivo: 

13                                Primo

Digite um numero inteiro e positivo: 

45                                Composto
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int entrada, teste;
    teste = 0;
    printf("Digite um numero inteiro e positivo:");
    scanf("%d", &entrada);

    for(int i = 2; i <= entrada; i++){
        if(entrada%i == 0){
            teste++;
        }
    }
    if(teste >= 2){
        printf("\nComposto");
    }else{
    printf("\nPrimo");
    }
}

//Exercício 12
/*
Regressão Linear
https://www.ime.usp.br/~fmachado/MAE229/AULA10.pdf

Para efetuarmos uma regressão linear usamos a equação:


y=α+β⋅x

onde:

α=ym−β⋅xm  

β=sxysxx

xm=1n∑i=1nxi

ym=1n∑i=1nyi

sxy=∑i=1nxiyi−n⋅xm⋅ym

sxx=∑i=1nx2i−n⋅(xm)2

O coeficiente de correlação é dado por:

r=sxysxx⋅syy−−−−−−√

Utilize função void regrLinear (int n){} nos quais os parâmetros são float.

Exemplo

Entrada:           

Digite o numero de pontos: 2

Digite o valor da variavel x: 1

Digite o valor da variavel y: 8

Digite o valor da variavel x: -1

Digite o valor da variavel y: 2

Digite o valor a ser estimado: 3



Saída:

Equacao do Modelo: y = 3.000000*x + (5.000000)

Coeficiente de correlacao: 1.000000

Estimativa para x = 3.000000 eh y= 14.000000
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void regrLinear(int n)
{
  int i = 0;
  float estimated, x = 0, y = 0, alpha = 0, beta = 0, xm = 0, ym = 0, Sxy = 0, Sxx = 0, Syy = 0;
  float r = 0, somatoriaX = 0, somatoriaY = 0, somatoriaXY = 0, somatoriaX2 = 0, somatoriaY2 = 0;

  while (i < n)
  {
    printf("\nDigite o valor da variavel x: ");
    scanf("%f", &x);

    printf("\nDigite o valor da variavel y: ");
    scanf("%f", &y);

    if (x > 0)
    {
      somatoriaX += x;
    }
    else
    {
      somatoriaX += (x * -1);
    }
    somatoriaX2 += (x * x);
    somatoriaY2 += (y * y);
    somatoriaY += y;
    somatoriaXY += (x * y);

    i++;
  }

  xm = ((1 / n) * somatoriaX);
  ym = (pow(n, -1) * somatoriaY);
  Sxy = (somatoriaXY - n * xm * ym);
  Sxx = (somatoriaX2 - n * pow(xm, 2));
  Syy = (somatoriaY2 - n * pow(ym, 2));
  beta = Sxy / Sxx;
  alpha = ym - beta * xm;
  
  r = (Sxy / (sqrt((Sxx * Syy))));

  printf("\nEquacao do Modelo: y = %f*x + (%f)", beta, alpha);
  printf("\nCoeficiente de correlacao: %f", r);
  printf("\nDigite o valor a ser estimado: ");
  scanf("%f", &estimated);
  y = alpha + (beta * estimated);
  printf("\nEstimativa para x = %f eh y= %f", estimated, y);
};


int main()
{
  int n;

  printf("Digite o numero de pontos: ");
  scanf("%d", &n);
  
  regrLinear(n);
}
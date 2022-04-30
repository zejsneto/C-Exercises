//Estudo em C
//Lab 4 - 14/3

//Exercício 1
/*
Leia um vetor Valores com n componentes do tipo double e

defina uma função para determinar a média entre os n elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

5 -9.5 4.9 5.3 0 3.6              0.86
*/
#include <stdio.h>

double media(double[], int);

int main(){
  int lim;
  scanf("%d", &lim);
  double v[lim];
  for (int i=0; i< lim; i++){
    scanf("%lf", &v[i]);
    }
  printf("%.2lf", media(v, lim));
  
}

double media(double v[], int lim){
  double soma=0;
  double media;
  for (int i=0; i<lim; i++){
    soma+= v[i];
  }
  media=soma/lim;
  return media;
}

//Exercício 2
/*
Leia um vetor Taxas com n componentes do tipo double e

defina uma função para determinar o índice do maior valor dentre os n elementos do vetor  Taxas.

Teste a função fazendo uma chamada dentro da função "main". O resultado deverá ser do tipo int

Exemplo:

Entrada:                             Saída:

5 -9.5 4.9 5.3 0 3.6              2
*/
#include <stdio.h>

int maior(double[], int);

int main(){
  int lim;
  scanf("%d", &lim);
  double Taxas[lim];
  for (int i=0; i< lim; i++){
    scanf("%lf", &Taxas[i]);
    }
  printf("%d", maior(Taxas, lim));
  
}

int maior(double Taxas[], int lim){
  int indice;
  int valor=Taxas[0];
  for(int i=0; i<lim;i++){
    if (Taxas[i]>valor){
      valor=Taxas[i];
      indice=i;
      
    }
  }
  return indice;
  
}

//Exercício 3
/*
Leia um vetor com n componentes do tipo int e

defina uma função para inverter os n elementos do vetor.

Exemplo:

Entrada:                             Saída:

5 9 5 3 7 1                          1 7 3 5 9 
*/
#include <stdio.h>

int inv(int[],int);

int main(){
  int lim;
  scanf("%d", &lim);
  int v[lim];
  for (int i=0; i< lim; i++){
    scanf("%d", &v[i]);
    }
  inv(v, lim);

}

int inv(int v[], int lim){
  for (int i=lim-1; i>=0; i--){
    printf("%d ", v[i]);
    }
  return 0;
  
}

//Exercício 4
/*
Leia um vetor Valores com n componentes do tipo double e

defina uma função para determinar o desvio padrão amostral s dos n elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima os resultados do desvio padrão e a variância amostral s2  com 2 casas após o ponto decimal.


s=∑ni=1(xi−x¯¯¯)2n−1−−−−−−−−−−−−√

e

x¯¯¯=∑ni=1xin

Exemplo

Entrada

5 -5 6 -9 8 5

Saída

Desvio Padrao Amostral = 7.52

Variancia Amostral = 56.50
*/
#include <stdio.h>
#include <math.h>

double calc(double[], int);
double calc2(double[], int);

int main(){
  int n;
  scanf("%d", &n);
  double v[n];
  for (int i=0; i<n; i++){
    scanf("%lf", &v[i]);
    }
  printf("Desvio Padrao Amostral = %.2lf\n",calc2(v, n));
  printf("Variancia Amostral = %.2lf", calc(v, n));
  
}

double calc(double v[], int n){
  double soma=0;
  double soma2=0;
  for (int i=0;i<=n;i++){
    soma+=v[i];
    soma2=soma2+(v[i]*v[i]); 
  }
  double vari=(soma2-(soma*soma)/n)/(n-1);
 

  return vari;
}
double calc2(double v[], int n){
  double soma=0;
  double soma2=0;
  for (int i=0;i<=n;i++){
    soma+=v[i];
    soma2=soma2+(v[i]*v[i]); 
  }
  double vari=(soma2-(soma*soma)/n)/(n-1);
  double desv=sqrt(vari);

  return desv;

  
}

//Exercício 5
/*
Leia um vetor x  com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o módulo do vetor  x,   |x|.

|x|=∑i=1nx2i−−−−−√ 

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

2 3 4                                   Modulo = 5.00
*/
#include <math.h>
#include <stdio.h>

double calc(double[],int);

int main(){
  int lim;
  scanf("%d", &lim);
  double v[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v[i]);
    }
  printf("Modulo = %.2f", calc(v, lim));

}

double calc(double v[], int lim){
  double b=0;
  for (int i=0; i<lim; i++){
    double a=v[i]*v[i];
    b+=a;
    }
  return sqrt(b);
  
}

//Exercício 6
/*
Leia dois vetores x e y com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o produto escalar  x⋅y  entre os dois vetores.

x⋅y=∑i=1nxiyi

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

3                                         6.00

1 1 1

2 2 2              
*/
#include <math.h>
#include <stdio.h>

double calc(double[], double[], int);

int main(){
  int lim;
  scanf("%d", &lim);
  double v1[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v1[i]);
    }
  double v2[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v2[i]);
    }
  printf("Produto Escalar = %.2lf", calc(v1, v2, lim));

}

double calc(double v1[],double v2[], int lim){
  double b=0;
  for (int i=0; i<lim; i++){
    double a=v1[i]*v2[i];
    b+=a;
    }
  return b;
  
}

//Exercício 7
/*
Elaborar um programa para exibir em graus um ângulo dado em radianos.
Use uma função graus(). 

Utilize dupla precisão e imprima o resultado solicitado com 4 casas após o ponto decimal.
Valor de PI =  3.14159265358979323846

Exemplo

Entrada:           

Digite o angulo em radianos:

3.141593

Saída:

O angulo de 3.1416 radianos equivale a 180.0000 graus.
*/
#include <stdio.h>

double graus(double);
#define M_PI  3.14159265358979323846

int main(){
  double ang;
  printf("Digite o angulo em radianos:\n");
  scanf("%lf", &ang);
  
  printf("O angulo de %lf radianos equivale a %.4lf graus.", ang, graus(ang));
}

double graus(double ang){
  double a = (ang*180)/M_PI;
  return a;
}


//Exercício 8
/*
Leia dois vetores x e y com componentes do tipo double e de tamanho  n=2 ou n=3. 

Utilize funções para determinar o ângulo θ, em graus, entre os vetores  x e  y , sabendo que:.

cosθ=x⋅y|x||y|

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 4 casas após o ponto decimal.

 3.14159265358979323846

Entrada:                             Saída:

2                                         Angulo entre os vetores: 90.0000 graus.

2 3

 -3 2              

3                                        Angulo entre os vetores: 60.0000 graus.

2 1 -1

1 -1 -2
*/
#include <math.h>
#include <stdio.h>
#define PI 3.14159265358979323846

double calc(double[], double[],int );

int main(){
  int lim;
  scanf("%d",&lim);
  double v1[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v1[i]);
    }
  double v2[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v2[i]);
    }
  printf("Angulo entre os vetores: %.4lf graus.", calc(v1, v2, lim));

}

double calc(double v1[],double v2[], int lim){
  double b=0;
  for (int i=0; i<lim; i++){
    double a=v1[i]*v1[i];
    b+=a;
    }
  double c=sqrt(b);
  
  double d=0;
  for (int i=0; i<lim; i++){
    double a=v2[i]*v2[i];
    d+=a;
    }
  double e=sqrt(d);
  
  double f=0;
  for (int i=0; i<lim; i++){
    double a=v1[i]*v2[i];
    f+=a;
    }
  
  
  double h=f/(e*c);
  double x=acos(h)*180/PI;
  return x;
  
}

//Exercício 9
/*
Leia dois vetores x=(x1,x2,x3) e y=(y1,y2,y3) com componentes do tipo double.

Defina funções para determinar o produto vetorial  x×y  entre os dois vetores.                 

x×y=(x2y3−x3y2,x3y1−x1y3,x1y2−x2y1)                                                                            

Teste as funções fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

5 4 3                                    Produto Vetorial = (4.00, -2.00, -4.00)

1 0 1
*/
#include <math.h>
#include <stdio.h>

double calc(double[], double[],int);

int main(){
  int lim=3;
  double v1[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v1[i]);
    }
  double v2[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v2[i]);
    }
  calc(v1, v2, lim);

}

double calc(double v1[], double v2[], int lim){
  double a= (v1[1]*v2[2] - v1[2]*v2[1]);
  double b= (v1[2]*v2[0] - v1[0]*v2[2]);
  double c= (v1[0]*v2[1] - v1[1]*v2[0]);
  printf("Produto Vetorial = (%.2lf, %.2lf, %.2lf)", a, b, c);
  
  return 0;
  
}

//Exercício 10
/*
Leia dois vetores x e y com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar a menor distância  entre os componentes dos dois vetores.

Defina uma função para determinar a maior distância  entre os componentes dos dois vetores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

3                                         Menor Distancia: 1.00

1 2 3                                   Maior Distancia: 5.00

4 5 6   
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   
    int n,i,j;
    double menor=10, maior, vari;
    scanf("%d", &n);
    double x[n], y[n];
    for(i =0; i<n;i++){
        scanf("%lf", &x[i]);
        }
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j< n;j++){
            vari = sqrt(pow((x[i]-y[j]),2));
            if (vari>maior){
                maior = vari;
            }
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j< n;j++){
            vari = sqrt(pow((x[i]-y[j]),2));
            
            if (vari<menor){
                menor = vari;
                
            }
        }
    }
    printf("Menor Distancia: %.2lf\n", menor);
    printf("Maior Distancia: %.2lf", maior);

}

//Exercício 11
/*
Defina uma função para determinar a menor distância euclidiana  entre n pontos contidos na reta real.

Defina uma função para determinar a maior distância euclidiana entre  n pontos contidos na reta real.

Teste a função fazendo uma chamada dentro da função "main" e use dupla precisão.

Imprima o resultado solicitado com 2 casas após o ponto decimal.


Exemplo:

Entrada:                             Saída:

3                                        Menor Distancia: 1.00

2 1 5                                  Maior Distancia: 4.00
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   
    int n,i,j;
    double menor=10, maior,vari;
    scanf("%d", &n);
    double x[n], aux;
    for(i =0; i<n;i++){
        scanf("%lf", &x[i]);
        }
    for (i = 0; i < n; i++){
        for (j = i+1; j< n;j++){
            if (x[i]>x[j]){
                aux = x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    for (i = 0; i < n; i++){
        for (j = 1; j< n;j++){
            vari = sqrt(pow((x[i]-x[j]),2));
            if (i!=j){
                if (vari<menor){
               
                    menor = sqrt(pow(x[i]-x[j],2));
                    
            }
                
            }
        }
    }
    for (i=0;i<n;i++){
        for (j=1;j<n;j++){
            if (sqrt(pow(x[i]-x[j],2))>maior){
                maior = sqrt(pow(x[i]-x[j],2));
                
            }
        }
    }
    printf("Menor Distancia: %.2lf\n", menor);
    printf("Maior Distancia: %.2lf", maior);

}

//Exercício 12
/*
Leia um vetor com n componentes do tipo int e

defina uma função busca para retornar o índice de onde um valor dado foi encontrado ou -1.

Teste a função fazendo uma chamada dentro da função "main".

Exemplo:

Entrada:                             Saída:

5 9 7 6 3 2                           2

6

3 4 6 7                                -1

1
*/
#include <math.h>
#include <stdio.h>

double calc(double[],int , double);

int main(){
  int lim;
  scanf("%d",&lim);
  double v1[lim];
  for (int i=0; i<lim; i++){
    scanf("%lf", &v1[i]);
    }
  double valor;
  scanf("%lf", &valor);
  printf("Busca: %0.lf", calc(v1, lim, valor));

}

double calc(double v1[], int lim, double valor){
  double b=-1;
  for (int i=0; i<lim; i++){
    if(v1[i]==valor){
      b=i;
    }
  }
  
  return b;
  
}

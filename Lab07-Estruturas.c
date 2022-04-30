//Estudo em C
//Lab 7 - 05/4

//Exercício 1
/*
Escreva as instruções necessárias para declarar uma variável que contenha os dados de uma pessoa, por exemplo, Maria: 
altura = 1,63 m; peso = 59,5 kg e idade = 21 anos
nessa ordem.
*/
struct  pessoa 

{ 

float  altura; 

float  peso; 

int  idade; 

}; 

struct   pessoa  Maria; 

[OPÇÕES] pessoa altura; int struct Maria; peso; { idade; float };

//Exercício 2
/*
Elabore um programa cuja entrada seja uma data e cuja saída é essa data no formato abaixo:

Utilize estrutura.

Exemplo:

Entrada

Digite o dia:

23

Escreva o mes:

junho

Digite o ano:

2011

Saída

Data: 23/junho/2011
*/
#include <stdio.h>
#include <stdlib.h>


struct{
int ano;
char mes[10];
int dia;
}Nasc;

int main(void){
  printf("Digite o dia:\n");
  scanf("%d", &Nasc.dia);
  printf("Escreva o mes:\n");
  scanf("%s", Nasc.mes);
  printf("Digite o ano:\n");
  scanf("%d", &Nasc.ano);
 printf("Data: %d/%s/%d\n", Nasc.dia, Nasc.mes, Nasc.ano);
}

//Exercício 3
/*
Elaborar um programa cuja entrada são 3 números reais e cuja saída apresenta esses
números em ordem crescente.
Utilize estrutura, dupla precisão e 4 casas depois da vírgula.
Exemplo:

Entrada

2.4 0.9 1.8

Saída

0.9000

1.8000

2.4000
*/
/* Ordena3 */

#include <stdio.h>
#include <stdio.h>
struct Num{
  double n1;
  double n2;
  double n3;
}num;
 
int main(){
 
scanf("%lf",&num.n1);
scanf("%lf",&num.n2);
scanf("%lf",&num.n3);
 
 double ordem[3];
 if(num.n1 > num.n2 && num.n1 > num.n3){
  ordem[0] = num.n1;
  if(num.n2 > num.n3){
   ordem[1] = num.n2;
   ordem[2] = num.n3;
  }else{
   ordem[2] = num.n2;
   ordem[1] = num.n3;
  }
 } else if(num.n2 > num.n1 && num.n2 > num.n3){
  ordem[0] = num.n2;
  if(num.n1 > num.n3){
   ordem[1] = num.n1;
   ordem[2] = num.n3;
  }else{
   ordem[2] = num.n1;
   ordem[1] = num.n3;
  }
 }else{
  ordem[0] = num.n3;
  if(num.n1 > num.n2){
   ordem[1] = num.n1;
   ordem[2] = num.n2;
  }else{
   ordem[2] = num.n2;
   ordem[1] = num.n1;
  }
 }
 for(int i = 2; i != -1; i -= 1){
  printf("%.4lf\n", ordem[i]);
 }
}

//Exercício 4
/*
Elaborar um programa cuja entrada são n pontos no plano que são os vértices de um
polígono de no máximo 100 lados.
Determine o perímetro desse polígono.
Utilize estrutura, dupla precisão e 4 casas depois da vírgula.
Exemplo:

Entrada                         Saída

4                                    Perimetro: 4.0000

0 0 1 0 1 1 0 1



3                                    Perimetro: 3.4142 

0 0 1 0 0 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Poligono{

  double resp;
  double dist[100];
  double y[100];
  double x[100];
}poli;

int main(){
  struct Poligono poli;
  int limite = 0;
  if(limite > 100){
    printf("Tamanho inválido.");
  }else{
    scanf("%d", &limite);
    for(int i = 0; i < limite; i++){
      scanf("%lf", &poli.x[i]);
      scanf("%lf", &poli.y[i]);
    }
    
    for(int z = 0; z < limite; z++){
      if(z == limite - 1){
        poli.dist[z] = sqrt(pow(poli.x[z] - poli.x[0], 2) + pow(poli.y[z] - poli.y[0], 2));
      }else{
        poli.dist[z] = sqrt(pow(poli.x[z] - poli.x[z + 1], 2) + pow(poli.y[z] - poli.y[z + 1], 2));
      }
    }

    for(int i = 0; i < limite; i++){
      poli.resp =poli.resp+ poli.dist[i];
    }

    printf("Perimetro: %.4lf\n", poli.resp);
  }
}

//Exercício 5
/*
Elaborar um programa cuja entrada são 2 números complexos:
Utilize estrutura 
struct Ponto
{
	double R;
	double I;
};
Apresente um menu de opções com a saída selecionada.
Exemplo:

Digite o valor da parte Real:
2
Digite o valor da parte Imaginaria:
4
2.0000 + (4.0000)i
Digite o valor da parte Real:
1
Digite o valor da parte Imaginaria:
3
1.0000 + (3.0000)i

==============
1 - Adicao
2 - Multiplicacao
3 - Divisao
4 - Modulo z1
5 - Modulo z2
6 - Conjugado z1
7- Conjugado z2
0 - Sair
opcao => 3

Divisao
Parte Real: 1.4000
Parte Imaginaria: -0.2000
1.4000 + (-0.2000)i
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Ponto
{
	double R;
	double I;
}point;

void impri(double r, double i){
        printf("Parte Real: %.4lf\n",r);
        printf("Parte Imaginaria: %.4lf\n",i);
        printf("%.4lf + (%.4lf)i", r, i);
}


void leiaPonto(struct Ponto *p)
{
  printf("Digite o valor da parte Real:\n");
	scanf("%lf", &( (*p).R ) );
  printf("Digite o valor da parte Imaginaria:\n");
	scanf("%lf", &( (*p).I )  );
	printf("%.4lf + (%.4lf)i\n", (*p).R, p->I);
}


	

int menu()
{

    puts("");
    puts("=============");
    puts("1 - Adicao   ");
    puts("2 - Multiplicacao  ");
    puts("3 - Divisao  ");
    puts("4 - Modulo  z1  ");
    puts("5 - Modulo  z2  ");
    puts("6 - Conjugado  z1  ");
    puts("7 - Conjugado  z2  ");
    puts("0 - Sair  ");
    printf("opcao => ");
    int op;
    scanf("%d", &op);

    return op;
}


int main(void)
{
	struct Ponto z1;
	struct Ponto z2;

	leiaPonto( &z1 );
	leiaPonto( &z2 );

    int op = menu();
    if(op == 1)
    {
        printf("\nAdicao\n");
        double sR = z1.R + z2.R;
        double sI = z1.I + z2.I;
        impri(sR,sI);

    }
    else if(op == 2)
    {
        printf("\nMultiplicacao\n");
        double resp = (z1.R * z2.R) - (z1.I * z2.I);
        double resp1 = (z1.R * z2.I) + (z1.I * z2.R);
        impri(resp, resp1);

    }
    else if(op == 3)
    {

      double n1 = (z1.R * z2.R) + (z1.I * z2.I);
      double n2 = (z1.I * z2.R) - (z1.R * z2.I);
      double n3 = (z2.R * z2.R) + (z2.I * z2.I);
      double Real = n1/n3;
      double imaginaria = n2/n3;
      impri(Real, imaginaria);



    }
    else if(op == 4)
    {
        printf("\nModulo\n");
        double modulo = sqrt(pow(z1.R,2) + pow(z1.I, 2));
        printf("O modulo de %.4lf + (%.4lf)i eh %.4lf ", z1.R, z1.I, modulo);
    }
    else if(op == 5)
    {
        printf("\nModulo\n");
        double modulo = sqrt(pow(z2.R,2) + pow(z2.I, 2));
        printf("O modulo de %.4lf + (%.4lf)i eh %.4lf ", z2.R, z2.I, modulo);
    }
    else if(op == 6)
    {
        printf("\nConjugado\n");
        double conjugadoZ1 = z1.I*(-1);
        impri(z1.R, conjugadoZ1);
    }
    else if(op == 7)
    {
        printf("\nConjugado\n");
        double conjugadoZ2 = z2.I*(-1);
        impri(z2.R, conjugadoZ2);
    }

	return 0;
}

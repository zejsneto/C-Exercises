//Estudo em C
//Lab 5 - 22/3

//Exercício 1
/*
Multiplicação de Matriz por Vetor
Elaborar um programa cuja entrada é uma matriz M de tamanho a×b, 0<a,b≤4 e 
um vetor v com b coordenadas.
A saída é o produto da matriz M pelo vetor v.
Utilize dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Tamanho da matriz A:
2 3
Matriz A:
1 2 3
4 5 6
Digite o vetor com 3 coordenadas:
7 8 9
Produto de A por v:
50.0000
122.0000
*/
#include <stdio.h>

int main(void) {
  int l;
  int c;
  printf("Tamanho da matriz A:\n");
  scanf("%i",&l);
  scanf("%i",&c);
  float matriz[l][c];
  float vetor[c];
  float resp[l];
  printf("Matriz A:\n");
  for(int linha=0;linha<l;linha++){
    for(int coluna=0;coluna<c;coluna++){
      scanf("%f",&matriz[linha][coluna]);
    }}
  
  printf("Digite o vetor com %d coordenadas:\n",c);
  
  for(int i=0;i<c;i++){
    scanf("%f",&vetor[i]);
  }
  
  

  for(int linha=0;linha<l;linha++){
    for(int coluna=0;coluna<c;coluna++){
      resp[linha]+= matriz[linha][coluna]*vetor[coluna];
    }}

  printf("Produto de A por v:\n");
  for(int r=0;r<l;r++){
    printf("%.4f\n",resp[r]);
  }
  
    
  return 0;
}

//Exercício 2
/*
Multiplicação de Matrizes
Elaborar um programa cuja entrada são duas matrizes A de tamanho a×b e um matriz B 
de  tamanho b×c com a,b,c≤4.
A saída é o produto  A⋅B das matrizes.
Utilize dupla precisão e 4 casas decimais depois da vírgula.

Exemplo:

Tamanho da matriz A:
2 3
Tamanho da matriz B:
3 3
Matriz A:
1 2 3
4 5 6
Matriz B:
1 2 3
4 5 6
7 8 9
Matriz AB:
30.0000  36.0000  42.0000
66.0000  81.0000  96.0000

Tamanho da matriz A:
2 3
Tamanho da matriz B:
2 3
Dados incorretos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k1,k2;
    int linA,colA,linB,colB;
    printf("Tamanho da matriz A:\n");
    scanf("%d",&linA);
    scanf("%d",&colA);
    printf("Tamanho da matriz B:\n");
    scanf("%d",&linB);
    scanf("%d",&colB);

    float A[linA][colA];
    float B[linB][colB];
    float C[linA][colB];
    float temp;

    if(colA!=linB)
    {
        printf("Dados incorretos.\n");

        return 0;
    }



printf("Matriz A:\n");
    for(i=0;i<linA;i++)
    {
        for(j=0;j<colA;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
printf("Matriz B:\n");
    for(i=0;i<linB;i++)
    {
        for(j=0;j<colB;j++)
        {
            scanf("%f",&B[i][j]);
        }
    }



    for(k1=0;k1<linA;k1++)
    {
        for(k2=0;k2<colB;k2++)
        {
            temp=0.0;
            for(i=0;i<colA;i++)
            {
                temp=temp+A[k1][i]*B[i][k2];
            }
            C[k1][k2]=temp;
        }
    }

printf("Matriz AB:\n");
    for(i=0;i<linA;i++)
    {
        for(j=0;j<colB;j++)
        {
            if(j!=(colB-1))
            {
                printf(" %.4f ",C[i][j]);
            }
            else
            {
                printf(" %.4f \n",C[i][j]);
            }
        }
    }

    return 0;

}

//Exercício 3
/*
Criptografia: Cifra de Hill


Para utilizarmos a cifra de Hill, começamos convertendo a mensagem secreta em um conjunto de números (utilize a tabela ASCII). Em seguida, convertemos esse conjunto de números em um novo conjunto de números através da multiplicação por uma matriz quadrada de ordem 2 invertível, 2 – Cifra de Hill.

Elabore um programa que recebe uma mensagem, de no máximo 100 caracteres, e uma matriz de ordem 2 invertível e cuja saída seja 

o tamanho n da mensagem e a mensagem cifrada pela cifra de Hill.


Exemplos:
a.

Tomemos a mensagem:
abc
Utilizando a tabela ASCII, abc é convertido em 97 98 99 32 (deve-se formar grupos 2 em 2, na última posição foi adicionado um espaço).
Seja A a matriz
A = [1 2]
    [1 3]
Desse modo:
  [1 2][97] = [293]
  [1 3][98]   [391]

e
  [1 2][99] = [163]
  [1 3][32]   [1955]  

Logo a mensagem abc cifrada pela matriz A fica:

293 391 163 195,

com n=4 representando o tamanho da mensagem que sempre será um número par.

b.
Mensagem:
Hello World!
Matriz A:
1 2
1 3
Tamanho da mensagem: 12
Mensagem Cifrada:
274
375
324
432
175
207
309
420
330
438
166
199

https://math.libretexts.org/Bookshelves/Applied_Mathematics/Book%3A_Applied_Finite_Mathematics_(Sekhon_and_Bloom)/02%3A_Matrices/2.05%3A_Application_of_Matrices_in_Cryptography
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char msgOrig[100];
    int j,i,k;
    int n=100;
    printf("Mensagem:\n");
    fgets(msgOrig, n, stdin);
    int cara = strlen(msgOrig)-1;
    printf("Matriz A:\n");
    int a[2][2];
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            scanf("%d", &a[i][j]);
        }
    }

    int v[2][cara/2];
    for (i=0;i<2;i++){
        for (j=0;j<(cara/2);j++){
            if (i==0){
                v[i][j]=(int)msgOrig[j*2];
            }
            else{
                v[i][j]=(int)msgOrig[i+(j*2)];
                    
            }
        }
    }
    int mr[2][cara/2];
        for(i=0; i<2;i++){
            for (j=0;j<(cara/2);j++){
                mr[i][j]=0;
                for (k=0; k<2;k++){
                    mr[i][j]+= a[i][k]*v[k][j];
                }
            }
        }
    printf("Tamanho da mensagem: %d\n",cara);
    
    printf("Mensagem Cifrada:\n");
    for(j=0;j<(cara/2);j++){
            for (i=0;i<2;i++){
                printf("%d\n",mr[i][j]);
            }
        }
    
}

//Exercício 4
/*
Criptografia: Cifra de Hill


Para decodificarmos a cifra de Hill, utilizamos a matriz inversa, A−1 da matriz A que foi utilizada no item anterior, e multiplicarmos pelo conjunto de números codificados.

Elabore um programa que recebe o tamanho n de uma mensagem, a matriz inversa, A−1 da matriz A que foi aplicada no item anterior e o conjunto de números que foram codificados pela cifra de Hill.

A saída deve ser a mensagem decifrada.

Exemplo:

Digite o tamanho do vetor:
12
Matriz A:
3 -2
-1 1
Mensagem cifrada:
274
375
324
432
175
207
309
420
330
438
166
199
Mensagem decifrada:
Hello World!

https://math.libretexts.org/Bookshelves/Applied_Mathematics/Book%3A_Applied_Finite_Mathematics_(Sekhon_and_Bloom)/02%3A_Matrices/2.05%3A_Application_of_Matrices_in_Cryptography
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int j,i,n,k;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);
    printf("Matriz A:\n");
    int a[2][2];
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int mr[2][n/2];
    printf("Mensagem cifrada:\n");
    for(j=0;j<(n/2);j++){
        for (i=0;i<2;i++){
            scanf("%d", &mr[i][j]);
        }
        
    }
    printf("Mensagem decifrada:\n");
    int v[2][n/2];
    for(i=0; i<2;i++){
        for (j=0;j<(n/2);j++){
            v[i][j]=0;
            for (k=0; k<2;k++){
                v[i][j]+= a[i][k]*mr[k][j];
                    
            }
        }
    }
    char letra[n];
    for (j=0;j<(n/2);j++){
        for (i=0;i<2;i++){
           letra[i+(j*2)] = v[i][j];
           printf("%c",letra[i+(j*2)]);
        }
    }
}
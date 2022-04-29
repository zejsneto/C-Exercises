//Estudo em C
//Lab 2 - 22/2

//Exercício 1
/*
Elaborar um programa para exibir 2 números inteiros em ordem crescente.
Exemplo:
5 3
Saída
3 5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    scanf("%d",&b);
    scanf("%d",&a);
    
    if (a>b){
        printf("%d %d",b,a);
    }
    else if(b>a){
        printf("%d %d",a,b);
    }
    
  
    
  }


//Exercício 2
/*
Elaborar um programa para exibir 3 números inteiros em ordem crescente.
Exemplo:
5 3 4
Saída
3 4 5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n1,n2,n3;

  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  
  if (n1>n2 && n1>n3 && n2>n3){
    printf("%d %d %d", n3, n2, n1);
  }

  else if (n1>n3 && n1>n2 && n3>n2){
    printf("%d %d %d", n2, n3, n1);
  }
  
  else if (n2>n1 && n2>n3 && n1>n3){
    printf("%d %d %d", n3, n1, n2);
  }
  
  else if (n2>n3 && n2>n1 && n3>n1){
    printf("%d %d %d", n1, n3, n2);
  }
  
  else if (n3>n2 && n3>n1 && n2>n1){
    printf("%d %d %d", n1, n2, n3);
  }
  
  else if (n3>n1 && n3>n2 && n1>n2){
    printf("%d %d %d", n3, n1, n2);
  }
}


//Exercício 3
/*
Elaborar um programa para exibir 4 números inteiros em ordem crescente.
Exemplo:
5 3 4 2
Saída
2 3 4 5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c,d;
    
    scanf("%d",&d);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&a);
    
    if (d>c&&c>b&&b>a&&d>a){
    printf("%d %d %d %d",a,b,c,d);
      }
   else if (d>b&&b>c&&c>a&&d>a){
    printf("%d %d %d %d",b,a,c,d);
     }
   else if (d>b&&b>a&&a>c&&d>c){
    printf("%d %d %d %d",c,a,b,d);
     }
   else if (d>a&&a>b&&b>c&&d>c){
    printf("%d %d %d %d",a,c,b,d);
     }
   else if (d>a&&a>c&&c>b&&d>b){
    printf("%d %d %d %d",a,b,c,d); 
     }
    else if (d>c&&c>a&&a>b&&d>b){
    printf("%d %d %d %d",c,b,a,d);
      }

      
    else if (c>d&&d>b&&b>a&&c>a){
    printf("%d %d %d %d",d,a,b,c);
      }
     else if (c>b&&b>d&&d>a&&c>a){
    printf("%d %d %d %d",b,a,d,c);
      }
    else if (c>b&&b>a&&a>d&&c>d){
    printf("%d %d %d %d",b,d,a,c);
      }
    else if (c>a&&a>b&&b>d&&c>d){
    printf("%d %d %d %d",a,d,b,c);
      }
   else if (c>a&&a>d&&d>b&&c>b){
    printf("%d %d %d %d",a,b,d,c);
      }
    else if (c>d&&d>a&&a>b&&c>b){
    printf("%d %d %d %d",d,b,a,c);
      }

    else if (b>d&&d>c&&c>a&&b>a){
    printf("%d %d %d %d",d,a,c,b);
      }
    else if (b>c&&c>d&&d>a&&b>a){
    printf("%d %d %d %d",c,a,d,b);
      }
    else if (b>c&&c>a&&a>d&&b>d){
    printf("%d %d %d %d",c,d,a,b);
      }
    else if (b>a&&a>c&&c>d&&b>d){
    printf("%d %d %d %d",a,d,c,b);
      }
    else if (b>a&&a>d&&d>c&&b>c){
    printf("%d %d %d %d",a,c,d,b);
      }
    else if (b>d&&d>a&&a>c&&b>c){
    printf("%d %d %d %d",d,c,a,b);
      }

    else if (a>d&&d>b&&b>c&&a>c){
    printf("%d %d %d %d",d,c,b,a);
      }
    else if (a>b&&b>d&&d>c&&a>c){
    printf("%d %d %d %d",b,c,d,a);
      }
    else if (a>b&&b>c&&c>d&&a>d){
    printf("%d %d %d %d",b,d,c,a);
      }
    else if (a>c&&c>b&&b>d&&a>d){
    printf("%d %d %d %d",c,d,b,a);
      }
    else if (a>c&&c>d&&d>b&&a>b){
    printf("%d %d %d %d",c,b,d,a);
      }
  else if (a>d&&d>c&&c>b&&a>b){
    printf("%d %d %d %d",d,b,c,a);
      }
  }

//Exercício 4
/*
Determinar se, dados os comprimentos de 3 varetas, é ou não é possível
formar um triângulo. (Utilize números inteiros)
Exemplo de Entrada:               Exemplo de Saída:
5 3 4                             S   
5 3 9                             N
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
  
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c && b>c && b+c>a){
      printf("S");
    }
    if(a>b && a>c && b>c && b+c<a){
      printf("N");
    }
    if(a>b && a>c && c>b && b+c>a){
      printf("S");
    }
    if(a>b && a>c && c>b && b+c<a){
      printf("N");
    }   
    
    if(c>a && c>b && a>b && b+a>c){
      printf("S");
    }    
    if(c>a && c>b && a>b && b+a<c){
      printf("N");
    }
    if(c>a && c>b && b>a && b+a>c){
      printf("S");
    }    
    if(c>a && c>b && b>a && b+a<c){
      printf("N");
    }   
    
    if(b>a && b>c && a>c && a+c>b){
      printf("S");
    }    
    if(b>a && b>c && a>c && a+c<b){
      printf("N");
    }    
    if(b>a && b>c && c>a && a+c>b){
      printf("S");
    }    
    if(b>a && b>c && c>a && a+c<b){
      printf("N");
    } 
    
    if(c>a && c>b && a>b && (b+a)==c){
      printf("N");
    }  
  }


//Exercício 5
/*
Determinar se, dados os comprimentos de quatro varetas, é ou não possível 
selecionar três varetas, dentre as quatro, e formar um triângulo.
(Utilize números inteiros)
Exemplo de Entrada:               Exemplo de Saída:
5 3 4 9                            S   
5 3 9 8                            N
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int num1, num2, num3, num4;

  scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

  if ((num2 + num3 > num1) && (num3 + num1 > num2) && (num1 + num2 >num3))
  {
    printf("S");
  }
  else if ((num3 + num4 >num2) && (num4 + num2 >num3) && (num2 + num3 >4))
  {
    printf("S");
  }
  else if ((num4 + num1 >num3) && (num1 + num3 >num4) && (num3 + num4 >num1))
  {
    printf("S");
  }
  else if ((num1 + num2 >num4) && (num2 + num4 >num1) && (num4 + num1 >num2))
  {
    printf("S");
  }
  else
  {
    printf("N");
  }

  return 0;
}

//Exercício 6
/*
Elaborar um programa para exibir os múltiplos de um número compreendidos entre dois valores dados.
Exemplo de Entrada:               Exemplo de Saída:
5  9  20                          10 15 20
9  5  30                           9 18 27
*/
#include <stdio.h>



int main() 
{   
    
    int N, A, B, multiploN;

    scanf("%d %d %d",&N, &A, &B);
    multiploN = 0;
    
    while (B >= A)
    {
        
        if (A % N == 0)
        {
            multiploN = 1;
            printf("%d ", A);
        }
        A += 1;
        
    }
    
    if(!multiploN)
        printf("INEXISTENTE\n");
    
    return 0;
}

//Exercício 7
/*
Elaborar um programa que gere o n-ésimo termo da sequência de Fibonacci.

Exemplo:

Entrada:             Saída:

1                         0

2                         1

3                         1

4                         2

6                         5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int atual=0, ultimo=1, penultimo=0, n, i;
    scanf("%d", &n);
    for(i=0; i<n-2; ++i){
        atual = ultimo+penultimo;
        penultimo = ultimo;
        ultimo = atual;    
    }
    printf("%d", atual);
    return 0;
}

//Exercício 8
/*
Elaborar um programa que inverte números.


Exemplo:

Entrada:             Saída:

812                     218
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int num,r,inv=0;

  scanf("%d",&num);
  
  while (num/10>0){
      r=num%10;
      num=num/10;
      inv=inv*10+r;
  }
  
  printf("%d", inv*10+num);
}

//Exercício 9
/*
Elaborar um programa para exibir máximo divisor comum de 2 números inteiros.


Entrada:             Saída:

8 12                     MDC = 4
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n1,n2,resto;

  scanf("%d %d",&n1,&n2);

  resto=n1%n2;
  while(resto!=0){
    n1    = n2;
    n2    = resto;
    resto = n1%n2;         
  }
  printf("MDC = %d", n2);
  }
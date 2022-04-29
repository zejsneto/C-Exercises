//Estudo em C
//Lab 2 - 22/2

//Exercício 1
/*
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

int tamanho (char *s)

que retorne o tamanho dessa string.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     11
*/
#include <stdio.h>

int tamanho (char []);

int main() {
  char s[51];
  fgets(s,51,stdin);
  printf("%d", tamanho(s));
}
int tamanho (char *s){
  int i=0;
  int count = 0;
  while(s[i]!='\0'){
      count+=1;
      i++;
  }
  return count-1;
}


//Exercício 2
/*
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

void maiusculas (char *s)

que retorne a quantidade de caracteres maiúsculos.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     2
*/
#include <stdio.h> 


int maiusculas (char []);

int main() {
  char s[51]={};
  fgets(s,51,stdin);
  printf("%d", maiusculas(s));
}
int maiusculas (char *s){
  int count = 0;
  for(int i=0; i<51;i++){
    if(s[i]>='A' && s[i]<='Z'){
      count+=1;
    }
    
  }
  return count;
}

//Exercício 3
/*
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

void minusculas (char *s)

que retorne a quantidade de caracteres minúsculos.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     4

*/
#include <stdio.h> 


int minusculas (char []);

int main() {
  char s[51]={};
  fgets(s,55,stdin);
  printf("%d", minusculas(s));
}
int minusculas (char *s){
  int count = 0;
  for(int i=0; i<55;i++){
    if(s[i]>='a' && s[i]<='z'){
      count+=1;
    }
    
  }
  return count;
}

//Exercício 4
/*
Leia uma string com tamanho máximo 50 e defina uma função com assinatura

void inverteMaiusMinus (char *s, int n)

que imprime os caracteres maiúsculos em minúsculos e os caracteres minúsculos em caracteres maiúsculos.


Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     !@WESdfA+-3 
*/
#include <stdio.h> 

void inverteMaiusMinus (char *s, int);

int main() {
  int n=32;
  char s[51]={};
  fgets(s,51,stdin);
  inverteMaiusMinus(s, n);
}
void inverteMaiusMinus(char *s,int n){
  for(int i=0; i<51;i++){
    if(s[i]>='a' && s[i]<='z'){
      s[i]=s[i]-n;
    }
    else if(s[i]>='A' && s[i]<='Z'){
      s[i]=s[i]+n;
    }
  }
  for(int i=0;i<51;i++){
    if(s[i]!='\0'){
      printf("%c", s[i]);
    }
    
  }
}

//Exercício 5
/*
Leia uma string com tamanho máximo 60 e defina uma função com assinatura

void inverte (char *orig, int n)

que inverte a string.

Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

!@wesDFa+-3                     3-+aFDsew@! 
*/
#include <stdio.h> 

int main()
{
  int i = 0;
  char texto[50] = {};
  fgets(texto, 55, stdin);
  int tam = 0;
  for (i = 1; i < 55; i++)
  {
    if (texto[i] != '\0')
    {
      tam++;
    }
    else
    {
      break;
    }
  }
  char temp;
  for (i = 0; i < tam / 2; i++)
  {
    temp = texto[i];
    texto[i] = texto[tam - i - 1];
    texto[tam - i - 1] = temp;
  }
  printf("%s", texto);
}

//Exercício 6
/*
Leia duas strings com tamanho máximo 50 e defina funções que calculem a soma dos números de cada string. 

Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

ab2dc1*cU                          371             (21 + 350 = 371) 

TR$3uty5Yg0y                 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i = 0;
  char texto[50] = {}, texto1[50] = {};

  fgets(texto, 50, stdin);
  fgets(texto1, 50, stdin);

  char num1[50] = {}, num2[50] = {};
  int tam1 = 0, tam2 = 0;
  for (i = 0; i < 50; i++)
  {
    if ((texto[i] >= '0') && (texto[i] <= '9'))
    {
      num1[tam1] = texto[i];
      tam1++;
    }
  }
  for (i = 0; i < 50; i++)
  {
    if ((texto1[i] >= '0') && (texto1[i] <= '9'))
    {
      num2[tam2] = texto1[i];
      tam2++;
    }
  }

  int num01 = atoi(num1);
  int num02 = atoi(num2);

  printf("%d", num01 + num02);
}

//Exercício 7
/*
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. 
As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.


Obs.: Não utilize nenhuma biblioteca adicional.


Exemplo:

Entrada:                             Saída:

Tpo oCder                           TopCoder                  

aa bb                                   abab
*/
#include <stdio.h> 

int main()
{
  int i = 0;
  char texto[50] = {}, texto1[50] = {};
  fgets(texto, 50, stdin);
  fgets(texto1, 50, stdin);
  int tam1 = 0, tam2 = 0;
  for (i = 1; i < 50; i++)
  {
    if (texto[i] != '\0')
    {
      tam1++;
    }
    else
    {
      break;
    }
  }
  for (i = 1; i < 50; i++)
  {
    if (texto1[i] != '\0')
    {
      tam2++;
    }
    else
    {
      break;
    }
  }
  char falta[50] = {};
  int menor, falta1;
  int tam3 = 0;
  if (tam1 > tam2)
  {
    menor = tam2;
    falta1 = tam1;
    for (i = 0; i < tam1; i++)
    {
      falta[i] = texto[i];
    }
  }
  else
  {
    menor = tam1;
    falta1 = tam2;
    for (i = 0; i < tam2; i++)
    {
      falta[i] = texto1[i];
    }
  }
  int n3 = tam1 + tam2;
  char uniao[50] = {};
  for (i = 0; i < menor; i++)
  {
    uniao[tam3] = texto[i];
    uniao[tam3 + 1] = texto1[i];
    tam3 += 2;
  }

  int faltam = n3 - tam3;
  if (faltam > 0)
  {
    for (i = 0; i < faltam; i++)
    {
      uniao[tam3 + i] = falta[n3 - falta1 + i];
    }
  }

  printf("%s", uniao);
}
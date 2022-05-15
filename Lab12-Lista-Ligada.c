//Estudo em C
//Lab 12 - 10/5

//Exercício 1
/*
Dada uma lista ligada simples de n nós, realize a ordenação crescente e impressão da mesma.

O primeiro parâmetro é a quantidade de nós.



ATENÇÃO: Não esqueçam de inicializar e usar inserção no ínicio.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct reg no;

no* inicializa (void);
no* insere_inicio(no *lista, int num);
no* ordena(no *lista, int n);
void imprimir (no *lista);

struct reg{
    int conteudo;
    struct reg *prox;
};

int main(void){
    no* lista = inicializa();
    int max, i,num;
    scanf("%d", &max);
    for (i=0;i<max;i++){
        scanf("%d", &num);
        lista = insere_inicio(lista,num);
    }
    lista = ordena(lista,max);
    imprimir(lista);

}

/* função de inicialização: retorna uma lista vazia */
no* inicializa (void)
{
 return NULL;
}

/* inserção no início: retorna a lista atualizada */
no* insere_inicio (no* l, int i)
{
 no* novo = (no*) malloc(sizeof(no));
 novo->conteudo = i;
 novo->prox = l;
 return novo;
}
no* ordena(no *lista, int n){
    int i;
    no* atual = (no*) malloc(sizeof(no));
    no* proximo = (no*) malloc(sizeof(no));
    atual = lista;
    
    for(i=0;i<n;i++){
        
        proximo = atual->prox;
        while(proximo!=NULL){
            int aux=0;
            if (atual->conteudo > proximo->conteudo){
                aux = atual->conteudo;
                atual->conteudo = proximo->conteudo;
                proximo->conteudo = aux;
            }
            proximo = proximo->prox;
        }
        atual = atual->prox;
        
    }
    
    while(lista){
        printf("%d ", lista->conteudo);
        lista = lista->prox;
    }
    
    return lista;
}
/*
     Procedimento para imprimir uma lista simplesmente encadeada
*/
void imprimir(no *lista){
    while(lista){
        printf("%d ", lista->conteudo);
        lista = lista->prox;
    }
}

//Exercício 2
/*
Dado um vetor de N inteiros, crie uma função para achar determinado valor.


Atenção, reutilize os métodos de inicialização e inserção no ínicio.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct reg no;

no* inicializa(void);
no *insere_inicio(no *lista, int num);
void imprimir(no *lista);

struct reg
{
  int conteudo;
  struct reg *prox;
};

void busca(no *lista, int chave);

int main(void)
{
  int tam, num, chave;
  no *lista = inicializa();
  printf("Digite a quantidade de itens a serem inseridos \n");
  scanf("%d", &tam);

  printf("Digite os valores \n");
  for (int i = 0; i < tam; i++)
  {
    scanf("%d", &num);
    lista = insere_inicio(lista, num);
  }
  printf("Digite a chave de busca \n");
  scanf("%d", &chave);
  busca(lista, chave);
}

void busca(no *lista, int chave)
{
  int count = 0;
  int encontro = 0;

  while (lista)
  {
    if (lista->conteudo == chave)
    {
      printf("Encontrado na posição %d", count);
      encontro++;
    }
    count++;
    lista = lista->prox;
  }
  if (encontro == 0)
  {
    printf("Item não encontrado");
  }
}

no* inicializa (void)
{
 return NULL;
}

no* insere_inicio (no* l, int i)
{
 no* novo = (no*) malloc(sizeof(no));
 novo->conteudo = i;
 novo->prox = l;
 return novo;
}

//Exercício 3
/*
Porque no exercício anterior ao buscarmos a chave = 2 ela retornou posição = 0?
*/
Pois a função inserir armazena os valores com o método de armazenamento de pilha, logo o último valor que foi digitado retornou o primeiro a ser comparado, a posição 0.
  
//Exercício 4
/*
Existe alguma vantagem se ordenássemos a lista antes da busca?
*/
Não exsite, pois a lista ligada funciona por meio de um esquema de pilha, sendo assim o último termo vai ser o primeiro a ser lido, logo existem outras formas mais práticas de buscar um elemento dentro de uma lista, a função da lista ligada serve apenas inserir e remover variáveis.
  
//Exercício 5
/*
Dado um vetor de N inteiros, crie uma função para achar determinado valor.


Atenção, reutilize os métodos de inicialização e inserção no ínicio.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct reg no;

no* inicializa (void);
no* insere_inicio(no *lista, int num);
void particiona(no *lista, int n);

struct reg{
    int conteudo;
    struct reg *prox;
};

no* inicializa (void)
{
 return NULL;
}

no* insere_inicio (no* l, int i)
{
 no* novo = (no*) malloc(sizeof(no));
 novo->conteudo = i;
 novo->prox = l;
 return novo;
}

int main(void){
    int tam, num;
    no* lista = inicializa();
    printf("Digite a quantidade de itens a serem inseridos \n");
    scanf("%d", &tam);
    
    printf("Digite os valores \n");
    for(int i=0; i<tam; i++){
        scanf("%d", &num);
        lista=insere_inicio(lista, num);
    }
    particiona(lista, tam);
}

void particiona(no* lista, int n){
    int par[n], impar[n];
    int i = 0, j = 0, k;
    while(lista){
        if(lista->conteudo % 2 == 0){
            par[i]= lista->conteudo;
            i++;
        }
        else{
            impar[j]= lista->conteudo;
            j++;
        }
        lista= lista->prox;
    }
    printf("\nLista par:");
    for(k=i-1; k>=0;k--){
        printf("%d ", par[k]);
    }
    printf("\nLista impar:");
    for(k=j-1; k>=0;k--){
        printf("%d ", impar[k]);
    }
}

//Exercício 6
/*
Finalmente o fim do semestre! A professora precisa emitir um relatório para a Secretaria com as notas finais e média geral das turmas que ela leciona.

Crie um programa que receba o número de RA do aluno (Apenas inteiros) e a nota final (double).

Lembrem-se de utilizar alocação dinâmica e lista ligada, uma vez que os alunos de cada turma são variáveis.

Para sair do programa, o usuário deverá digitar 0 em ambos os campos.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct alunos notaAlunos;

notaAlunos *inicia(void);
notaAlunos *insere_notas(notaAlunos *lista, int ra, double nota);
void imprime_notas(notaAlunos *lista, int tam);

struct alunos
{
  int ra;
  double notas;
  struct alunos *prox;
};

int main()
{
  notaAlunos *lista = inicia();

  int ra, tam=0;
  double nota;

  printf("Para sair, digite 0 como valor de RA do aluno\n");
  while (1)
  {
    printf(" Entre com o RA do Aluno：\n");
    scanf("%d", &ra);
    printf(" Entre com a média ：\n");
    scanf("%lf", &nota);
    if(ra == 0 && nota == 0){
        break;
    }else{
        tam++;
        lista = insere_notas(lista, ra, nota);
    }
  }

  imprime_notas(lista, tam);
}

notaAlunos *inicia(void)
{
  return NULL;
}

notaAlunos *insere_notas(notaAlunos *lista, int ra, double nota)
{
  notaAlunos *novo = (notaAlunos *)malloc(sizeof(notaAlunos));
  novo->ra = ra;
  novo->notas = nota;
  novo->prox = lista;
  return novo;
}

void imprime_notas(notaAlunos *lista, int tam)
{
  int rav[tam], i, qtd=0;
  double nota[tam],soma = 0;
  
  while (lista)
  {
    soma += lista->notas;
    rav[qtd]=lista->ra;
    nota[qtd]=lista->notas;
    qtd++;
    lista = lista->prox;
  }
  
for(i=tam-1;i>=0;i--){
    printf("O aluno com RA %d possui média ：%.2lf\n", rav[i], nota[i]);
}
  
  printf("A média da turma foi ：%.2lf", soma / tam);
  printf("\n\n");
}
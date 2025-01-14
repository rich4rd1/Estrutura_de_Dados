/*
Escreva uma função que insira uma nova célula com conteúdo x
imediatamente depois da k-ésima célula de uma lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node no;
typedef struct head cabeca;

struct node {
    int dado;
    no *prox;
};

struct head {
    no *prox;
    no *ultimo;
    int nums_itens;
};

cabeca *criar_lista() {
    cabeca *le = (cabeca *)malloc(sizeof(cabeca));
    le->prox = NULL;
    le->ultimo = NULL;
    le->nums_itens = 0;
    return le;
}

int vazia(cabeca *lista) {
    return (lista->prox == NULL);
}

void imprimir_lista(no *lista) {
    no *atual = lista;
    while (atual != NULL) {
        printf("[%d] --> ", atual->dado);
        atual = atual->prox;
    }
    printf("NULL\n");
}

no *createNode(int dado) {
    no *novo = (no *)malloc(sizeof(no));
    novo->dado = dado;
    novo->prox = NULL;
    return novo;
}

no *addNode(no *lista, int dado) {
    no *novo = createNode(dado);
    if (lista == NULL) {
        return novo;
    }

    no *atual = lista;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
    return lista;
}

void inserir_apos_k(cabeca *lista, int x, int k) {
    if (k < 0 || lista->prox == NULL) {
        printf("Posição inválida\n");
        return;
    }
    
    no *atual = lista->prox; // Começa a partir do primeiro nó
    for (int i = 0; i < k && atual != NULL; i++) {
        atual = atual->prox; // Move para o próximo nó
    }

    if (atual == NULL) {
        printf("A lista não tem %d elementos.\n", k);
        return;
    }

    no *novo = createNode(x);
    novo->prox = atual->prox; // O novo nó aponta para o próximo do atual
    atual->prox = novo; // O atual aponta para o novo nó
    lista->nums_itens++; // Atualiza o número de itens
}

int main() {
    cabeca *lista = criar_lista();
    int n, k, x;

    printf("Quantos numeros deseja adicionar a lista encadeada? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Insira o numero %d: ", i + 1);
        scanf("%d", &x);
        lista->prox = addNode(lista->prox, x); // Atribuindo o retorno
    }

    printf("Lista atual: ");
    imprimir_lista(lista->prox); // Corrigido: Passando lista->prox

    // Inserir após k-ésimo nó
    printf("Digite a posição k para inserir um novo número: ");
    scanf("%d", &k);
    printf("Digite o numero a ser inserido: ");
    scanf("%d", &x);
    inserir_apos_k(lista, x, k);

    printf("Lista após inserção: ");
    imprimir_lista(lista->prox);

}
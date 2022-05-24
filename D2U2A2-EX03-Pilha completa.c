#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
struct No {
    int info;
    struct No* proximo;
};
struct Pilha {
    struct No* topo;
    int tamanho;
};
struct Pilha* criar() {
    struct Pilha* nova_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    if (nova_pilha != NULL) {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }
    return nova_pilha;
}
void empilhar(struct Pilha* p, int item) {
    assert(p != NULL);
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = p->topo;
        p->topo = novo_no;
        p->tamanho++;
    }
}
int desempilhar(struct Pilha* p) {
    assert(p != NULL); //verifica se ponteiro p é nulo
    assert(p->topo != NULL);
    struct No* aux = p->topo;
    int elemento = aux->info;
    p->topo = aux->proximo; //ponteiro aux dá valor do topo
    p->tamanho--; //remove o valor do topo
    free(aux); //libera memória armazenada
    return elemento; //retorna o valor do topo
}
int topo(struct Pilha* p) {
    assert(p != NULL); //verifica se ponteiro p é nulo
    assert(p->topo != NULL); //verifica se ponteiro topo é nulo
    struct No* topo = p->topo; //função aux que aponta para nó do topo
    return topo->info; //aux retorna valor do topo
}
int tamanho(struct Pilha* p) {
    assert(p != NULL); //verifica se ponteiro p é nulo
    return p->tamanho; //retorna o tamanho da struct pilha
}
bool vazia(struct Pilha* p) {
    assert(p != NULL); //verifica se ponteiro p é nulo
    return (p->topo == NULL); //função retorna se é v ou f pilha vazia
}
void liberar(struct Pilha* p) {
    assert(p != NULL); //verifica se ponteiro p é nulo
    while(vazia(p) == false) { //se a pilha não estiver vazia
        desempilhar(p);//função desempilha a pilha
    }
    free(p);//libera a memória da pilha
}
int main() {
    struct Pilha* minha_pilha = criar();
    printf("Está vazia (1 - SIM; 0 - NÃO)? %d \n", vazia(minha_pilha));
    printf("Empilhando 1...\n");
    empilhar(minha_pilha, 1);
    printf("Empilhando 2...\n");
    empilhar(minha_pilha, 2);
    printf("Empilhando 3...\n");
    empilhar(minha_pilha, 3);
    printf("Está vazia (1 - SIM; 0 - NÃO)? %d \n", vazia(minha_pilha));
    printf("Topo - %d\n", topo(minha_pilha));
    printf("Tamanho - %d\n", tamanho(minha_pilha));
    printf("Desempilhando elementos: \n");
    printf("%d \n", desempilhar(minha_pilha));
    printf("%d \n", desempilhar(minha_pilha));
    printf("%d \n", desempilhar(minha_pilha));
    liberar(minha_pilha);
    return 0;
}

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
    assert(p != NULL);
    assert(p->topo != NULL);
    struct No* aux = p->topo;
    int elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--;
    free(aux);
    return elemento;
}
int main() {
    struct Pilha* minha_pilha = criar();
    empilhar(minha_pilha, 1);
    empilhar(minha_pilha, 2);
    empilhar(minha_pilha, 3);
    printf("%d ", desempilhar(minha_pilha));
    printf("%d ", desempilhar(minha_pilha));
    printf("%d ", desempilhar(minha_pilha));
    printf("\n");
    return 0;
}

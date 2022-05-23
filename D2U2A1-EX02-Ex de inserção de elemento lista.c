void inserir (struct Lista* li, int pos, int item) {
    assert(li != NULL);
    assert(pos >= 0 && pos <= li->tamanho);
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    novo_no->info = item;
    if (pos == 0) {
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;
    } else {
        struct No* aux = li->inicio;
        for(int i = 0; i < pos -1; i++) {
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++
}
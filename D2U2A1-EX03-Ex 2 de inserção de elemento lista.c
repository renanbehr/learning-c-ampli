#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int main() {
    struct Lista* minha_lista = criar(); // Lista = []
    inserir(minha_lista, 0, 5);     // Lista = [5]
    inserir(minha_lista, 0, 3);     // Lista = [3, 5]
    inserir(minha_lista, 2, 6);     // Lista = [3, 5, 6]
    inserir(minha_lista, 3, 7);     // Lista = [3, 5, 6, 7] 
    return 0;
}

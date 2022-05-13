#include <stdio.h>
int main(){
    int numero;
    printf("\n Digite um número e veja se ele é par ou ímpar: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("\n O número %d é par!\n", numero);
    } else {
        printf("\n O número %d é ímpar!\n", numero);
    }
    return 0;
}

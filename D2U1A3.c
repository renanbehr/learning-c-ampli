#include <stdio.h>
int fatorial (int numero) {
    return numero == 0 ? 1 : numero * fatorial(numero - 1);
}
int main() {
    int n, resultado;
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("\nResultado = %d\n", resultado);
    return 0;
}

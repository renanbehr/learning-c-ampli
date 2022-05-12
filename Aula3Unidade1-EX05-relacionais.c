#include <stdio.h>
int main(){
    int n1 = 0;
    int n2 = 0;
    printf("\nDigite o 1º valor: ");
    scanf("%d", &n1);
    printf("\nDigite o 2º valor: ");
    scanf("%d", &n2);
    printf("\n n1 e n2 são iguais? %d", n1 == n2);
    printf("\n n1 é maior que n2? %d", n1 > n2);
    printf("\n n2 é menor ou igual a n1? %d\n", n2 <= n1);
}

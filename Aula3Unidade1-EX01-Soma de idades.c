#include <stdio.h>
int main(){
    int idade1 = 0;
    int idade2 = 0;
    int soma = 0;
    printf("\n Insira o valor da idade 1: ");
    scanf("%d", &idade1);
    printf("\n Insira o valor da idade 2: ");
    scanf("%d", &idade2);
    soma = idade1 + idade2;
    printf("\n O valor da soma é %d\n", soma);
}

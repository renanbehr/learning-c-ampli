#include <stdio.h>
int main(){
    char parar;
    float nota;
    printf("\nDigite a nota final do aluno: ");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10) {
        printf("\nNota inválida! Digite a nota final do aluno: ");
        scanf("%f", &nota);
    }
    return 0;
}

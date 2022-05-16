#include <stdio.h>
int main(){
    char parar;
    float nota;
    do {
        printf("\nDigite a nota final do aluno: [0 a 10] ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
    return 0;
}

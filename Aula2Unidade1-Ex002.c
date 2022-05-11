#include <stdio.h>
int main(){
    int idade = 27;
    float salario = 3275.50;
    double porcentagem_desconto = 3.75;
    char genero = 'M';
    float altura = 1.83;

    printf("\n Idade: %d", idade);
    printf("\n Salário: %f", salario);
    printf("\n Desconto (%): %f", porcentagem_desconto);
    printf("\n Gênero: %c", genero);
    printf("\n Altura: %.2f", altura);
    return 0;
}
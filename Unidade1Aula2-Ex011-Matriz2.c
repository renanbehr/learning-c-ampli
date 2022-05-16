#include <stdio.h>
int main(){
    float notas[3][2];
    printf("Digite uma nota: ");
    fflush(stdin);
    scanf("%f", &notas[0][0]);
    printf("\nNota digitada: %.2f\n", notas[0][0]);
    return 0;
}

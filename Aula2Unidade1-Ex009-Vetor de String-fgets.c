#include <stdio.h>
int main(){
    char frase[101];
    printf("\n Digite uma frase: ");
    fflush(stdin);
    fgets(frase, 101, stdin);
    printf("\n Frase digitada: %s\n", frase);
    return 0;
}
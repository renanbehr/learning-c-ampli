#include <stdio.h>

int x = 10;

int main(){
    int x = -1;
    int b;//variável local pra armazenar o x global
    {
        extern int x;
        b = x;
    }
    printf("\nValor de x local = %d\n", x);
    printf("\nValor de x global (b) = %d\n", b);
    return 0;
}
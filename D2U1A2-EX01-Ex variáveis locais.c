#include <stdio.h>

int testar(){
    int x = 10;
    return x;
}
int main(){
    int x = 20;
    printf("\nValor de x na função main() = %d", x);
    printf("\nValor de x na função testar() = %d\n", testar());
   
    return 0;
}
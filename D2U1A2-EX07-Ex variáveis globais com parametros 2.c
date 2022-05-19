#include <stdio.h>

void testar(int n1, int n2){
    n1 = -1;
    n2 = -2;
    printf("\nValores dentro da função testar(): ");
    printf("n1 = %d e n2 = %d\n", n1, n2);
}

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): ");
    printf("n1 = %d e n2 = %d\n", n1, n2);

    testar(n1, n2);
    printf("\nValores depois de chamar a função testar(): ");
    printf("n1 = %d e n2 = %d\n", n1, n2);//aponta pros valores locais

    return 0;
}
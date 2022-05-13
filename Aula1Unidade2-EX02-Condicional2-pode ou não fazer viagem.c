#include <stdio.h>
int main(){
    float orcamento;
    printf("\n Digite o orçamento da viagem: ");
    scanf("%f", &orcamento);
    if (orcamento >= 10000) {
        printf("\n Vocês podem viajar para o exterior!\n");
    } 
    else {
        printf("\n Vocês podem viajar dentro do Brasil.\n");
    }
    return 0;
}

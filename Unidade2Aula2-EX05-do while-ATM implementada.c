#include <stdio.h>
int main(){
    float soma=0;
    float valor;
    int opcao;
    do {
        printf("\nM E N U   D E   O P Ç Õ E S");
        printf("\n 1. Depósito");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");
        printf("\n Informe sua opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nInforme o valor: ");
            scanf("%f", &valor);
            soma += valor;
            break;
        case 2:
            printf("\n Informe o valor: ");
            scanf("%f", &valor);
            if (valor > soma) {
                printf("\nSaldo insuficiente!");
            }
            else {
                soma -= valor;
            }
            break;
        case 3:
            printf("\nSaldo atual = R$ %2.f", soma);
            break;
        case 4:
            printf("\nSaindo...");
            break;
        default:
            printf("\nOpção inválida!");
            break;
        }
    } while (opcao != 4);
    printf("\nFim das operações!");
    return 0;
}

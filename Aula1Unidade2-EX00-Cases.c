#include <stdio.h>
int main(){
    char x;
    float valor, desc, total;
    printf("\n Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
    printf("\n a. azul");
    printf("\n v. vermelho");
    printf("\n b. branco");
    printf("\n Digite a sua opção: ");
    scanf("%s", &x);
    switch(x)
    {
        case 'a':
            printf("\n Você escolheu a cor azul, seu desconto é de 30%\n");
            desc = 30;
            break;
        case 'v':
            printf("\n Você escolheu a cor vermelho, seu desconto é de 20%\n");
            desc = 20;
            break;
        case 'b':
            printf("\n Você escolheu a cor branco, seu desconto é de 10%\n");
            desc = 10;
            break;
        default:
            printf("\n Opção inválida, não será dado desconto\n");
            desc = 0;
            break;
    }
    total = valor - (valor * desc / 100);
    printf("\n O valor da sua compra será de R$ %.2f\n", total);
    return 0;
}

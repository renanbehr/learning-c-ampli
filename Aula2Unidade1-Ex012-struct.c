#include <stdio.h>
struct automovel{
    char modelo[20];
    int ano;
    float valor;
};
int main(){
    struct automovel dadosAutomovel1;
    printf("\n Digite o modelo do automovel: ");
    scanf("%s",dadosAutomovel1.modelo);
    printf("\n Digite o ano do automovel: ");
    scanf("%d",&dadosAutomovel1.ano);
    printf("\n Digite o valor do automovel: ");
    scanf("%f",&dadosAutomovel1.valor);

    printf("\n Dados atribuídos");
    printf("\n %s",dadosAutomovel1.modelo);
    printf("\n %d",dadosAutomovel1.ano);
    printf("\n %.2f\n",dadosAutomovel1.valor);

}
#include <stdio.h>
float calcularIMC(){
    float peso;
    float altura;
    float imc;
    printf("\nDigite o peso do indivíduo: ");
    scanf("%f", &peso);
    printf("\nDigite a altura do indivíduo: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    return imc;
}
int main(){
    float imc = calcularIMC();
    if (imc < 18.5) printf("\nIMC = %.2f\nO indivíduo está abaixo do peso.\n", imc);
    else if (imc < 24.9) printf("\nIMC = %.2f\nO indivíduo está no peso ideal.\n", imc);
    else printf("\nIMC = %.2f\nO indivíduo está com sobrepeso.\n", imc);
}

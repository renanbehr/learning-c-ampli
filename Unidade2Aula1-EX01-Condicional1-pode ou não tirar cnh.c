#include <stdio.h>
int main(){
    int idade;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("\n Você já pode tirar CNH \n");
    } else {
        printf("\n Você não pode tirar CNH \n");
    }
    return 0;
}

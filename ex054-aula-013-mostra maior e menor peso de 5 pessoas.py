# Exercício 55 Aula 13 - Verificador de maior e menor peso de 5 pessoas
menor = 0
maior = 0
for p in range(1, 6):
    peso = float(input(f'Peso da pessoa nº{p}: '))
    if p == 1:
        maior = peso
        menor = peso
    else:
        if peso > maior:
            maior = peso
        if peso < menor:
            menor = peso
print(f'O maior peso lido foi de {maior} Kg.')
print(f'O menor peso lido foi de {menor} Kg.')

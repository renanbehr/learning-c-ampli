# Exercício 54 Aula 13 - Verificador de pessoas maiores de idade
from datetime import date
atual = date.today().year
maior = 0
menor = 0
for pessoa in range(1, 8):
    nasc = int(input(f'Em que ano a {pessoa} pessoa nasceu? '))
    idade = atual - nasc
    if idade >= 18:
        maior += 1
    else:
        menor += 1
print(f'Há neste grupo {maior} pessoas maiores de idade'
      f'\nE {menor} pessoas menores de idade.')

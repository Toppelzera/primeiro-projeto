import random

print("Adivinhe o numero em até 8 rodadas!")

aleatorio = random.sample(range(10), 4)  # n2 lista
numero = int(''.join(map(str, aleatorio)))  # numero inteiro
rodadas = 0

while True:
    tentativa = input("Digite um número de 4 dígitos diferentes: ")
    if len(tentativa) == 4 and tentativa.isdigit() and len(set(tentativa)) == 4:
        break
    else:
        print("Entrada inválida. Tente novamente.")

while True:

    if rodadas >6:
        print("Você perdeu! O número era:", numero)
        break
    else:
        rodadas += 1
        
    rodadas_restantes = 8 - rodadas    
    acertos = 0
    posicoes = 0

    for i in range(4):
        if tentativa[i] == str(aleatorio[i]):
            posicoes += 1
        elif tentativa[i] in map(str, aleatorio):
            acertos += 1

    if posicoes == 4:
        print(f"Parabéns! Você acertou o número ({numero}) em {rodadas} rodadas.")
        break
    else:
        print(f"Você acertou {acertos} números e {posicoes} estão na posição correta. Tente novamente. Restam {rodadas_restantes} rodadas")
        while True:
            tentativa = input("Digite um outro número de 4 dígitos diferentes: ")
            if len(tentativa) == 4 and tentativa.isdigit() and len(set(tentativa)) == 4:
                break
            else:
                print("Entrada inválida. Tente novamente.")

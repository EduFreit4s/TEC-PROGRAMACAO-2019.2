import random

segredo = round(random.random()*100)
numero_tentativas = 4





for i in range(numero_tentativas) :


    chute = int(input("Digite um palpite: "))

    if chute == segredo :
        print("Acertô mizeravi!")
        exit()
    elif chute > segredo :
        print("Numero menor!")

    else : 
        print("Numero maior!")

print("Fim do jogo: ", segredo)


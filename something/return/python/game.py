


numero_tentativas = 4
segredo = 42


while numero_tentativas != 0 :

    numero_tentativas -= 1

    chute = int(input("Digite um palpite: "))

    if chute == segredo :
        print("Acertô mizeravi!")
        exit()
    elif chute > segredo :
        print("Numero menor! \t Resta: ", numero_tentativas)

    else : 
        print("Numero maior! \t Resta: ", numero_tentativas)

print("Fim do jogo")

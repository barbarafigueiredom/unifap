try:
    numero = int(input("Digite um número de 3 dígitos: "))

    if 100 <= abs(numero) <= 999:
        centenas = abs(numero) // 100

        if centenas % 2 == 0:
            print("O algarismo das centenas é par.")
        else:
            print("O algarismo das centenas é ímpar.")
    else:
        print("Erro: o número não tem 3 dígitos.")

except ValueError:
    print("Erro: você não digitou um número inteiro válido.")

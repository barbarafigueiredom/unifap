try:
    numero = int(input("Digite um número: "))

    if numero % 3 == 0 and numero % 7 == 0:
        print("O número é divisível por 3 e por 7.")
    else:
        print("O número NÃO é divisível por 3 e por 7.")

except ValueError:
    print("Erro: você não digitou um número inteiro válido.")

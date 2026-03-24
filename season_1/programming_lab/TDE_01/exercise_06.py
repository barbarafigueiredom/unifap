try:
    numero = int(input("Digite um número: "))

    if numero < 0:
        print("Números negativos não são quadrados perfeitos.")
    else:
        raiz = int(numero ** 0.5)

        if raiz * raiz == numero:
            print("É um quadrado perfeito.")
        else:
            print("Não é um quadrado perfeito.")

except ValueError:
    print("Erro: digite um número inteiro válido.")

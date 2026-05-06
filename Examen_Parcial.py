import random

def main():
    print("----MENU DE SERIES----")
    print("1. Serie A")
    print("2. Serie B")

    try:
        opc = int(input("\nSeleccione una serie: "))
    except ValueError:
        print("Entrada invalida")
        return

    if opc == 1:
        serie_A()
    elif opc == 2:
        serie_B()
    else:
        print("Opcion invalida")

def serie_A():
    dado1 = random.randint(1, 6)
    dado2 = random.randint(1, 6)
    suma = dado1 + dado2
    if suma == 7 or suma == 11:
        print("Felicidades, ganaste en tu primer intento")
    elif suma == 2 or suma == 3 or suma == 12:
        print("Perdiste, la casa gana")
    else:
        suerte = suma #el primer tiro se convierte en numero de la suerte
        suma = 0
        while suma != suerte and suma != 7:
            dado1 = random.randint(1, 6)
            dado2 = random.randint(1, 6)
            suma = dado1 + dado2
            print("Tiro: ", dado1, " + ", dado2, " =")
        if (suma == suerte):
            print("Ganaste, salio tu numero de la suerte")
        else:
            print("Perdiste, salio un 7 antes que tu numero de la suerte")

def serie_B():
    cC = 0
    for i in range(10):
        num1 = random.randint(1,9)
        num2 = random.randint(1,9)
        m = num1 * num2
        print ("Cuanto es ", num1, " * ", num2)
        r = int(input())
        if r != m:
            print("No, intenta de nuevo")
        else:
            print("Muy bien")
            cC += 1

    print ("Resultados finales")
    print("Respuestas correctas: ", cC)
    print("Respuestas incorrectas: ", 10-cC)
    if cC < 7:
        print("Por favor pida ayuda adicional a un instructor")
    else:
        print("Felicidades, sigue practicando")

if __name__ == "__main__":
    main()

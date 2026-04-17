def cuadrado():
    lado = int(input("Ingresa el valor del lado: "))
    print(f"El area del cuadrado es: {lado*lado}")

def rectangulo():
    base = int(input("Ingresa el valor de la base: "))
    altura = int(input("Ingresa el valor de la altura: "))
    print(f"El area del cuadrado es: {base*altura}")

def triangulo():
    base = int(input("Ingresa el valor de la base: "))
    altura = int(input("Ingresa el valor de la altura: "))
    print(f"El area del triangulo es: {base*altura/2}")

def circulo():
    radio = int(input("Ingresa el valor del radio: "))
    print(f"El area del circulo es: {3.1416*radio*radio}")

def main():
    print("CALCULO DE AREAS")
    print("1. Cuadrado\n2. Rectangulo\n3. Triangulo\n4. Circulo")
    opc = int(input("\nElige una opcion: "))

    if opc == 1:
        cuadrado()
    elif opc == 2:
        rectangulo()
    elif opc == 3:
        triangulo()
    elif opc == 4:
        circulo()
    else:
        print("Opcion invalida")

if __name__ == "__main__": #Invocacion a la funcion main
    main()
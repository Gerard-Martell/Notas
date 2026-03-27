print("\nMENU DE OPCIONES")
print("\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia")
opc = int(input("\nSelecciona una opcion: \n"))

val1 = float(input("\nValor 1: \n"))
val2 = float(input("\nValor 2: \n"))

#No hay estructura switch (C++) o algo que se le parezca
#Se emula con sentencias if - elif - else

if opc == 1:
    res = val1 + val2
    print(val1, "+", val2, "=", res)
elif opc == 2:
    res = val1 - val2
    print(val1, "-", val2, "=", res)
elif opc == 3:
    res = val1 * val2
    print(val1, "*", val2, "=", res)
elif opc == 4:
    if val2 != 0:
        res = val1 / val2
    else:
        print("\nERROR. No se puede dividir entre 0")
elif opc == 5:
    res = pow(val1, val2)
    print(val1, "^", val2, "=", res)
else:
    print("\nOpcion no valida")
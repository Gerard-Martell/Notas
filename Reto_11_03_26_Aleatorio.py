#Adivina el numero

'''
Crear un programa en C++/Python que genere un numero aleatorio entre 1 y 20, luego pida al usuario adivinarlo.
El programa debera decir al usuario si su intento es bajo o alto.
Gana si adivina el numero en 5 intentos o menos.
'''

import random

aleatorio = random.randint(1, 20)

print("Adivina el numero entre 1 y 20: ")
num = int(input)

if num < aleatorio:
    print("Bajo. Escribe uno mayor")
elif num > aleatorio:
    print("Alto. Escribe uno menor")

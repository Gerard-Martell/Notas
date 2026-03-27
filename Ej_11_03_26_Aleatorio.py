#Generacion de numeros aleatorios (pseudoaleatorios)

import random

aleatorio = random.randint(0, 100)
print("Valor entre 0 - 100: ", aleatorio)

aleatorio =  random.randrange(80)
print("Valor entre 0 - 79: ", aleatorio)

aleatorio =  random.randrange(50,81,5)
print("Valor entre 50 - 80, de 5 en 5: ", aleatorio)

aleatorio = random.choice((78,65,75,15,20))
print("Valor entre 78, 65, 75, 15, 20: ", aleatorio)

aleatorio = random.choice(("lunes","martes","miercoles","jueves","viernes"))
print("Valor entre los dias de la semana: ", aleatorio)

lista = ["facebook","instagram","tiktok","whatsapp"]
aleatorio = random.choice(lista)
print("Red social: ", aleatorio)
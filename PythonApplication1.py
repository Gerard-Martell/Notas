"""
Realizar un algoritmo en pseudocodigp para
convertir grados Celsius a grados Kelvin
y Farenheit
"""
#No es necesario la declaracion de variables
#Escribir --> print()
#Leer     --> input()

print("Grados Celsius:")
graCel = float(input())
#graCel = float(input("Grados Celsius: "))

graKel = graCel + 273.15
graFah = (graCel * 9/5) + 32

print("Los ", graCel, " grados Celsius equivalen a: ")
print( graKel, " grados Kelvin")
print( graFah, " grados Farenheit")
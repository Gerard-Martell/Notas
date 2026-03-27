import sys

entero = 56
doble = 10
flotante = 10.0
caracter = 'A'
c2 = 64
boleano = True

print("Tamanio en bytes de los tipos de datos primitivos\n")
print("Entero (int): ",entero," (Tamanio: ", sys.getsizeof(entero), "bytes)")
print("Doble (no hay double, es float): ",doble, " (Tamanio: ", sys.getsizeof(flotante), "bytes)")
print("Flotante (float): ",flotante," (Tamanio: ", sys.getsizeof(flotante), "bytes)")
print("Caracter (char): ",caracter," (Tamanio: ", sys.getsizeof(caracter), "bytes)")
print("Caracter 2 (char): ",c2," (Tamanio: ", sys.getsizeof(c2), "bytes)")
print("Booleano (bool): ",boleano," (Tamanio: ", sys.getsizeof(boleano), "bytes)")

cadena = "\nHola chicos de Algoritmos y Programacion"
print("\nCadena (str): ",cadena," (Tamanio: ", sys.getsizeof(cadena)," bytes)")

print("\nCONVERSION DE TIPOS")

valor = "2026"
tiempo = int(valor) -45
print(tiempo)

a = input("Ahora al tiempo obtenido: " + str(tiempo)+ " ingresa tu edad\n")
print(a)
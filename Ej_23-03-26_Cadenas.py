#Cadena --> secuencia de caracteres

nombre = input("Ingresa tu nombre: ")
apellidos = input("Ingresa tus apellidos: ")

print(f"Hola {nombre} {apellidos}, mucho gusto!")

lugar = input("Ingresa el lugar de origen: ")
tiempo = int(input("Cuantos anios has vivido ahi? "))

#concatenacion
descripcion = "No conozco " + lugar + " seria bonito visitarlo porque has vivido " + str(tiempo) + " anios"
texto2 = f"No conozco {lugar} seria bonito visitarlo porque has vivvido {tiempo} anios"

print("Nombre: ", nombre)
print("Apellidos: ", apellidos)
print(texto2)

print(nombre[0])
print(nombre[1])
print(nombre[2])

tamanio = len(nombre)
print("Tamnio del nombre", tamanio)
print(nombre[tamanio-1]) #nombre[len(nombre)-1]
# nombre[:3] sustituye a la de abajo
print(nombre [0:3]) #imprime primeros 3 caracteres
# nombre[3:] sustituye a la de abajo
print(nombre[3:len(nombre)]) #a partir de 4to caracter hasta el final
print(nombre[2:5]) 

#Utilizando ciclos
for i in range(0, len(nombre)):
    print(nombre[i], end="")
print()

for i in nombre:
    print(i, end= "-")
print()

for i in range(len(nombre)-1, -1, -1):
    print(nombre[i], end=",")
# Listas - (Eqivalente a los Array)

#Declaracion de listas
#nombre = []
numerosPrimos = [2,3,5,7,11,13]
print(numerosPrimos)

for i in range(0,len(numerosPrimos)):
    print(numerosPrimos[i])

diasSemana = ["Lunes", "Martes", "Mieroles"]
print(diasSemana)

for i in diasSemana:
    print(i)

fecha = [27,"Marzo",2026,"Viernes"]
print(fecha)

listaLista = [numerosPrimos, diasSemana, fecha, ["F",25]]
print(listaLista)

#Agregar valores a una lista
vacaciones = []
print(vacaciones)

lugar = input("LUgar para vacacionar: ")
vacaciones.append(lugar)
print(vacaciones)

calificaciones = []

for i in range(6):
    nota = int(input("Calificacion ("+str(i+1)+"): "))
    calificaciones.append(nota)

    print(calificaciones)
#Datos de entrada
print("Salario basico: ")
salBas = float(input())
print("Tiempo de servicio en anios: ")
tieSer = int(input())

#Procesos parciales
if tieSer < 5:
    porBon = 5
else:
    if tieSer < 10:
        porBon = 10
    else:
        if tieSer < 20:
            porBon = 20
        else:
            if tieSer < 25:
                porBon = 35
            else:
                if tieSer < 30:
                    porBon = 35
                else:
                    porBon = 50

valBon = (salBas * porBon) / 100
print(f"Porcentaje de bonificacion: {porBon}%")
print(f"Valor de bonificacion: ${valBon}")
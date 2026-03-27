"""
Un estudiante desea saber cual sera su calificacion
final en el curso de Algoritmos, con los siguientes
items de calificaciones:
Primer parcial: 20 %
Segundo parcial: 20 %
Practica: 35 %
Parcial Final: 25 %
"""

porPriPar = 20
porSegPar = 20
porPra = 35
porParFin = 25

print("Primer Parcial")
priPar = float(input())

print("Segundo Parcial")
segPar = float(input())

print("Practica")
pra = float(input())

print("Parcial Final")
parFin = float(input())

#notDef = ((priPar*porPriPar)/100) + ((segPar*porSegPar)/100) + (pra*(porPra)/100) + ((parFin*porParFin)/100)
notDef = (priPar * 0.2) + (segPar * 0.2) + (pra * 0.35) + (parFin * 0.25)

print("Nota definitiva : ", notDef)
#While - Mientras

mdo = 8 
mdor = 0

print("Tablas\n")
mdo = int(input("Ingresa un numero: "))

while mdor <= 9:
    mdor += 1    #mdor = mdor + 1
    prod = mdo * mdor

    print(f"{mdo} * {mdor} = {prod}")
    #print(mdo, "*", mdor,"=",prod)

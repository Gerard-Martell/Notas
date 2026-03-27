#Otras formas de usar for en Python
for i in range (11):
    print (i, end=", ")

print()
for i in range (1,100,2):
    print(i, end= ", ")

print()
for i in ("Yucatan", "Tabasco", "CDMX"):
    print(i, end=", ")

print()
lista = ["OpenAI", "Grok", "Copilot", "Gemini", "DaVinci"]
for i in lista:
    print(i, end=", ")
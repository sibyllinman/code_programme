'''
import math

# Racine carrée
print(math.sqrt(16))   # Résultat : 4.0

# Valeur de pi
print(math.pi)         # Résultat : 3.141592653589793

# Cosinus
print(math.cos(math.pi))  # Résultat : -1.0
import math
'''
# =============================================================================
# RÉCAPITULATIF DE LA BIBLIOTHÈQUE MATH
# =============================================================================
# FONCTION             | DESCRIPTION                         | EXEMPLE
# ---------------------|-------------------------------------|-----------------
# math.pi              | La constante pi (3.1415...)         | print(math.pi)
# math.sqrt(x)         | Racine carrée : $\sqrt{x}$            | math.sqrt(16) -> 4.0
# math.pow(x, y)       | Puissance : $x^y$                   | math.pow(2, 3) -> 8.0
# math.ceil(x)         | Arrondi au supérieur (Plafond)      | math.ceil(2.1) -> 3
# math.floor(x)        | Arrondi à l'inférieur (Sol)         | math.floor(2.9) -> 2
# math.factorial(n)    | Factorielle : $n!$                  | math.factorial(5) -> 120
# math.fabs(x)         | Valeur absolue : $|x|$              | math.fabs(-5) -> 5.0
# math.degrees(rad)    | Convertit Radians en Degrés         | math.degrees(math.pi) -> 180.0
# math.radians(deg)    | Convertit Degrés en Radians         | math.radians(180) -> 3.1415...
# math.sin/cos/tan(x)  | Trigonométrie (x en radians)        | math.sin(math.pi/2) -> 1.0
# math.log(x, base)    | Logarithme (par défaut base $e$)      | math.log(100, 10) -> 2.0
# =============================================================================

# Petit test rapide pour vérifier que tout fonctionne :
#print(f"La racine de 64 est {math.sqrt(64)}")






### exercice 1
'''nom=input("Enter your name: ")
age=int(input("enter your age : "))
print(f"Bonjour {nom} votre age est  {age} ,Bienvenue a l'universite ")'''

### Exercice 2
'''annee=int(input("entre your year of birth : "))
age = 2026-annee
print(f"you are {age} years.")'''

### Exercice 3
'''print("veiller entrer les dimensions du rectangles : ")
longer=float(input("longer : "))
larger=float(input("larger : "))
perimeter = (longer + larger) * 2
surface = longer * larger
print(f"votre rectangle de longeur {longer} m et de largeur {larger} m a un perimetre de {format(perimeter,".2f")} m et une surface de {format(surface,".2f")} mm")'''

### Eercice 4
'''print(" b = a^c")
a = float(input("entrer la valeure de a : "))
c=int(input("entrer la valeure de c : "))
b =a**c
print(f"b = {format(b,".1f")}")'''

### Exercice 6
'''
s=0
for i in range(1,6):
    note=float(input(f"enter la note {i} : "))
    s=s+i
print(s)
'''

### Exercice 7
'''
import math
print("notre program permet de calculer la volume d'un sphere")
r=float(input("veiller entrer le rayon du sphere : "))
v=(4*math.pi*(r**3))/3
print(f"le colume du sphere de rayon {r} est : {format(v,".1f")}")
'''

### Exercice 8
'''
a= int(input("entrer la valeur de A : "))
b=int(input("entrer la valeure de B : "))
c=a
a=b
b=c
print(f"apres echange,\nA={a}\nB={b}")
### Aurement :

a=a+b
b=a-b
a=a-b
print(f"apres echange,\nA={a}\nB={b}")
### Autrement 
a,b=b,a
print(f"apres echange,\nA={a}\nB={b}")
'''

#### Exercice 9
'''
t=int(input("veiller entrer un temps en seconde"))
h=t//3600
m =(t%3600)//60
s=(t%24)%60
print(f"{t} secondes correspond a : {h} heures {m} minutes et {s} secondes")

'''

### Exercice 10
'''
import math
x1=float(input("entrer X1 :"))
y1=float(input("entrer Y1 :"))
x2=float(input("entrer X2 :"))
y2=float(input("entrer Y2 :"))
d=math.sqrt((x1-x2)**2+(y1-y2)**2)
print(f"la distance entre ces deux points est : {format(d,".2f")} m")
'''

### Exercice 11
'''
print("veiller entrer les valeurs des trois resiatances")
r1=float(input("R1 = "))
r2=float(input("R2 = "))
r3=float(input("R3 = "))
t=input("quel est le type de branchement : \n1 en parallele \n2 en seri \n")


if t==1 :
    s=r1+r2+r3
    print(f"la somme des resistances est de : {s} ohm")
else:
    s=(r1*r2*r3)/(1*r2)+(r1*r3)+(r2*r3)
    print(f"la somme des resistances est de : {s} ohm")
'''

# Exercice 12
'''
n1=float(input("entrer un nombre N1 :"))
n2=float(input("entrer un nombre N2 :"))
if n1*n2>0:
    print("les deux nombres sont de meme signe .")
else :
    print("les deux nombres sont de signe oppose .")
'''

# Exercice 14
'''q=int(input("entrer la quantite de photocopie : \n"))
if q>=30:
    prix=(10*0.30)+(20*0.25)+((q-30)*0.20)
elif 0<q<=30 :
    prix=(10*0.30)+((q-10)*0.25)

print(f"le montant de votre facture est de : {prix} dh")
'''

# Exercice 18
'''
sexe=int(input("de quel genre etes vous : \n1 Masculin\n2 Feminin \ngenre :"))
age=int(input("veiller saisir votre age :\n"))
if (sexe==1 and age>=20 )or (sexe==2 and 18<=age<=35) :
    print("vous étes imposable")
else :
    print("vous n'etes pas imposable")
'''

### Exercice 22
'''
n=int(input("veiller entrer un nombre"))
if n%2==0:
    print(f"{n} est pair")
else :
    print(f"{n} est impair")
'''

### Exercice
'''
caractere=input("veiller saisir un caractere :\n")
if "a"<=caractere<="z" or "A"<=caractere<="Z" :
    print("le caractere sais appartient a l'alphabet")
elif "0"<=caractere<="9" :
    print("le caractere sais est un chiffre")
else :
    print("le caractere sais est un caractere special")
'''

### Exercice 25
'''
n=int(input("veiller entrer un nombre N : \n"))
for i in range(1,11):
    N=n+i
    print(N)
while( 0<i<11) :
    N=n+i
    print(N)
'''


### Exercice 27 :
'''
s=0
n=int(input("veiller entrer un nombre N : \n"))
for i in range (1,n+1):
    s=s+1/i
print(format,"2f")

'''


### Exoercice 28 :

'''s=0
n=int(input("veiller entrer un nombre N : \n"))
for i in range(0,n+1):
    s=s+(10**i)
print(format(s,".0f"))

'''

### Exercice 29 :
'''f=1
print("veiller entrer un nombre N positif nom nul : ")
n=int(input())
while not n >0:
    n=int(input("le nombre entre est invalid : RESSAYEZ \n"))
    if n>0:
        break
for i in range(1,n+1):
    f=f*i
print(format(f,".0f"))
'''

'''
a = int(input("Entrer un entier en base 10 : "))
bits = []

while a != 0:
    b = a % 2
    a = a // 2
    bits.append(str(b))  # stocker le reste comme caractère

# inverser la liste et joindre en une chaîne
binaire = "".join(reversed(bits))
print("Représentation binaire :", binaire)
'''
a = int(input("Entrer un entier en base 10 : "))
print(bin(a)[2:])









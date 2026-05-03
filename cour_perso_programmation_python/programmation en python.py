


'''avogadro_number=6.022_144_7623
print(avogadro_number)
print(1e10)
x=1e8
print(x)
y=8//3
print(y)
z=8%7
print(z)

chaine = 'salut'
print(chaine)
chaine+=' pyhton'
print(chaine)
print(type(x))
i=3
print(str(i))
i='854'
print(int(i))

print(min(5,8,6,4,7))
print(max(5,8,6,4,7))
pi=3.14
k=9e9
print(max(pi,k))
print(min(pi,k))

a=7+(3**6)
if a==736:
    print(a," correspond a un nombre de friedman")
else:
    print(a," ne correspond pas a un nombre de friedman ")

b=(3+4)**3
if b==343:
    print(b," correspond a un nombre de friedman")
else:
    print(b," ne correspond pas a un nombre de friedman ")


c=3**6-5
if c==365:
    print(c," correspond a un nombre de friedman")
else:
    print(c," ne correspond pas a un nombre de friedman ")

d=(2+1**8)**5
if c==2185:
    print(d," correspond a un nombre de friedman")
else:
    print(d," ne correspond pas a un nombre de friedman ")

'''
from idlelib.browser import file_open

'''le f-string'''
'''print("hello!")
nom = input("entrer votre nom : ")
age=int(input("enter votre age : "))
print(f"votre nom est {nom} vous avez {age} ans")
'''

'''. Imaginez que vous vouliez calculer, puis afficher, la proportion de GC d’un génome. La proportion
de GC s’obtient comme la somme des bases Guanine (G) et Cytosine (C) divisée par le nombre total de bases (A, T, C,
G) du génome considéré. Si on a, par exemple, 4 500 bases G et 2 575 bases C, pour un total de 14 800 bases, on 
pourrait procéder comme suit'''

'''nb_G = 4500
nb_C = 2575
proportion = (2575+4500)/14800
perc_GC=proportion*100
print(f"Ce génome contient {nb_G:d} Guanines et {nb_C:d} Cytosines, "
f"soit une proportion de {proportion:.2f}")

print(f"Ce génome contient {nb_G:d} G et {nb_C:d} C, "
f"soit un %GC de {perc_GC:.2f} %")'''

'''numb_avogadro=6.022_140_76e23
print(f"{numb_avogadro:.0e}")
print(f"{numb_avogadro:.2e}")
'''
'''on va afficher un brin d'ADN poly-A de 20 bases'''
'''brin1="AAAA-"
print(brin1 * 20)'''
'''on va afficher un brin d'ADN poly-A de 20 bases et un brin d'ADN poly CG de 40 bases'''
'''brin2="CGCG-"
print(brin2 * 40)

a='salut'
b=102
c=10.315
print(f"{a} , {b} ,{c:.2f}")'''
'''Utilisez l’opérateurmodulo (%) et l’opérateur divisionentière (//) pour simplifier des fractions, connaissant leur
numérateuret leurdénominateur,etafficher lerésultatavecdesf-strings.
Par exemplepour la fraction 7
3, lenumérateur vaut7et ledénominateur vaut3, et le résultat s’affichera sous la
forme:
7/3=2+ 1/3'''
'''diviseur = 3
dividande=14
print(f"{dividande}/{diviseur}={dividande//diviseur}+{dividande%diviseur}/{diviseur}")
'''
'''diviseur =5
dividande=23
print(f"{dividande}/{diviseur}={dividande//diviseur}+{dividande%diviseur}/{diviseur}")
'''
'''on va essayer de creer u programme qui code un message par le chiffrement de cesar'''
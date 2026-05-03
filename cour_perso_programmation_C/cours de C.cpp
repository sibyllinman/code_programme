// cours de C.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.//
/*
#include <iostream>
#include <stdio.h>


int main()
{

les types de donnees , les operations et les instructions de base en langage C*/
/**les entiers :
int : 2 octets 
long: 4 octets
unsigned int : 2 octets
unsagned long : 4 octets
les chararcteres :
char : 1 octet
unsigned char : 1 octet
les booleens :
bool : 1 octet
les reels :
float : 4 octets
double : 8 octets
long doule : 10 octets	
les modificateurs de types :
signed
unsigned
long
short

les operateurs arithmetiques :
+ : addition
- : soustraction
* : multiplication
/ : division
% : modulo (reste de la division entiere)
++ : incrementation (ajoute 1 a la variable)
-- : decrementation (enleve 1 a la variable)
// : division entiere (ne conserve que la partie entiere du resultat)
   ou bien on peut utiliser la fonction floor() pour obtenir la partie entiere d'une division 
   ou bien declarer le resultat en tant que type entier

les operateurs de comparaison :
== : egal a
!= : different de
> : superieur a
< : inferieur a
>= : superieur ou egal a
<= : inferieur ou egal a

les operateurs logiques :
&& : et logique (renvoie vrai si les deux operandes sont vrais)
|| : ou logique (renvoie vrai si au moins un des operandes est vrai)
! : non logique (renvoie vrai si l'operande est faux)
les structures de controle :
if , else , switch , case , default , for , while , do while , break , continue , return

*/

/*la declaration d'une fonction :*/
/*le declatration permet d'informer l'ordinateur l'existance d'une donnee.
pour les constantes :
const typte nom_de_constante = valeur;
pour les variables :
type nom_de_variable;
exemple :
const float pi = 3.14; (constante )
char note; (variable )


#include <stdio.h>

int main() {

	const float pi = 3.14;
	const int nbr_etudiants = 30;

	int age;
	float moyenne;
	bool est_admis;
	char sexe;

l'affectation est une operation qui permet d'attribuer une valeur a une variable.
exemple :
age = 20;
moyenne = 15.5;
A=8;
B=4+A;



	return 0;
}

*/

/*l'instruction d'ecriture - printf_s() :*/
/*exemple
printf("maroc");
printf("A=%d",A);
printf("les coordonnees sont :%f,%f",X,Y);

*/


/*les specificateurs de formatage :*/
/*
%d : int
%f : float dounle
%c : char
%ld : long

*/


/*les characteres d'echappement :*/
/*
\n : retour a la ligne
\t : tabulation horizontale
\' : affiche une apostrophe
\" : affiche des guillemets
\\ : affiche un antislash
%% : affiche un pourcentage


*/

/*declaration,affectation et affichage*/
/*#include <stdio.h>
int main(){
printf("hello world\n");
int x ;
x = 8;
printf("X = %d",x);
float c,d;
c = 5.5;
d = 2.3;
printf("les valeurs de c et d sont : %f et %f\n",c,d);
printf("c=%.2f,d=%.4f",c,d);
}
*/


/*l'instruction de lecture - scanf_s() :*/
/*exemple
scanf_s("%d",&A);      pour demander la valeure d'un entier
scanf_s("%c",&C);      pour demander la valeure d'un caractere
scanf_s("%f",&X);      pour demander la valeure d'un reel
scanf_s("%ld",&L);     pour demander la valeure d'un long









*/




/*la puissance en language C */
/*exemple
int x,y,z;
x=2;
y=3;
z=pow(x,y);
printf("le resultat de %d puissance %d est : %d",x,y,z);
*/


/*les expressions aithmetique elargies*/
/*

operateur                operation normale            operation elargie
    +=                       x=x+1					        x+=1
    -=					     x=x-1					        x-=1
	*=					     x=x*1					        x*=1/
	/=					     x=x/1					        x/=1
    %=					     x=x%1					        x%=1
	
*/


/*structurre sequentielle*/
/*un programme quoi suit une structure sequentielle es un prgramme dont toutes les 
instructions sont execute l'une apres l'autre dans l'ordre ou elles sont ecrites dans le
code source.
*/


/*structures conditionnelles  : IF */
/*la structure est une stucture dont les instructions sont 
executees selon les reponses des conditions*/


/*on va essayer de creer un programme qui calcule la devision de A sur
B sachan que B!=0*/


/*float a, b, c;
printf("dnner la valeure de A : ");
scanf_s("%d", &a);
printf("dnner la valeure de B : ");
scanf_s("%d", &b);
if (b != 0)
	c = a / b;
	printf("la division de A par B est : %.2f",c);
else 
	printf("B ne peut  pas premdre la valeure de zero")
	*/

/*on va creer un programme qui va determiner le maximum entre deux nombres*/
/*
printf("veiller entrer deux nombres :\n");
float a, b;
printf("entrer la valeure de A : ");
scanf_s("%f", &a);
printf("entrer la valeure de B : ");
scanf_s("%f", &b);
if (a > b)
	printf("A est le maximum");
else
	printf("B est le maximum");
	*/


/*on va creer un programme qui donne le signe d'un nombre donne*/
/*
printf("veiller entrer un nombre A \n");
float a;
scanf_s("%f",&a);
if (a != 0)
	if (a > 0)
		("A est positif");
	else
		printf("A est negatif");
else
	printf("A est nul");

*/


/*on va creer un programme qui determine l'etea de l'eau cnnaissant a temperature*/
/*
printf("veiller entrer la temperature de l'eau :\n");
float t;
scanf_s("%f", &t);
if (t > 0)
	if (t < 100)
		printf("l'eau est a l'etat LIQUIDE");
	else
		printf("l'eau est a l'etat VAPEUR");
else
	("l'eau est a l'etat SOLIDE");

	*/



/*structure conditionnelles : SWITCH*/
/*
lorsque l'imbrication des alterntives devient importante ,
l'utlisation de la structure a choix multiole devient naicessaire
syntaxe:
switch(expression){
	case valeur1:instruction1;
				 break;
	case valeur2:instruction2;
				 break;
	case valeur N:instruction N;
				 break;
	default : autreinstruvtion ;
				 break;
}



*/


/*on va creer un programme qui indique le jour selon les nombres de 1 a 7*/
/*
printf("entrer un nombre compris entre 1 et 7");
int j;
scanf_s("%d", &j);
switch (j) {
case1:printf("LUNDI");
	  break;
  case1:printf("mardi");
	  break;
  case1:printf("MERCREDI");
	  break;
  case1:printf("JEUDI");
	  break;
  case1:printf("VENDREDI");
	  break;
  case1:printf("SAMEDI");
	  break;
  case1:printf("DIMANCHE");
	  break;
  default:print("nombre incorrect");
	  break;

*/



/*les structures repetitives ( BOUCLES ) 
il permet d'executer plusieurs fois une sequence d'instructions.
dans une boucle le nombre de repetitions peut etre connue,fixee a l'avance,
comme il peut aussi dependre d'une condition permettant l'arret et la sortie de cette boucle
______le boucle FOR : dans cette structure , le nimbre de repetition peut etre connu
______le boucle WHILE et le boucle DO WHILE : dans ces cas ,le nombre de repetition depend d'une condition

*/

/*la boucle FOR :*/
/*
cette boucle permet d'executer une sequence d'instructions un noombre de fois connu fixe a l'avance
syntaxe:

for(initialisation;condition;incrementation){
	instruction a repeter;}

__l'inittiialisatio est ue instruction ou bloc d'intruction execcutee avant le premier our de la boucle
__la condition :tant que cette condition est vraie ,la boucle continue
__incrementation:cette instruction est executee a la fin de chaque boucle pour mettre a jour la variable*/



/*exemple 1:afficher le message hello world 5 fois*/
/*for (i = 0; i<5; i++) {
	printf("hello world !")

}

exemple 2 : donner la table de multipliction  de 5*/


/*afficher une table de multiplication*/
/*int i, m;
for(i=0;i<11;i++){
	m = 5 * i;
	printf("5 * %d = %d\n",i,m);												  

}
*/


/* on va essayer d'ecrire un algorithmr qui permet de calculer la somme des 20 premiers entier positifs */
/*
int i, s;
s = 0;
for (i = 1; i < 51; i++) {
	s = s+i;
}
printf("%d", s);
*/



/*la boucle WHILE :*/
/*cette boucle permet de repeter un bloc d'instruction tant qu'une condition est vraie
syntaxe:
while(comdition){
	instruction a repeter;
}
*/

/* EXECICE :*/
/*notre programme demande a l'utilasateur d'entrer un nombre compris entre 1 et 9
puis d'afficher sa table de multiplication

int n, i, m;
printf("veiller entrer un nombre compris entre 1 et 9 :\n");
scanf_s("%d", &n);
while (n>10 || n<0) {
	printf("le nombre doit etre compris entre 1 et 9 :\n");
	scanf_s("%d", &n);
}
for (i = 1; i < 11; i++) {
	m = n * i;
	printf("%d * %d = %d\n", n, i, m);}
*/

/*printf("veiller entrer un nombre entier compris entre 10 et 20 :");
int nbr;
scanf_s("%d", &nbr);
while (10 > nbr || nbr> 20) {
		if (nbr > 20) 
			printf("le nombre entre est superireur a 20 \n");
		else 
			printf("le nombre entre est inferieure a 10 \n"); 
		printf("REESSAYER \n");
		scanf_s("%d", &nbr);

	
}
printf("le nombre entre est correct");


*/


/*la boucle DO WHILE : */

/*EXEMPLE : */
/*
int n;
do {
	printf("veiller entrer un nombre compris entre 1 et 9 :\n");
	scanf_s("%d", &n);} 
while (n > 10 || n < 0);
printf("bien ,le nimbre entre est correct");

*/

/*EXERCICE */
/*
int i,n,s;
do {
	printf("veiller entrer un  nombre entier strictement superieur a 1 : \n");
	scanf_s("%d", &n);
} while (n <= 1);
s = 0;
for (i = 0; i <= n; i++) {
	s = s + i;
}
printf("%d",s );
*/


/*l'instruction BREAK */
/*elle permmet d'arreter  le deroulement d'une boucle et de passer a 
 l'instruction qui suit cette boucle
 
 syntaxe:
   
boucle(....){
	.......
	break;
	.......}
....................
 

 
 */
/*EXEMPLE : */
/*on va creer un programme qui calcule la somme d'un max de 8 nombres entres par
l'utilisateur ,si un nombre negatif est entre , la bcle se termine*/
/*
printf("veiller entrer 8 nombres entiers positifs :\n");
int n,i,s;
s = 0;
for (i = 1; i <= 8; i++) {
	printf("entrer le nombre %d :\n", i);
	scanf_s("%d", &n);
	if (n < 0)
		break;
	s = s + n;
	

}
printf("la somme est : %d", s);
*/

/*l'instruction CONTINUE */
/*elle permet d'ignorer l'iteraion actuelle de la boucle de et de passer  l'iteration suivante
syntaxe:
boucle(){
	......
	continue;
	......
}
......

*/

/*exemple : comme precedamment*/
/*
printf("veiller entrer 8 nombres entiers positifs :\n");
int n, i, s;
s = 0;
for (i = 1; i <= 8; i++) {
	printf("entrer le nombre %d :\n", i);
	scanf_s("%d", &n);
	if (n < 0)
		continue;
	s = s + n;
	printf(" les somme des nombres positifs est de : %d", s);
}
*/

/*l'instruction GOTO :*/
/*elle permet de se repsitionner sur une autre section de code a executer
introduite par une etiquette au lieu de poursuivre une execution sequentielle*/

/*EXEMPLE*/
/*
int n;
debut:
printf("veiller entrer un nomre compris entr 1 et 5 :\n");
scanf_s("%d", &n);
if (n < 1 || n>5)
	goto debut;
printf("la valeure entree est bien compri entre 1 et 5");

*/



/*on va essayer d'aider notre prof d'unversite qui veut stockser la note de ses etudiants qui sont
au nombre  de 312*/
/*
int i,n;
for (i = 1; i <= 5; i++) {
	printf("veiller entrer la note de l'etudiant numero %d : ", i);
	scanf_s("%d", &n);
}

*/


/*LES TABLEAUX :*/
/*un tableau permet de stocker plusieurs valeures dans une seules variale
 c'est une variable qui peut contenir plusieurs valeures et chaque valeures est stocke dans une 
 case du tableau 
 on peut creer un tableu qui va contenir des nombres de type entier
 on peut aussi creer un tableau qui peut contenir des elements de type caractere
mais on peut pas creer un tableau qui contient les deux en meme temp ou de type differents 
chaque case du tableau est identifiee par un indice la premiere case a toujours comme indice 0    et ainsi de suite
par la suite on verra comment :
declarer un tableau 
initialiser un tableau
acceder a un element du tableau
afficher les elements
remplir un tableau

declaration d'un tableau
syntaxe:
        type nom_TAB[TAILLE]  
exemple:
		float note[15];   //declaration d'un tableau de 15 elements de type float




declaration et initialisation en meme temps d'un tableau
il y'a deux methodes

METHODE 1 :
		syntaxe 1 :
					type nom_tab[n]={val1,val2,val3,valn};  dans ce cas la taille du tableau est fixe a n

METHODE 2 :
		syntaxe 2 :
					type nom_tab[]={val1,val2,val3,val n};   dans ce cas la taille du tableau est deduite du nombre de valeurs entrees

METHODE 3 :
		syntaxe 3 :
					type nom_tab[TAILLE]={val1,val2,val3,valn};   dans ce cas la taille du tableau est fixe a TAILLE et si le nombre de valeurs entrees est inferieur a TAILLE ,les cases restantes seront initialisee a zero

METHODE 4 :
		syntaxe 4 :
					type nom_tab[TAILLE]={0};   dans ce cas la taille du tableau est fixe a TAILLE et toutes les cases seront initialisee a zero


ACCEDER A UN ELEMENT DU TABLEAU


syntaxe d'affectation : nom_tab[indice]=valeur; exemple : note[0]=15.5;   il va inserer cette note dans la premiere case 
syntaxe de lecture : scanf_s("%..",&nom_tab[indice]); exemple : scanf_s("%f",&note[0]); il va demander a l'utilisateur d'entrer la note du premier etudiant
syntaxe d'ecriture :printf("%..",nom_tab[indie]); exemple : printf("%f",note[0]); va afficher la note de cette case 




REMPLIR UN TABLEAU :

par la syntaxe d'affectation:
T[0]=6
T[1]=T[0]-4
T[2]=T[0]*T[1]
......

par la syntaxe de l'ecture :
scanf_s("%..",&nom_tab[indice]) par contre pour remplir tout le tableau on peut utiliser une boucle
for(i=0;i<=5;i++){
	scanf_s("%..",&t[i]);
}

syntaxe de lecture :
for(i=0;i<5;i++){
	printf("%..",t[i]);

}
*/
	
/*EXERCICE :*/
/*
float note[5];
int i;
float m ,s;
s = 0;
for (i = 1; i < 5; i++) {
	printf("entrer la note de l'etudiant numero  %d :\n", i);
	scanf_s("%f", &note[i]);
}
for (i = 1; i < 5; i++) {
	s = s + note[i];
	m = s / 5;
}
printf("la somme des notes de la classe est : %..2f \n", s);
printf("la moyenne de votre classe est : %.2f", m);

*/

/*LES FONCTIONS*/

/*une fonction est une suite d'instruction regroupe sous un nom,elle prend en entree 
des parametres et retourne des resultats 
une foction est ecrite separement  du corps de programme principal(main) et sera 
appelee par celui-ci en cas de besion 
type_retour nom_fonction(type arg1,type arg2....){
		instruction1;
		instruction2;
		.....;
		return result;     }

LES 4 TYPES DE DECLARATION D'UNE FONCTION

1___pas de retour et pas d'argument:

void nom_foction(){
	instruction;
	.....;  }

2____pas de retour avec arguments :

void nom_fonction(type arg1,....){
	instruction;  }

3_____avec retouret et pas d'arguments :

type_retour nom_fonction(){
	instruction;
	return result;  }

4______avec retour et avce arguments :

type retour  nom_foction(type arg1,...){
	instruction;
	return result;    }


EXEMPLE : fonction puissance 

___pas de retour et avec argument

void puissance(int N ){
int P;
P=N*N;
printf("la puissance de %d est : %d", N,P);    }

____avec retour et avec arguments

int puissance(int N){
	int P;
	P=N*N;
	returnP;      }



COMMENT APPELER UNE FONCTON :

il y'a egalement 4 maniere d'appeler une fonction selon son type de declaration

____pas de retour et pas d'argument :
nom_fonc();

____pas de retour et avec arguments :
nom_fonc(arg1,arg2,..);

____avec retour et pas d'argument :
x=nom_fonc(); ou printf(nom_fonc());

____avec retour et avec argument :
x=nom_fonc(arg1,arg2,..); ou printf(nom_fonc(arg1,arg2,..));

*/

/*

#include <stdio.h>

// Déclaration de la fonction avant main
void puissance(int n);

int main() {
	int n;
	printf("Veuillez entrer la valeur de n :\n");
	scanf_s("%d", &n);  // scanf_s est spécifique à MSVC, scanf suffit ici
	puissance(n);
	return 0;
}

// Définition de la fonction avec un argument
void puissance(int n) {
	int p = n * n;
	printf("La puissance de %d est : %d\n", n, p);
}

*/


/*

#include <stdio.h>
void multiplication(int m);

int main() {
	int n, m;
	printf("veiller entrer la valeur de n : ");
	scanf_s("%d",& n);
	printf("veiller entrer la valeur de m : ");
	scanf_s("%d",& m);
	multiplication(n);
	return 0;
}

void multiplication(int m){
    int n, r;
    printf("veiller entrer la valeur de n pour la multiplication : ");
    scanf_s("%d", &n);
    r = n * m;
    printf("%d", r);
}*/

/*une variable declare localement dans une fonction n'est diaponible qu'a l'interieur de cette fonction
par contre s'il est declare globalement, il au debut du programme, elle est disponible a toutes les fonctions du programme*/



/*exercice sur les fonctions : TROIS MANIERES DE DECLARER UNE FONCTION AVEC DES VARIABLES LOCAUX */

/*
#include <stdio.h>
void signe(int A, int B) {
	if (A > 0 and B > 0 or A * B > 0)
		printf("les neombres A et B on le meme signe\n");
	else
		printf("les neombres A et B n'ont pas la meme signe\n");
}
void egalite(int A, int B) {
								if (A = B)
										printf("les nombres A et B sont egal");
								else 
										printf("les nombres A et B ne sont pas egal");
}


int maximum(int A, int B) {
	int max;
								if (A > B)
										max= A;
								else
										max = B;
	return max;
	}
int minimum(int A, int B) {
	int min;
								if (A > B)
									return B;
								else
									return A;
	
}


int main() {
	int A, B, min, max ;
	printf("veiller entrer la valeure de A : \n");
	scanf_s("%d", &A);
	printf("veiller entrer la valeure de B : \n");
	scanf_s("%d", &B);
	signe(A, B);
	min = minimum(A,B);
	printf("le minium est %d \n", min);
	max = maximum(A, B);
	printf("le maximum est % d\n", max);
	egalite(A, B);

	return 0;
}


*/



/*exercice sur les fonctions : TROIS MANIERES DE DECLARER UNE FONCTION AVEC DES VARIABLES GLOBALES*/

/*
#include <stdio.h>
int A, B;
 
 void saisie () {
	 printf("veiller entrer la valeure de A : \n");
	 scanf_s("%d", &A);
	 printf("veiller entrer la valeure de B : \n");
	 scanf_s("%d", &B);
 }



void signe() {
	if (A > 0 and B > 0 or A * B > 0)
		printf("les neombres A et B on le meme signe\n");
	else
		printf("les neombres A et B n'ont pas la meme signe\n");
}
void egalite() {
	if (A != B)
		printf("les nombres A et B ne sont pas egal");
	else
		printf("les nombres A et B sont egal");
}
int maximum() {
	int max;
	if (A > B)
		max = A;
	else
		max = B;
	return max;
}
int minimum() {
	int min;
	if (A > B)
		return B;
	else
		return A;

}
int main() {

	int min, max;
	saisie();
	signe();
	egalite();
	printf("le minium est %d\n", minimum());
	printf("le maximum est % d\n", maximum());

	int min, max;
	saisie();
	signe();
	egalite();
	printf("le minium est %d\n", minimum());
	printf("le maximum est % d\n", maximum());

	notre programme est compose de sous programmes appelés fonctions.

	return 0;
}*/

/*algorithme de conversion de nombres de base 10 en base 2
#include <stdio.h>
int main() {

int i,q,r;
printf("veiller entrer la valeur de q : ");
scanf_s("%d",&q);
while (q > 0);
r = q % 2;
	q = q / 2;
	printf("%d", r); 
	return 0;
}

*/

/* algorithme de conversion de nombres de base 10 en base 2*/
/*
#include <stdio.h>
int main() {
		
	int i, q, r;
	printf("veiller entrer la valeur de q : ");
	scanf_s("%d", &q);

	do {
		i = 0;
		r = q % 2;
		q = q / 2;
		printf("%d", r);
	} while (q > 0);

*/

/* LES POINTEURS EN C .*/

/*au debut des annees 1980 a 1990,l'une des raisons d'utilisation des pionteurs permettait d'economiser la memoire RAM de l'ordinateur
lorsequ'on execute un programme ,le programme s'execute dans la memoire RAM de l'ordinateur
en definition, un pointeur est une variable qui contient l'adresse d'une autre variable ou d'une zone de memoire 
le specificateur de format pour les pointeurs est %p
il y'a deux types d'operations sur les pionteurs:
& : pour obtenir l'aderesse d'ne variable 
* : pour accdrder au contenue  d'une adresse
pour afficher l'adresse d'un pointeur on utilise %p 
pour afficher le contenu d'un pointeur on utilise %d 
*/

/*
#include <stdio.h>
int main() {

	
	int a = 5;
	int*p;    ou int *p = &a creation d'un pointeur
	p = &a;
	printf("%d\n", a);    ceci affiche la valeur de a 
	printf("%d\n", *p);   ceci affiche la valeur de a en utilisant le pointeur p 
	printf("%p\n", &a);   ceci affiche l'adresse de a 
	printf("%p\n", p);    ceci affiche l'adresse de a en utilisant le pointeur p 
	printf("%p\n", &p);   ceci affiche l'adresse de p 
	int *q = &a;
	*q = *p - a;
	printf("%d\n", a);
	printf("%p\n", *p);
	printf("%p\n", *q);



	Exercice 1 : Donner les valeurs des variables après chaque instruction:

Instruction					|A		|B		|C		|*P1		|*P2      |
Initialisation				|	1	|	1	|	3	|	-		|   -	  |		
P1= &A ;					|		|		|		|			|		  |			
P2=&C;						|		|		|		|			|		  |			
*P1=(*P2)++;				|		|		|		|			|		  |	
P1=P2;						|		|		|	    |			|		  |			
P2= &B;						|		|		|		|			|		  |	  					
*P1 -=* P2;					|		|		|		|			|		  |	
++*P2;						|		|		|		|			|		  |		
*P1 *=* P2;					|		|		|		|			|		  |					
A=++*P2 ** P1;				|		|		|		|			|		  |							
P1= &A;						|		|		|		|			|		  |				
*P2 =* P1/ =* P2;			|		|		|		|			|		  |			





	return 0;
}
*/


/*Passage par valeur vs Passage par référence*/

/*
· Dans le passage par valeur, une copie des arguments réels est
transmise aux arguments formels respectifs.
· Dans le passage par référence, l'emplacement (adresse) des
arguments réels est transmis à des arguments formels, toute
modification apportée aux arguments formels se reflétera
également dans les arguments réels.

Exerace 2
Ecrire un programme contenant une fonction qui permet de déterminer le
maximum des deux valeurs saisies par l'utilisateur (Penser à utiliser le
passage par adresse(reference)).




#include <stdio.h>
void minimum(int* x, int* y, int* min) {
	if (*x < *y)
		*min = *x;
	else
		*min = *y;

}

int main() {
	int x, y ,min;
	printf("entrer la valeure de X : ");
	scanf_s("%d", &x);
	printf("entrer la valeure de Y : ");
	scanf_s("%d", &y);
	minimum(&x, &y, &min);
	printf("le minimum est :%d", min);
	return 0;
}
*/

/*POINTEUR-TABLEAU*/
/*le nom d'un tableau represente l'adresse de son premier element
EXEMPLE: 1
int t[5]={3,-6,14,8,24}
printf("%d",t[0]);      ---> on aura  : 3
printf("%p",t);          ---> on aura : adresse de 3
printf("%d",&t[0]);      ---> on aura : adresse de 3
printf("%d",*t);          ---> on aura 3
EXEMPLE : 2
int t[5]={3,5,7,15,75}
int*p
p=t   ou p=&t[0]
printf("%d",t[0])  ---> on aura  : 3
printf("%d",*p)    ---> on aura  : 3
p++;
printf("%d",*p)    ---> on aura  : 5
p=p+3;
printf("%d",*p)    ---> on aura  : 75

en resume :
T : l'adresse de t[0]
T+1 : l'adresse de T[i]
*(T+i) : le contenu de T[i]
p :vpointe sur T[0]
p+i :pionte sur T[i]
*(p+i) : le ccontenue de T[i]
*/

/*
NB : 
LA FONCTION sizeof():
elle permet de renvoyer la taille en octe du type 
ou d'un variable
exemple 

#include <stdio.h>
int main() {
	int t[5]{ 8,3,4,7, };
	printf("%d",sizeof(t[0]) );
	return 0;
}
*/

/*L'ARITHMETIQUE DES POINTEURS*/
/*toutes le operations avec des pionteurs prennent autolatiquement
en compte e type et la valeure des objets piontes
on a :
l'incrementation ++
la decrementation --
l'addition +
la soustraction -
la comparaison <,<=,>=,>,!=

INCREMENTATION : 

#include <stdio.h>
int main() {
int t[5]{ 8,3,4,7, };
int *p ;
p = t ;
p ++ ;
printf("%d\n",*p); ceci affiche 3
printf("%d\n", *(p++)); apres execution il affiche 3 mais pionte sur 4
printf("%d\n", *p);
return 0 ;}



DECREMENTATION :

#include <stdio.h>
int main() {
int t[5]{ 8,3,4,7, };
int* p = t;
p ++ ;
printf("%d\n",*(++p));
p--;
printf("%d\n", *p);
return 0 ;
}


ADDITION :
#include <stdio.h>
int main() {
int t[5]{ 8,3,4,7, };
 int *p=t;
 printf("%p",p+3);  ceci affiche l'adresse memoire du variable
 printf("%d",*(p+3)); cece affiche 7

return 0 ;
}


SOUSTRACTION :

entre un pointeur et une valeur

#include <stdio.h>
int main (){
int t[8]{ 1,2,3,4,5,6,7,8 };
int *p=t;
int* q = &t[4];
printf("%d",*p);
printf("%d", *(q - 2));


entre deux pointeurs 
#include <stdio.h>
int main() {
	int t[8]{ 1,2,3,4,5,6,7,8 };
	int* p = &t[2];
	int* q = &t[4];
	printf("%d\n", (q-p));
	printf("%p", (q - p));
return 0;
}


COMPARAISON :
la comparaison de deux pointeurs qui pointent sur un meme tableau 
est equivalent a la comaraison des indices de correspondantes .

#include <stdio.h>
int main() {
	int t[8]{ 1,2,3,4,5,6,7,8 };
	int* p = &t[2];
	int* q = &t[4];
	printf("%d\n", q == p);
	printf("%d", q > p);
	return 0;}
*/
/*REMPLIR UN TABLEAU AVEC LES POINTEURS */
/*
#include <stdio.h>
int main() {
	int t[4]{};
	int* p = t;
	for (p = t; p < t + 4; p++) {
		scanf_s("%d", p);
	}
	int s = 0;
	for (p = t; p < t + 4; p++) {
		s = s + *p;
		printf("%d", s);
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main() {
	int t[4]{};
	int* p = t;
	for (p = t; p < t + 4; p++) {
		scanf_s("%d", p);
	}
	int min;
	min=*t;
	for (p = t; p < t + 4; p++) {
		if (min > *p)
			min = *p;
	}

	printf("le min du tableau est : %d", min);
	return 0;

}
*/
//autre methode de remplir un tableau
/*#include<stdio.h>
int main() {
	int t[5];
	int i;
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&t[i]);
	}

	return 0;
}
*/


/*CHAINE DE CARACTERER*/
/*en C , les valeur d'un chaine de caractere sont stocke dans un tableau
et a la fin du tableau s'ajoute a la fin une case contenant
un caractere nul : \0 pour monterer que le texte s'arrete 
avant cette derniere case 
on verra par la suite : 
LA DECLARATION
AFFICHAGE ET ECRITURE
FONCTION SUR LES CHAINES


___DECLARATION ET INITIALISATION
il exste plusieurs maniers de declaration :

char chaine[6]={'h','e','l','l','o','\0'}
char chaine[9]={'h','e','l','l','o','\0'} ici les case restantes seron remplis oar des \0
char chaine[]={'h','e','l','l','o','\0'}
char chaine[6]="hello"
char chaine[8]="hello"
char chaine[]="hello"


____AFFECTATION :
faut noter que chaine point sur la premiere case
char chaine[]="hello"
chaine[4]='n'
chaine[4]='n'  : impossible on utilise les '' simples
chaine[6]='n'  : ceci est impossible car il n'existe pas de case 6


____chaine de caractere constante
c'est une chaine declare avec un pointeur et il 
n'est pas modifiable
___declaration :
					char*chaine="hello";
					OU
					char*chaine;
					chaine = "hello"

____AFFICHAGE 
EXEMPLE
char nom[]="Ali"
on peut utiliser :
printf("%c",nom[1]);  : mais cela affiche unquement le contenu d'une case
pour afficher le contenu complet,on utilise :
printf("%s",c)
___ECRITURE (demaner a l'utilisateur de saisir un
texte et de le recuperer)
EXEMPLE :
char nom [10];
printf("entrer votre nom ");
scanf_s("%s",c)
danc ce cas , si je tape mohamed diop, le programme ne recupere
que mohamed car il ne reconnait pas l'espace et apres celui ci ,
il va affecter tout les cases restante par \0
pour resoudre ce probleme , on utilise : 

gets();

on aura:
EXEMPLE :
char nom [10];
printf("entrer votre nom ");
gest();
printf("%s",c)
printf("%.3s",c) avec le ".3", le programme affiche 
les trois premieres caracteres
 
 pourafficher tout le contenu, on utilise la fonction :
 puts();


 ____FONCTION SUR LES CHAINE
 on importe la bibliotheque : #include <string.h>
 on a plusieurs fonctions dedans :
 
 __strlen() : il permet de renvoyer la longueure d'un chaine sauf le 
 caractere nul

 __strcpy() : il permet de copier une chaine dans une autre ycompris le caractere nul

 #include <string.h>
char c [] ="Ali";
char d [10];
strcpy (d,c); il copy c danc d
puts (d);

__strnpcy() : il permet de copier n caractere dune chaine a l'interieur d'une autre
#include <string.h>
char c [] = "Ali";
char d [10] ="Amine";
strncat (d,c,2);
puts (d);  il affiche : Amine Al

__strcmp() : La fonction strcmp() permet de comparer 2
chaînes deux chaînes caractère par
caractère. Elle retourne :

 __ zero (0)  
 Si les deux chaînes sont identiques

 __négatif        
Si la valeur ASCII du premier caractère
de la première chaîne est inférieure à
celle de la deuxième chaîne.
 __positif
Si la valeur ASCII du premier caractère
de la première chaîne est supérieure à
celle de la deuxième chaîne.

nb si les deux premiers caracteres sont identique il compare les caracteres suivants

exemple :
#include <string.h>
char a [] ="Ali";
char b [] = "Ali";
char c [] = "ali";
char d []="Amine";
printf ("%d", strcmp (a,b));  : on aura 0
printf ("%d", strcmp (a,c));  : on aura -1 car  : A = 65 et a = 97
printf ("%d", strcmp (d, a));  : on aura 1  car  : m  109 et l = 108


__strchr() : La fonction strchr () permet de rechercher
la 1ère occurrence du caractère dans
chaine. Elle renvoie l'adresse sur la case de
chaine contenant le caractère s'il existe,
NULL sinon


#include <string.h>
char a [] ="Hello World";
printf ("%s", strchr ( a,owo) ) ;  on aura : World

__strrchr() : Elle est similaire à la fonction strchr, la seule
différence est qu'elle recherche la chaîne
dans l'ordre inverse.
#include <string.h>
char a []= "Hello World";
printf ("%s", strrchr (a,[));  il affiche : ld
char *b = strrchr ( a, 'o');
printf ("%s", b);  il affiche : orld
 
 ___strstr() : Elle est similaire à strchr, sauf qu'elle
recherche une chaîne au lieu d'un seul
caractère.

 #include <string.h>
char a [] ="Hello World";
printf ("%s", strstr ( a,0));  on aurra : lo World

__ strrev() : 
La fonction strrev() permet de renvoyer
l'inverse d'une chaîne de caractères

#include <string.h> 
char a [] ="Ali";
printf ("%s", strrev (a));  on aura : ilA

__ strlwr() : La fonction strlwr() permet de renvoyer les
caractères d'une chaîne en minuscules.

#include <string.h>
char a [] = "Ali";
printf ("%s", strlwr(a));  on aura : ali

__strupr() : La fonction strupr() permet de renvoyer les
caractères d'une chaîne en majuscules.

#include <string.h>
char a [] = "Ali";
printf ("%s", strupr(a)); on aur : ALI

__strcat(): La fonction strncat() permet d'ajouter n
caractères d'une chaîne à la fin de d'une
autre chaine

#include <string.h>
char c [] = "Ali";
char d [10] ="Amine";
strncat (d,c,2);
puts (d); on aura :Amine Al



*/

























































/*
#include <stdio.h>
int main() {

	printf("hello aissatou!\nbientot vous aurez votre premier enfent.\nmaintenant il y'a deux possibilites : soit il sera de sexe masculin ou feminin \nlon vous quel est le genre dont vous souhaiterez avoir M OU F ?");
	char choice, m, M, F, f, name;
	scanf_s("%c", choice);
	if (choice == m or choice == M) {
		printf("donc vous souhaitez avoir un petit garcon , geial");
		printf("veiller dans ce cas lui donner un nom prevu");
		scanf_s("%c", name);
}


		return;
}

*/




















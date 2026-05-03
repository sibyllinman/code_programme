
/*#include <stdio.h>
#include <math.h>
int main() {
	
	float x1,x2, y1,y2,v;
	printf("ENTRER LA VALEUR DE X de A  :");
	scanf_s("%f", &x1);
	printf("ENTRER LA VALEUR DE X de B  :");
	scanf_s("%f", &x2);
	printf("ENTRER LA VALEUR DE y de A :");
	scanf_s("%f", &y1);
	printf("ENTRER LA VALEUR DE y de B:");
	scanf_s("%f", &y2);
	v = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("la distansce entre A et B est : %.2f",v);






return 0;
}


# include <stdio.h>
# include <math.h>
int main() {
	float r1, r2, r3, rt ;
	int type;
	printf("notre programme permet de calculer la resistance \n totale d'une circuit possedant 3 resistors\n");
	printf("entrer la valeur du resistance 1 :");
	scanf_s("%f",&r1);
	printf("entrer la valeur du resistance 2 :");
	scanf_s("%f", &r2);
	printf("entrer la valeur du resistance 3 :");
	scanf_s("%f", &r3);
	printf ("quel type de branchemment avons nous ? : \n1_PARALLELE\n2_SERIE\n");
	scanf_s("%d", &type);
	if (type == 2) {
		rt = r1 + r2 + r3;
	} else {
		rt = (r1 * r2 * r3) / (r1 * r2 + r1 * r3 + r2 * r3);
	}
	printf("\nla resistance totale et :%.2f ", rt,"volt");


return 0;
}

*/
# include <stdio.h>
# include <math.h>
int main() {
	float a, b;
	printf("entrer la valeur de a :");
	scanf_s("%f", &a);
	printf("entrer la valeur de b :");
	scanf_s("%f", &b);
	if (a * b > 0) {
		printf("LES DEUX VALEURS ENTRES SONT DE MEME SIGNE")
	}
else {
		printf("LES DEUX VALEURS ENTRES SONT DE MEME SIGNE")
	}

	




	return 0;


}
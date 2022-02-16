#include <stdio.h>
#include "functions.h"

int get_base(){
	int base;
	printf("Introdueix la base: ");
	scanf("%d",&base);
	return base;
}
int get_exp(){
	int exp;
	printf("Introdueix el exponent: ");
	scanf("%d",&exp);
	return exp;
}
void algor(int base, int exp){
	int aux = base;
	for (int i=0; i<exp-1; i++){
		base = aux * base;
	}
	printf("El número %d elevat a %d és %d",aux,exp,base);
}

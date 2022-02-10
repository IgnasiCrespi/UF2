#include <stdio.h>
#include "functions.h"


void main(){
	int num;
	printf("Introdueix un número entre el 10 i el 5000: ");
	scanf("%d",&num);
	num = validate(num);
	printf("Número introduït correctament");
}

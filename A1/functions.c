#include <stdio.h>
#include "functions.h"


int validate(int num){
	int i = 1;
	do{
		printf("Número no vàlid! Intent %d\n",i);
		printf("Introdueix un número entre el 10 i el 5000: ");
		scanf("%d",&num);
		i=i+1;
		if (i==4){
			printf("Has superat el número d'intents.");
			exit(-0);
		}
	}while (num < 10 || num > 5000);
	return num;
}



#include <stdio.h>
#include "functions.h"

int validate(){
    int num;
    do{
   	 printf("Quants registres vols introduir?\n");
   	 scanf("%d", &num);
    }while(num<1);
    return num;
}

void modifyData(struct office *o,int size){ //punter a office
    for(int i=0; i<size;i++){
   	 printf("Introdueix el nom de l'oficina: \n");
   	 scanf("%s",o[i].name);
   	 printf("Introdueix el carrer de l'oficina: \n");
   	 scanf("%s",o[i].addr.street);
   	 printf("Introdueix la ciutat de l'oficina: \n");
   	 scanf("%s",o[i].addr.city);
   	 printf("Introdueix el codi postal de l'oficina: \n");
   	 scanf("%s",o[i].addr.postalCode);
   	 printf("Introdueix el nombre de treballadors a l'oficina: \n");
   	 scanf("%d",&o[i].workers);
    }
}

void printData(struct office *o, int size){
    printf("------------------------------------------------\n");
    for(int i=0; i<size; i++){
    	printf("Aquestes són les dades de l'oficina: [%d]\n", i+1);
    	printf("Nom de l'oficina: %s\n", o[i].name);
    	printf("Carrer de l'oficina: %s\n", o[i].addr.street);
    	printf("Ciutat de l'oficina: %s\n", o[i].addr.city);
    	printf("Codi postal de l'oficina: %s\n", o[i].addr.postalCode);
    	printf("Nombre de trebalaldors a l'oficina: %d\n", o[i].workers);
    	printf("------------------------------------------------\n");
    }
}

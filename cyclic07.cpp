//objetivo: que imprima el promedio de 15 números leídos. 
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>

int main(){

//variables
int i;
float promedio,numero,suma;

//valor suma
suma=0;

//datos
for(i=1;i<=15;i++){
	printf("%d. teclea un valor: ",i);
	scanf("%d",&numero);
	//suma
	suma=suma+numero;
}

//promedio
promedio=suma/15;

//resultado
printf("promedio= %f",promedio);
}

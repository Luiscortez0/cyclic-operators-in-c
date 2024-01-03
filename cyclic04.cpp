//objetivo: que imprima todos los divisores enteros positivos de un número leído.
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>

int main(){

//declarar variables
int i,numero;

//leer datos
printf("ingresa un numero: ");
scanf("%d",&numero);

//ciclo
for(i=1;i<=numero/2;i++){
	if(numero%i==0){
		printf("%d\n",i);
	}
}
printf("%d\n",numero);
}

//objetivo: que imprima la sumatoria de los primeros 200 números enteros pares positivos. 
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>

int main(){

//declarar variables
int i,suma,par;

//valor de suma
suma=0;

//ciclo
for(i=1;i<=200;i++){
	//obtener el par a sumar
	par=i*2;
	
	//acumular sumatoria
	suma=suma+par;
}

//imprimir la sumatoria
printf("sumaria= %d",suma);
}

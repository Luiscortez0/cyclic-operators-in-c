//objetivo: que imprima los primeros 20 múltiplos de las primeras 20 tablas de multiplicar.
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

//variables
int i,j;

//ciclo
for(i=1;i<=20;i++){
	//borrar pantalla
	system("cls");
	//tablas
	for(j=1;j<=20;j++){
		printf("%d*%d=%d\n",i,j,i*j);
	}
printf("presiona una tecla para continuar...");
getch();
}
}

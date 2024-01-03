//objetivo: que imprima los primeros 100 números naturales utilizando DO-WHILE.
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>

int main(){

//declarar variables
int i;

//valor de i
i=1;

//ciclo
do{
	printf("%d\n",i++);
}while (i<=100);
}

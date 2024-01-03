//objetivo: que imprima los primeros N elementos de la serie de Fibonacci.
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>
#include <iostream>

int main(){

//variables
int i,n,x=0,y=1,z=1;

//valor de n
printf("digite el numero de elementos: ");
scanf("%d",&n);
printf("1\n");
//ciclo
for(i=1;i<n;i++){
	z=x+y;
	printf("%d\n",z);
	x=y;
	y=z;
}
printf("\n");
}

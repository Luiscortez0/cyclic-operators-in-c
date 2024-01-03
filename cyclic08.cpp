//objetivo: que imprima el promedio de 15 números leídos. 
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>

int main(){

//variables
int i,n,fac;

//entrada
printf("teclear un valor: ");
scanf("%d",&n);

//valor fac
fac=1;

//operacion
for(i=1;i<=n;i++){
	//acumular
	fac=fac*i;
}

//resultado
printf("factorial= %d",fac);
}

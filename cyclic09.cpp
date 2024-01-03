//objetivo: que lea un número e indique si es número primo o no.
//autor: luis carlos cortez guzman
//fecha: 01/12/2021

#include <stdio.h>

int main(){

//variables
int i,n,residuo,primosi;

//entrada
printf("ingresa un valor: ");
scanf("%d",&n);

//valor primosi
primosi=1;

//dividir n desde 1 hasta n
for(i=2;i<=(n-1);i++){
	residuo=n%i;
	if(residuo==0);
	primosi=0;
}

//condicionar
if(primosi==1){
	printf("valor primo");
}else{
	printf("valor no primo");
}
}

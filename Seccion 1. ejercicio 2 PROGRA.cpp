/* Problema 2: En un videoclub se ofrece la promoción de llevarse tres películas
 por el precio de las dos más baratas. Haga un programa que, dados los 
 tres precios de las películas, determine la cantidad a pagar.
Restricciones: Debe utilizar una estructura de control si-entonces-sino.*/
#include<iostream>
using namespace std;
int main(){
	
	double precio1, precio2, precio3, cantapagar;
	
	cout<<"Ingrese el primer precio: "; cin>>precio1;
	cout<<"Ingrese el segundo precio: "; cin>>precio2;	
	cout<<"Ingrese el tercer precio: "; cin>>precio3;
	
    if(precio1>=precio2 && precio1>=precio3){
    	cantapagar = precio2 + precio3;
	}
	else if(precio2>=precio1 && precio2>=precio3){
		cantapagar = precio1 + precio3;
	}
	else if(precio3>=precio1 && precio3>=precio2){
		cantapagar = precio1 + precio2;
	}
	cout<<"La cantidad a pagar por las 3 peliculas es "<<cantapagar;
	return 0;
}


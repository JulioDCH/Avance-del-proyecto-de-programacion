#include<iostream>
#include<math.h>
using namespace std;
double res(int opc, int i, int n);   
double sumatoria1(int i, int n);
double sumatoria2(int i, int n);
double sumatoria3(int i, int n);
double productoria(int i, int n);
int main(){
	int i,n,opc;
	double resultado;
	cout<<"\n   Menu de Opciones: \n";
	cout<<"\n1.Hallar la sumatoria 1 ";
	cout<<"\n2.Hallar la sumatoria 2  ";
	cout<<"\n3.Hallar la sumatoria 3 ";
	cout<<"\n4.Hallar la productoria ";
	cout<<"\n\nSeleccione una opcion: "; cin>>opc;
    
	cout<<"\nIngrese el valor de i: "; cin>>i;
    cout<<"\nIngrese el valor de n: "; cin>>n;
    
    resultado = res(opc, i, n);
    cout<<"El resultado es: "<<resultado;
    
	return 0;
}
double res(int opc, int i, int n){
	switch(opc){
		case 1: 
		sumatoria1(i,n);
		break;
		case 2:
		sumatoria2(i,n);
		break;
		case 3:
		sumatoria3(i,n);
		break;
		case 4:
	    productoria(i,n);
		break;
		default:
		break;		
	}
}

double sumatoria1(int i, int n){
	double suma=0, m;
	for(i;i<=n;i++){
		m=sqrt((pow(i,2)-4));
		if(i>=2){
			suma=suma + m;
		}
	}
	return suma;
}
double sumatoria2(int i, int n){
	double suma=0, p;
	for(i;i<=n;i++){
		p= (pow(2,i+1) - pow(2,i))/(i+1);
		if(i!=-1){
			suma=suma + p;
		}
	}
	return suma;
}
double sumatoria3(int i, int n){
	double suma=0, q;
	for(i;i<=n;i++){
		q= pow(-1,(i+1)*(i/pow(2,i)));
		suma=suma + q;
	}
	return suma;
}
double productoria(int i, int n){
	double producto=1, r;
	for(i;i<=n;i++){
		r= i* (i+1);
		producto= producto*r;
	}
	return producto;
}

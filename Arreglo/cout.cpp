#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#define E 5
typedef int entero;
using namespace std;
void encerar(entero *,int n);
void ingresar(entero *,int n);
void procesar(entero *, int n);
void imprimir(entero *,int n);
void maximoComunDivisor(entero *,int n, int *mcd);


int main(int argc, char *argv[])
{
	int n,r;
 
	cout<<"Ingrese la cantidad de numeros"<<endl;
	cin >> n;
	int *v= new int [n];
	encerar(v,n);
	imprimir(v,n);
	system("pause");
	ingresar(v,n);
	imprimir(v,n);
	system("pause");
	procesar(v,n);
	imprimir(v,n);
    maximoComunDivisor(v,n,&r);
    cout << r<< endl;
	free(v);
	system("pause");
	return 0;
}

//desarrollo de la funsión encerar
void encerar(entero *v,int n){
	for(entero i=0;i<n;i++){
			*(v++)=0;
	}
}

//desarrollo de la funsión
void ingresar(entero *v,int n){
	entero val;
	for(entero i=0;i<n;i++){
		cout<<"Valor "<<i+1<<endl;
		cin >> *(v+i);
	}
}

//desarrollo de la funsión
void procesar(entero *v, int n){
	for(entero i=0;i<n;i++){
  		*v=(*(&(*v)))*E;
  		*(v++);
		//v[i]=v[i]*E;
	}
}

//desarrollo de la funsión
void imprimir(entero *v,int n){
	for(entero i=0;i<n;i++){
	
	cout<<*(v+i)<<", ";
}
}

//desarrollo de la funsión
void maximoComunDivisor(entero *v,int n,int *mcd){
		int residuo;
		for (entero i=0; i<n; i++) {
		*v;
		if (n == 1) {
			*mcd = *v;
 
		} else {
			
			do {
				residuo = *mcd % *v;
				*mcd = *v;
				*v = residuo;
				
			} while (residuo != 0);
		}
		*(v+1);
	}
}

/***********************************************************************
 * Module:  Arreglo.cpp
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 0:45:22
 * Purpose: Implementation of the class Arreglo
 ***********************************************************************/

#include "Arreglo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::encerar(int entero_v, int n)
// Purpose:    Implementation of Arreglo::encerar()
// Parameters:
// - entero_v
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::encerar(int *v, int n)
{
   	for(entero i=0;i<n;i++){
			*(v++)=0;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::ingresar(int entero__, int n)
// Purpose:    Implementation of Arreglo::ingresar()
// Parameters:
// - entero__
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::ingresar(int *v, int n)
{
   	entero val;
	for(entero i=0;i<n;i++){
		cout<<"Valor "<<i+1<<endl;
		cin >> *(v+i);
		//cin>>v[i];
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::imprimir(int entero__, int n)
// Purpose:    Implementation of Arreglo::imprimir()
// Parameters:
// - entero__
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::imprimir(int *v, int n)
{
   	for(entero i=0;i<n;i++){
	
	cout<<*(v+i)<<", ";
}
	//*(v++);
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::mcd(int entero__, int n)
// Purpose:    Implementation of Arreglo::mcd()
// Parameters:
// - entero__
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Arreglo::mcdint *v, int n)
{
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

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::mcm(int entero__, int n)
// Purpose:    Implementation of Arreglo::mcm()
// Parameters:
// - entero__
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Arreglo::mcm(int entero__, int n)
{
   // TODO : implement
}

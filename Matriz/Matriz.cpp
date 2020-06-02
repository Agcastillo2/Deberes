/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 8:29:31
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::encerar(int matrix_, int n)
// Purpose:    Implementation of Matriz::encerar()
// Parameters:
// - matrix_
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::encerar(int **matriz, int n)
{
    int i, j;
    for(i=0;i<dim;i++)
        for(j=0;j<dim;j++)
            *(*(matriz+i)+j)=0;
    return;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::imprimir(int matrix___, int n)
// Purpose:    Implementation of Matriz::imprimir()
// Parameters:
// - matrix___
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::imprimir(int **matriz, int n)
{
      for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++)
		{
			printf("%d",*(*(matriz+i)+j));
			printf("%*s",j+5,"");
		}
	printf("\n");
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::ingresar(int matrix___, int n)
// Purpose:    Implementation of Matriz::ingresar()
// Parameters:
// - matrix___
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::ingresar(int **matriz, int n)
{
   for(int i=0;i<dim;i++)
		for(int j=0;j<dim;j++)
			scanf("%d",&(*(*(matriz+i)+j)));

}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::multiplicacion()
// Purpose:    Implementation of Matriz::multiplicacion()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::multiplicacion(int **mat1,int **matriz,int n, int potencia)
{
   	int **matriz1=nmatrix(n);
	int **matriz2=nmatrix(n);
	encerar(matriz2,dim);
	for(int k=1;k<=potencia;k++){
	encerar(matriz2,dim);
		if(k==1){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
						*(*(matriz1+i)+j)=*(*(mat1+i)+j);
//						*(*(matf2+i)+j)=*(*(mat1+i)+j);
				}
			}
		}
		else{
   			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					for(int h=0;h<n;h++){
						*(*(matriz1+i)+j)=*(*(matriz2+i)+j)+(*(*(matriz+i)+h))*(*(*(mat1+h)+j));
						*(*(matriz2+i)+j)=*(*(matriz1+i)+j);
						
					}
				}
			}
		}
		for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
						*(*(matriz+i)+j)=*(*(matriz1+i)+j);
				}
			}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::___matriz()
// Purpose:    Implementation of Matriz::___matriz()
// Return:     int
////////////////////////////////////////////////////////////////////////

int ** Matriz::matriz(int n)
{
   
   int **m , j;
    m =(int **)malloc(n*sizeof(int *));
    for(j=0;j<n;j++)
        *(m+j)=(int *)malloc(n*sizeof(int));
    return m;

}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <Matriz.cpp>
#include <Matriz.h>
int main()
{
	Matrix objMat;
	int d,p;
	int **mat1, **matr;
	
	printf("\nIngrese la dimension de la matriz: ");
	scanf("%d",&d);

	mat1=objMat.matrix(d);
	matr=objMat.matrix(d);
	objMat.encerar(matr,d);
	
	printf("\nIngrese los valores de la matriz: \n");
	objMat.ingresar(mat1, d);
	objMat.imprimir(mat1, d);
	printf("\n");

	printf("\nIngrese la potencia: ");
	scanf("%d",&p);
	
	objMat.multiplicacion(mat1,matr,d,p);
	objMat.imprimir(matr,d);
	system("pause");
   return 0;
}

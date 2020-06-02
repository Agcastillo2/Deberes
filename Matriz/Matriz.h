/***********************************************************************
 * Module:  Matriz.h
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 8:29:31
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h

class Matriz
{
public:
   void encerar(int **matriz, int n);
   void imprimir(int **matriz, int n);
   void ingresar(int **matriz, int n);
   int multiplicacion(int **matriz1,int **matriz2,int n, int potencia);
   int ** matriz(int n);

protected:
private:

};

#endif

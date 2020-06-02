/***********************************************************************
 * Module:  Arreglo.h
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 0:45:22
 * Purpose: Declaration of the class Arreglo
 ***********************************************************************/

#if !defined(__mcm_y_mcd_Arreglo_h)
#define __mcm_y_mcd_Arreglo_h

class Arreglo
{
public:
   void encerar(int *v, int n);
   void ingresar(int *v, int n);
   void imprimir(int *v, int n);
   int mcd(int *v, int n);
   int mcm(int *v, int n);

protected:
private:

};

#endif

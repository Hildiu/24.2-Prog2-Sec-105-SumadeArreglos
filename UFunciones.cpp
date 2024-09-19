//
// Created by mbermejo on 18/09/2024.
//

#include "UFunciones.h"

void  llenarDatos( TEntero   *pA, TEntero n)
{
   for(int indice = 0; indice<n; indice++)
       pA[indice] = rand() % 100 +1;       //---0, 1, 2,,,,99
}


void imprimir(TEntero *pA, TEntero n)
{
 for(int i=0; i<n; i++)
     cout << setw(5) << pA[i];
}

void   sumarArreglos(TEntero * pA1, TEntero *pA2, TEntero *pASuma,  TEntero n)
{
  for(int contador=0; contador<n; contador++)
      pASuma[contador] = pA1[contador]  + pA2[contador];
}
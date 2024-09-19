/*-----------------------------------------------------------------------
 * Dato de Entrada: no tiene
 * Dato de Salida: a1, a2, aSuma (son arreglos de 15 casilleros cada uno)
------------------------------------------------------------------------ */

#include "UFunciones.h"

int main()
{
  TEntero a1[MAX];
  TEntero a2[MAX];
  TEntero aSuma[MAX];

  srand(time(nullptr));
  llenarDatos(a1, MAX);
  imprimir(a1, MAX);
  llenarDatos(a2,MAX);
  cout << "\n\n";
  imprimir(a2,MAX);
  cout << "\n\nARREGLO SUMA\n\n";
  sumarArreglos(a1, a2, aSuma, MAX);
  imprimir(aSuma,MAX);
  return 0;
}

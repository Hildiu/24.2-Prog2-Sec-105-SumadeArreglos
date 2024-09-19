//
// Created by mbermejo on 18/09/2024.
//

#ifndef INC_01_PROYECTO_UFUNCIONES_H
#define INC_01_PROYECTO_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

typedef int TEntero;
const int MAX = 15;

void  llenarDatos( TEntero   *pA, TEntero n);
void imprimir(TEntero *pA, TEntero n);
void   sumarArreglos(TEntero * pA1, TEntero *pA2, TEntero *pASuma,  TEntero n);

#endif //INC_01_PROYECTO_UFUNCIONES_H

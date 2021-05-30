// ---------------------------------------------------------------------------

#ifndef VectoresH
#define VectoresH
// ---------------------------------------------------------------------------
#include <vcl.h>
#include <Vcl.Grids.hpp>

// void invertir(int v[],int a, int b);
void invertir(TStringGrid* v, int a, int b);
void auxInsertionSort(TStringGrid* v, int j);
void insertionSort(TStringGrid* v, int i);
//2, 4, 16, 22, 176, 186, ...
//Cardinal auxSerie1(TStringGrid* v, Cardinal n);
Cardinal auxSerie1(Cardinal n);
void cargarSerie1(TStringGrid* v, int n);

bool ordenado(TStringGrid* v, int n);

#endif
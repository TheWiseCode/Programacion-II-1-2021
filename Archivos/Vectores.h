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
// 2, 4, 16, 22, 176, 186, ...
// Cardinal auxSerie1(TStringGrid* v, Cardinal n);
Cardinal auxSerie1(Cardinal n);
void cargarSerie1(TStringGrid* v, int n);

bool ordenado(TStringGrid* v, int n);

Cardinal auxSumaDigitos(String cad);
Cardinal sumaDigitos(TStringGrid* v, Byte n);

Cardinal posMayor(String cad);
void cargarOrdAsc(TStringGrid* v, String cad);


void burbujear(TStringGrid* v, Byte n);
void ord_burbuja(TStringGrid* v, Byte n);

void recorrer(TStringGrid* v, Byte p, Byte n);
void insertar_aux(TStringGrid* v2, TStringGrid* v1, Byte p, Byte i);
void insertar(TStringGrid* v2, TStringGrid* v1, Byte p);

void eliminar(TStringGrid* v, Cardinal p);
void eliminar_elemento(TStringGrid* v, Cardinal z, Cardinal n);

String vocales(String cad);
void cargar_vocales(String cad, TStringGrid* v);

Cardinal frec(String cad, char c);
void cargar_frec(String cad, TStringGrid* vc, TStringGrid* vf, Cardinal n);
#endif



//---------------------------------------------------------------------------

#ifndef NumerosH
#define NumerosH
//---------------------------------------------------------------------------
#include <vcl.h>

String repetir(Cardinal n, Cardinal v);
String literal(Cardinal n);

Cardinal cantDigParImpar(Cardinal n);
void Recorrer(Cardinal &n, Cardinal pos);
Cardinal PosMayor(Cardinal n);
void MoverFinal(Cardinal &n);

Cardinal suma_bin(Cardinal a, Cardinal b, Cardinal carry,Cardinal r);
Cardinal suma_binarios(Cardinal a, Cardinal b);
#endif

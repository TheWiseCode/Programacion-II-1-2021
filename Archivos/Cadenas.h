// ---------------------------------------------------------------------------

#ifndef CadenasH
#define CadenasH
// ---------------------------------------------------------------------------
#include <vcl.h>
#include <Vcl.Grids.hpp>

void cortarPrimeraLetra(AnsiString &cad);
bool perteneceConjunto(String conjunto, char c);
String leerConjunto(String conjunto);
bool esPalindrome(String cad);
Cardinal auxSumatoria(String cad);
Cardinal sumatoriaNumeros(String cad);

Cardinal mayor(String cad);
Cardinal numMayor(String cad);

void cargar_frase(String cad, TStringGrid* v);
#endif

// ---------------------------------------------------------------------------

#ifndef MatricesH
#define MatricesH
// ---------------------------------------------------------------------------
#include <vcl.h>
#include <Vcl.Grids.hpp>

void cargarCol(TStringGrid* m, Byte f, Byte c, Cardinal &v);
void cargarTodoFila(TStringGrid* m, Byte f, Byte c, Cardinal &v);

void cargarFil(TStringGrid* m, Byte f, Byte c, Cardinal &v);
void cargarTodoCol(TStringGrid* m, Byte f, Byte c, Cardinal &v);

void aux_sec_inf(TStringGrid* m, Byte f, Byte lc, Byte c, Cardinal &v);
void diag_sec_inf(TStringGrid* m, Byte f, Byte c, Cardinal &v);

void ext_fila(TStringGrid* m, Byte f, Byte c, Cardinal &v, bool sube);
void ext_col(TStringGrid* m, Byte f, Byte c, Cardinal &v, bool sube);
void cargar_exterior(TStringGrid* m, int f, int c);

void aux_matriz1(TStringGrid* m, Byte f, Byte c, Cardinal &v);
void cargar_matriz1(TStringGrid* m, Byte f, Byte c, Cardinal &v);

void aux_matriz2(TStringGrid* m, Byte f, Byte c, Byte lim);
void cargar_matriz2(TStringGrid* m, Byte f, Byte c);

void arriba(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v);
void derecha(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v);
void abajo(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v);
void izquierda(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v);
void caracol(TStringGrid* m, Byte fa, Byte fb, Byte ca, Byte cb, Cardinal &v);

void arriba2(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v);
void derecha2(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v);
void abajo2(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v);
void izquierda2(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v);
void caracol2(TStringGrid* m, Byte fa, Byte fb, Byte ca, Byte cb, Cardinal &v);

void aux_cad(TStringGrid* m, String &cad, Byte f, Byte c);
void cargar_cad(TStringGrid* m, String &cad, Byte c);

void aux_dona(TStringGrid* m, Byte f, Byte c, Byte l, Cardinal v);
void dona(TStringGrid* m, Byte f, Byte c, Cardinal v);

void aux_frac(TStringGrid* m, Byte f, Byte c, Byte lim, Cardinal& num,
	Cardinal& den);
void cargar_frac(TStringGrid* m, Byte f, Byte c, Cardinal& num, Cardinal& den);
#endif

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
#endif

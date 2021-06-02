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
#endif

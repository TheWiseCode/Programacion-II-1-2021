// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Matrices.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

void cargarCol(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (c > 0) {
		m->Cells[c - 1][f - 1] = v;
		v++;
		cargarCol(m, f, c - 1, v);
	}
}

void cargarTodoFila(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (f > 0) {
		cargarCol(m, f, c, v);
		cargarTodoFila(m, f - 1, c, v);
	}
}

void cargarFil(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (f > 0) {
		m->Cells[c - 1][f - 1] = v;
		v++;
		cargarFil(m, f - 1, c, v);
	}
}

void cargarTodoCol(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (c > 0) {
		cargarFil(m, f, c, v);
		cargarTodoCol(m, f, c - 1, v);
	}
}

void aux_sec_inf(TStringGrid* m, Byte f, Byte lc, Byte c, Cardinal &v) {
	if (c > lc) {
		Byte fil = f - 1;
		Byte col = c - 1;
		m->Cells[col][fil] = v;
		v++;
		aux_sec_inf(m, f, lc, c - 1, v);
	}
}

void diag_sec_inf(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (f > 0) {
		Byte lc = c - f;
		aux_sec_inf(m, f, lc, c, v);
		diag_sec_inf(m, f - 1, c, v);
	}
}

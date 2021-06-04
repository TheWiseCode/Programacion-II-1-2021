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

void ext_fila(TStringGrid* m, Byte f, Byte c, Cardinal &v, bool sube) {
	if (sube) {
		if (c <= m->ColCount) {
			m->Cells[c - 1][f - 1] = v;
			v++;
			ext_fila(m, f, c + 1, v, sube);
		}
	}
	else {
		if (c > 0) {
			m->Cells[c - 1][f - 1] = v;
			v++;
			ext_fila(m, f, c - 1, v, sube);
		}
	}
}

void ext_col(TStringGrid* m, Byte f, Byte c, Cardinal &v, bool sube) {
	if (sube) {
		if (f <= m->RowCount) {
			m->Cells[c - 1][f - 1] = v;
			v++;
			ext_col(m, f + 1, c, v, sube);
		}
	}
	else {
		if (f > 1) {
			m->Cells[c - 1][f - 1] = v;
			v++;
			ext_col(m, f - 1, c, v, sube);
		}
	}
}

void cargar_exterior(TStringGrid* m, int f, int c) {
	if (f != -1) {
		Byte i = m->RowCount;
		Byte j = m->ColCount;
		bool subeFila = f == 1;
		bool subeCol = c == 1;
		Cardinal v = 1;
		Byte proxFil, proxCol;
		if (f == 1)
			proxFil = f + 1;
		else
			proxFil = f - 1;
		if (c == 1)
			proxCol = j;
		else
			proxCol = 1;
		ext_fila(m, f, c, v, subeFila);
		ext_col(m, proxFil, proxCol, v, subeCol);
		if (f == m->RowCount)
			cargar_exterior(m, -1, -1);
		else
			cargar_exterior(m, i, j - 1);
	}
}

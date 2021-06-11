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

void aux_matriz1(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (c > 0) {
		Byte fil = m->RowCount - f;
		Byte col = m->ColCount - c;
		m->Cells[col][fil] = v;
		v += 2;
		aux_matriz1(m, f, c - 1, v);
	}
}

void cargar_matriz1(TStringGrid* m, Byte f, Byte c, Cardinal &v) {
	if (f > 0) {
		Byte col = m->ColCount - c + 1;
		aux_matriz1(m, f, col, v);
		cargar_matriz1(m, f - 1, c - 1, v);
	}
}

void aux_matriz2(TStringGrid* m, Byte f, Byte c, Byte lim) {
	if (c > lim) {
		Byte fil = m->RowCount - f;
		if (c == lim + 1)
			m->Cells[c - 1][fil] = 1;
		else
			m->Cells[c - 1][fil] = (c - 1);
		aux_matriz2(m, f, c - 1, lim);
	}
}

void cargar_matriz2(TStringGrid* m, Byte f, Byte c) {
	if (f > 0) {
		Byte lim = m->ColCount - c;
		aux_matriz2(m, f, m->ColCount, lim);
		cargar_matriz2(m, f - 1, c - 1);
	}
}

void arriba(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v) {
	if (ca < cb) {
		m->Cells[ca - 1][f - 1] = v;
		v++;
		arriba(m, f, ca + 1, cb, v);
	}
}

void derecha(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v) {
	if (fa < fb) {
		m->Cells[c - 1][fb - 1] = v;
		v++;
		derecha(m, fa, fb - 1, c, v);
	}
}

void abajo(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v) {
	if (ca < cb) {
		m->Cells[cb - 1][f - 1] = v;
		v++;
		abajo(m, f, ca, cb - 1, v);
	}
}

void izquierda(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v) {
	if (fa < fb) {
		m->Cells[c - 1][fa - 1] = v;
		v++;
		izquierda(m, fa + 1, fb, c, v);
	}
}

void caracol(TStringGrid* m, Byte fa, Byte fb, Byte ca, Byte cb, Cardinal &v) {
	if (fa <= fb && ca <= cb) {
		if (fa == fb && ca == cb)
			m->Cells[fa - 1][ca - 1] = v;
		else {
			arriba(m, fa, ca, cb, v);
			izquierda(m, fa, fb, cb, v);
			abajo(m, fb, ca, cb, v);
			derecha(m, fa, fb, ca, v);
		}
		caracol(m, fa + 1, fb - 1, ca + 1, cb - 1, v);
	}
}

void arriba2(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v) {
	if (ca < cb) {
		m->Cells[ca - 1][f - 1] = v;
		arriba2(m, f, ca + 1, cb, v);
	}
}

void derecha2(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v) {
	if (fa < fb) {
		m->Cells[c - 1][fb - 1] = v;
		derecha2(m, fa, fb - 1, c, v);
	}
}

void abajo2(TStringGrid* m, Byte f, Byte ca, Byte cb, Cardinal &v) {
	if (ca < cb) {
		m->Cells[cb - 1][f - 1] = v;
		abajo2(m, f, ca, cb - 1, v);
	}
}

void izquierda2(TStringGrid* m, Byte fa, Byte fb, Byte c, Cardinal &v) {
	if (fa < fb) {
		m->Cells[c - 1][fa - 1] = v;
		izquierda2(m, fa + 1, fb, c, v);
	}
}

void caracol2(TStringGrid* m, Byte fa, Byte fb, Byte ca, Byte cb, Cardinal &v) {
	if (fa <= fb && ca <= cb) {
		if (fa == fb && ca == cb)
			m->Cells[fa - 1][ca - 1] = v;
		else {
			arriba2(m, fa, ca, cb, v);
			v++;
			izquierda2(m, fa, fb, cb, v);
			v++;
			abajo2(m, fb, ca, cb, v);
			v++;
			derecha2(m, fa, fb, ca, v);
			v++;
		}
		caracol2(m, fa + 1, fb - 1, ca + 1, cb - 1, v);
	}
}

void aux_cad(TStringGrid* m, String &cad, Byte f, Byte c) {
	if (f <= m->RowCount && cad.Length() > 0) {
		char x = cad[1];
		cad.Delete(1, 1);
		m->Cells[c - 1][f - 1] = x;
		aux_cad(m, cad, f + 1, c);
	}
}

void cargar_cad(TStringGrid* m, String &cad, Byte c) {
	if (c <= m->ColCount) {
		aux_cad(m, cad, 1, c);
		cargar_cad(m, cad, c + 1);
	}
}

void aux_dona(TStringGrid* m, Byte f, Byte c, Byte l, Cardinal v) {
	if (c > l) {
		int nf = m->RowCount;
		int nc = m->RowCount;
		m->Cells[c - 1][f - 1] = v;
		m->Cells[f - 1][c - 1] = v;
		m->Cells[nc - c][nf - f] = v;
		m->Cells[nf - f][nc - c] = v;
		aux_dona(m, f, c - 1, l, v);
	}
}

void dona(TStringGrid* m, Byte f, Byte c, Cardinal v) {
	if (f > m->RowCount / 2) {
		Byte l = m->ColCount - c;
		aux_dona(m, f, c, l, v);
		dona(m, f - 1, c - 1, v + 1);
	}
}

void aux_frac(TStringGrid* m, Byte f, Byte c, Byte lim, Cardinal& num,
	Cardinal& den) {
	if (c > lim) {
		if (den == 1)
			m->Cells[c - 1][f - 1] = String(num);
		else
			m->Cells[c - 1][f - 1] = String(num) + "/" + String(den);
		if (den > 1)
			den /= 2;
		else if (den == 1)
			num *= 2;
		aux_frac(m, f, c - 1, lim, num, den);
	}
}

void cargar_frac(TStringGrid* m, Byte f, Byte c, Cardinal& num, Cardinal& den) {
	if (f > 0) {
		aux_frac(m, f, m->ColCount, c - 1, num, den);
		cargar_frac(m, f - 1, c - 1, num, den);
	}
}

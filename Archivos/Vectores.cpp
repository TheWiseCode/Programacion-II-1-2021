// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Vectores.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

void invertir(TStringGrid* v, int a, int b) {
	Byte n = b - a + 1;
	if (n <= 1) {

	}
	else if (n == 2) {
		String aux = v->Cells[a][0];
		v->Cells[a][0] = v->Cells[b][0];
		v->Cells[b][0] = aux;
	}
	else {
		String aux = v->Cells[a][0];
		v->Cells[a][0] = v->Cells[b][0];
		v->Cells[b][0] = aux;
		invertir(v, a + 1, b - 1);
	}
}

void auxInsertionSort(TStringGrid* v, int j) {
	if (j <= 0) {
	}
	else {
		Cardinal vj = StrToInt(v->Cells[j][0]);
		Cardinal vj1 = StrToInt(v->Cells[j - 1][0]);
		if (vj < vj1) { // (vj > vj1)
			String aux = v->Cells[j][0];
			v->Cells[j][0] = v->Cells[j - 1][0];
			v->Cells[j - 1][0] = aux;
			auxInsertionSort(v, j - 1);
		}
	}
}

void insertionSort(TStringGrid* v, int i) {
	Byte n = v->ColCount;
	if (i >= n) {
	}
	else {
		Byte j = i;
		auxInsertionSort(v, j);
		insertionSort(v, i + 1);
	}
}

/*
 Cardinal auxSerie1(TStringGrid* v, Cardinal n) {
 Cardinal t;
 if (n == 1)
 t = 2;
 else {
 if (n % 2 == 0)
 t = auxSerie1(v, n - 1) + ((n - 1) * 2);
 else
 t = auxSerie1(v, n - 1) * ((n - 1) * 2);
 }
 v->Cells[n - 1][0] = t;
 return t;
 }

 void cargarSerie1(TStringGrid* v, int n) {
 auxSerie1(v, n);
 } */

Cardinal auxSerie1(Cardinal n) {
	Cardinal t;
	if (n == 1)
		t = 2;
	else {
		if (n % 2 == 0)
			t = auxSerie1(n - 1) + ((n - 1) * 2);
		else
			t = auxSerie1(n - 1) * ((n - 1) * 2);
	}
	return t;
}

void cargarSerie1(TStringGrid* v, int n) {
	if (n == 1) {
		Cardinal termino = auxSerie1(1);
		v->Cells[0][0] = termino;
	}
	else {
		Cardinal termino = auxSerie1(n);
		v->Cells[n - 1][0] = termino;
		cargarSerie1(v, n - 1);
	}
}

bool ordenado(TStringGrid* v, int n) {
	bool x;
	if (n == 1) {
		x = true;
	}
	else {
		String sa = v->Cells[n - 2][0];
		String sb = v->Cells[n - 1][0];
		Cardinal a = StrToInt(sa);
		Cardinal b = StrToInt(sb);
		if(a > b)
			x = false;
		else
			x = ordenado(v, n - 1);
	}
	return x;
}

/*
 void insertionSortIt(int v[], int n) {
 for (int i = 0; i < n; i++) {
 int j = i;
 while (j > 0 && v[j] < v[j - 1]) {
 int aux = v[j];
 v[j] = v[j - 1];
 v[j - 1] = aux;
 j--;
 }
 }
 } */
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
		if (a > b)
			x = false;
		else
			x = ordenado(v, n - 1);
	}
	return x;
}

Cardinal auxSumaDigitos(String cad) {
	Cardinal s = 0;
	if (cad.Length() > 0) {
		char c = cad[1];
		if (c >= '0' && c <= '9') {
			s += (c - 48);
		}
		cad.Delete(1, 1);
		s += auxSumaDigitos(cad);
	}
	return s;
}

Cardinal sumaDigitos(TStringGrid* v, Byte n) {
	Cardinal s = 0;
	if (n > 0) {
		String cad = v->Cells[n - 1][0];
		s = auxSumaDigitos(cad);
		s += sumaDigitos(v, n - 1);
	}
	return s;
}

Cardinal posMayor(String cad) {
	Cardinal p;
	Word n = cad.Length();
	if (n == 1) {
		p = 1;
	}
	else {
		char c = cad[n];
		cad.Delete(n, 1);
		p = posMayor(cad);
		if (c > cad[p])
			p = n;
	}
	return p;
}

void cargarOrdAsc(TStringGrid* v, String cad) {
	if (cad.Length() > 0) {
		Cardinal posMay = posMayor(cad);
		char c = cad[posMay];
		v->Cells[cad.Length() - 1][0] = c;
		cad.Delete(posMay, 1);
		cargarOrdAsc(v, cad);
	}
}

void burbujear(TStringGrid* v, Byte n) {
	if (n > 1) {
		burbujear(v, n - 1);
		Cardinal izq = StrToInt(v->Cells[n - 2][0]);
		Cardinal der = StrToInt(v->Cells[n - 1][0]);
		if (izq < der) {
			v->Cells[n - 2][0] = der;
			v->Cells[n - 1][0] = izq;
		}
	}
}

void ord_burbuja(TStringGrid* v, Byte n) {
	if (n > 0) {
		burbujear(v, n);
		ord_burbuja(v, n - 1);
	}
}

void recorrer(TStringGrid* v, Byte p, Byte n) {
	if (p < n) {
		v->Cells[n][0] = v->Cells[n - 1][0];
		recorrer(v, p, n - 1);
	}
}

void insertar_aux(TStringGrid* v2, TStringGrid* v1, Byte p, Byte i) {
	if (i < v2->ColCount) {
		v1->ColCount = v1->ColCount + 1;
		recorrer(v1, p, v1->ColCount);
		v1->Cells[p][0] = v2->Cells[i][0];
		insertar_aux(v2, v1, p + 1, i + 1);
	}
}

void insertar(TStringGrid* v2, TStringGrid* v1, Byte p) {
	insertar_aux(v2, v1, p, 0);
}

void eliminar(TStringGrid* v, Cardinal p) {
	if (p < v->ColCount) {
		v->Cells[p][0] = v->Cells[p + 1][0];
		eliminar(v, p + 1);
	}
}

void eliminar_elemento(TStringGrid* v, Cardinal z, Cardinal n) {
	if (n > 0) {
		Cardinal num = StrToInt(v->Cells[n - 1][0]);
		if (num == z) {
			eliminar(v, n - 1);
			v->ColCount -= 1;
		}
		else {
			eliminar_elemento(v, z, n - 1);
		}
	}
}

String vocales(String cad) {
	String r;
	if (cad.Length() == 0)
		r = "";
	else {
		String alf = "aeiouAEIOU";
		char c = cad[1];
		cad.Delete(1, 1);
		Byte pos = alf.Pos(c);
		if (pos > 0)
			r = c;
		r += vocales(cad);
	}
	return r;
}

void cargar_vocales(String cad, TStringGrid* v) {
	if (cad.Length() == 0)
		v->ColCount--;
	else {
		Byte pos = cad.Pos(" ");
		if (pos == 0)
			pos = cad.Length() + 1;
		String pal = cad.SubString(0, pos - 1);
		cad.Delete(1, pos);
		String voc = vocales(pal);
		Cardinal n = v->ColCount;
		v->Cells[n - 1][0] = voc;
		v->ColCount++;
		cargar_vocales(cad, v);
	}
}

Cardinal frec(String cad, char c) {
	Cardinal f;
	if(cad.Length() == 0)
		f = 0;
	else{
		char x = cad[1];
		cad.Delete(1, 1);
		if(x == c)
			f = 1 + frec(cad, c);
		else
			f = frec(cad, c);
	}
	return f;
}

void cargar_frec(String cad, TStringGrid* vc, TStringGrid* vf, Cardinal n) {
	if (n > 0) {
		char c = cad[n];
		Cardinal f = frec(cad, c);
		vc->Cells[n - 1][0] = c;
		vf->Cells[n - 1][0] = f;
		cargar_frec(cad, vc, vf, n - 1);
	}
}

// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Numeros.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

String repetir(Cardinal n, Cardinal v) {
	String r;
	if (n == 0)
		r = "";
	else {
		r = repetir(n - 1, v);
		r += String(v);
	}
	return r;
}

String literal(Cardinal n) {
	String r;
	if (n < 10)
		r = repetir(n, n);
	else {
		Byte dig = n % 10;
		n = n / 10;
		r = literal(n);
		r += repetir(dig, dig);
	}
	return r;
}

Cardinal cantDigParImpar(Cardinal n) {
	Cardinal suma;
	if (n < 10)
		suma = 0;
	else {
		Byte der = n % 10;
		n = n / 10;
		suma = cantDigParImpar(n);
		Byte izq = n % 10;
		if (izq % 2 == 0 && der % 2 == 1)
			suma++;
	}
	return suma;
}

void Recorrer(Cardinal &n, Cardinal pos) {
	Cardinal len = log10(n) + 1;
	Cardinal div = pow(10, len - pos);
	Cardinal der = n % div;
	Cardinal izq = n / div;
	Cardinal may = izq % 10;
	izq = izq / 10;
	Cardinal lenDer = log10(der) + 1;
	Cardinal pot1 = pow(10, lenDer);
	izq = izq * pot1 + der;
	Cardinal pot2 = pow(10, len - 1);
	n = may * pot2 + izq;
}

Cardinal PosMayor(Cardinal n) {
	Cardinal pos;
	if (n < 10)
		pos = 1;
	else {
		Cardinal dig = n % 10;
		// n = n / 10;
		pos = PosMayor(n / 10);
		Cardinal aux = n;
		Cardinal lenAux = log10(aux) + 1;
		Cardinal divisor = pow(10, lenAux - pos);
		aux = aux / divisor;
		Cardinal digMayor = aux % 10;
		if (dig > digMayor)
			pos = log10(n) + 1;
	}
	return pos;
}

void MoverFinal(Cardinal &n) {
	Cardinal pos = PosMayor(n);
	Recorrer(n, pos);
}

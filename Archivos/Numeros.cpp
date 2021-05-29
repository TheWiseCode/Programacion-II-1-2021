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

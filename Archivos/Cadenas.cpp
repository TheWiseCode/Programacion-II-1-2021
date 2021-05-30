// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Cadenas.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

void cortarPrimeraLetra(AnsiString &cad) {
	if (cad == "") {

	}
	else {
		Cardinal pos = cad.Pos(" ");
		if (pos == 0)
			pos = cad.Length() + 1;
		AnsiString palabra = cad.SubString(1, pos - 1);
		cad.Delete(1, pos);
		cortarPrimeraLetra(cad);
		palabra.Delete(1, 1);
		cad = palabra + " " + cad;
	}
}

bool perteneceConjunto(String conjunto, char c) {
	bool res;
	if (conjunto == "")
		res = false;
	else {
		Cardinal len = conjunto.Length();
		char x = conjunto[len];
		if (c == x)
			res = true;
		else {
			conjunto.Delete(len, 1);
			res = perteneceConjunto(conjunto, c);
		}
	}
	return res;
}

String leerConjunto(String conjunto) {
	String r;
	String s = InputBox("Titulo", "Caracter:", "");
	char c = s[1];
	bool pertenece = perteneceConjunto(conjunto, c);
	if (pertenece == false) {
		ShowMessage("No");
		r = "";
	}
	else {
		ShowMessage("Si");
		r += String(c) + leerConjunto(conjunto);
	}
	return r;
}

bool esPalindrome(String cad) {
	bool res;
	Cardinal len = cad.Length();
	if (len <= 1)
		res = true;
	else {
		char izq = cad[1];
		char der = cad[len];
		if (izq != der)
			res = false;
		else {
			String nueva = cad.SubString(2, len - 2);
			// cad.Delete(len,1);
			// cad.Delete(1, 1);
			res = esPalindrome(nueva);
			// res = esPalindrome(cad);
		}
	}
	return res;
}

Cardinal posNum(String cad) {
}

Cardinal posLetra(String cad) {
}

Cardinal auxSumatoria(String cad) {
	Cardinal s;
	if (cad == "") {
		s = 0;
	}
	else {
		Cardinal pos = posNum(cad);
		cad.Delete(1, pos);
		Cardinal posL = posLetra(cad);
		if (posL == 0)
			posL = cad.Length();
		String num = cad.SubString(1, posL);
		s = StrToInt(num);
		cad.Delete(1, posL);
		s += auxSumatoria(cad);
	}
	return s;
}

Cardinal sumatoriaNumeros(String cad) {
	Cardinal s;
	if (cad == "") {
		s = 0;
	}
	else {
		Cardinal pos = cad.Pos(" ");
		if (pos == 0)
			pos = cad.Length();
		String pal = cad.SubString(1, pos - 1);
		String otra = cad.SubString(pos + 1, cad.Length() - pal.Length() - 1);
		s = sumatoriaNumeros(otra) + auxSumatoria(pal);
	}
	return s;
}

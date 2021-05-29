// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Literal1Click(TObject *Sender) {
	String r = Edit1->Text;
	Cardinal n = StrToInt(r);
	String lit = literal(n);
	Edit2->Text = lit;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::CantidadParantesdeImpar1Click(TObject *Sender) {
	String r = Edit1->Text;
	Cardinal n = StrToInt(r);
	Cardinal cant = cantDigParImpar(n);
	Edit2->Text = String(cant);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::CortarPrimeraLetra1Click(TObject *Sender) {
	AnsiString cad = Edit1->Text;
	cortarPrimeraLetra(cad);
	Edit2->Text = cad;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::LeerConjunto1Click(TObject *Sender) {
	String conjunto = InputBox("Titulo", "Conjunto", "");
	String res = leerConjunto(conjunto);
	Edit2->Text = res;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::EsPalindrome1Click(TObject *Sender) {
	String cad = Edit1->Text;
	bool b = esPalindrome(cad);
	if (b)
		Edit2->Text = "Si es";
	else
		Edit2->Text = "No es";
}
// ---------------------------------------------------------------------------

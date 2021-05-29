//---------------------------------------------------------------------------

#ifndef FormH
#define FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "Numeros.h"
#include "Cadenas.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Numeros1;
	TMenuItem *Literal1;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *CantidadParantesdeImpar1;
	TMenuItem *Cadenas1;
	TMenuItem *CortarPrimeraLetra1;
	TMenuItem *LeerConjunto1;
	TMenuItem *EsPalindrome1;
	void __fastcall Literal1Click(TObject *Sender);
	void __fastcall CantidadParantesdeImpar1Click(TObject *Sender);
	void __fastcall CortarPrimeraLetra1Click(TObject *Sender);
	void __fastcall LeerConjunto1Click(TObject *Sender);
	void __fastcall EsPalindrome1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
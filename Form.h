//---------------------------------------------------------------------------

#ifndef FormH
#define FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "Numeros.h"
#include "Cadenas.h"
#include "Vectores.h"
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
	TPageControl *Tabs;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TTabSheet *TabSheet5;
	TStringGrid* Vector;
	TMenuItem *Vectores1;
	TMenuItem *Invertirab1;
	TEdit *EditLen;
	TButton *Button1;
	TMenuItem *InsertionSort1;
	TMenuItem *CargarSerie11;
	TMenuItem *MoverFinal1;
	TMenuItem *Ordenado1;
	void __fastcall Literal1Click(TObject *Sender);
	void __fastcall CantidadParantesdeImpar1Click(TObject *Sender);
	void __fastcall CortarPrimeraLetra1Click(TObject *Sender);
	void __fastcall LeerConjunto1Click(TObject *Sender);
	void __fastcall EsPalindrome1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Invertirab1Click(TObject *Sender);
	void __fastcall InsertionSort1Click(TObject *Sender);
	void __fastcall CargarSerie11Click(TObject *Sender);
	void __fastcall MoverFinal1Click(TObject *Sender);
	void __fastcall Ordenado1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

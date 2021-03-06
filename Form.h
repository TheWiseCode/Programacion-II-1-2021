// ---------------------------------------------------------------------------

#ifndef FormH
#define FormH
// ---------------------------------------------------------------------------
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
#include "Matrices.h"

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components
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
	TMenuItem *Sumadigitos1;
	TEdit *Edit3;
	TMenuItem *CargarOrdenadocadena1;
	TStringGrid *Matriz;
	TEdit *Edit4;
	TEdit *Edit5;
	TMenuItem *Matrices;
	TMenuItem *CargarTodoFila1;
	TMenuItem *CargarTodoCol1;
	TButton *Button2;
	TMenuItem *DiagSecundarioInf1;
	TMenuItem *OrdBurbuja1;
	TMenuItem *Cargarexterior1;
	TMenuItem *Sumabinarios1;
	TMenuItem *SecInfAumento21;
	TMenuItem *CargarFila11C1;
	TMenuItem *Caracol1;
	TMenuItem *Caracol21;
	TMenuItem *Insertarv2v2p1;
	TStringGrid *Vector1;
	TEdit *Edit6;
	TButton *Button3;
	TMenuItem *Mayordeunacadena1;
	TMenuItem *cargarfrase1;
	TMenuItem *Cargarcadena1;
	TMenuItem *Eliminarelemento1;
	TMenuItem *Dona1;
	TMenuItem *Cargarvocales1;
	TMenuItem *CargarFracciones1;
	TMenuItem *Cargarfrecuencias1;

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
	void __fastcall Sumadigitos1Click(TObject *Sender);
	void __fastcall CargarOrdenadocadena1Click(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);
	void __fastcall Edit5Change(TObject *Sender);
	void __fastcall CargarTodoFila1Click(TObject *Sender);
	void __fastcall CargarTodoCol1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall DiagSecundarioInf1Click(TObject *Sender);
	void __fastcall OrdBurbuja1Click(TObject *Sender);
	void __fastcall Cargarexterior1Click(TObject *Sender);
	void __fastcall Sumabinarios1Click(TObject *Sender);
	void __fastcall SecInfAumento21Click(TObject *Sender);
	void __fastcall CargarFila11C1Click(TObject *Sender);
	void __fastcall Caracol1Click(TObject *Sender);
	void __fastcall Caracol21Click(TObject *Sender);
	void __fastcall Insertarv2v2p1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Mayordeunacadena1Click(TObject *Sender);
	void __fastcall cargarfrase1Click(TObject *Sender);
	void __fastcall Cargarcadena1Click(TObject *Sender);
	void __fastcall Eliminarelemento1Click(TObject *Sender);
	void __fastcall Dona1Click(TObject *Sender);
	void __fastcall Cargarvocales1Click(TObject *Sender);
	void __fastcall CargarFracciones1Click(TObject *Sender);
	void __fastcall Cargarfrecuencias1Click(TObject *Sender);

private: // User declarations
public: // User declarations
	__fastcall TForm1(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif

object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 445
  ClientWidth = 755
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Tabs: TPageControl
    Left = 0
    Top = 0
    Width = 755
    Height = 445
    ActivePage = TabSheet4
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Numeros'
      object Edit1: TEdit
        Left = 8
        Top = 8
        Width = 209
        Height = 26
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
      object Edit2: TEdit
        Left = 8
        Top = 40
        Width = 209
        Height = 26
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Series'
      ImageIndex = 1
    end
    object TabSheet3: TTabSheet
      Caption = 'Cadenas'
      ImageIndex = 2
      object Edit6: TEdit
        Left = 16
        Top = 14
        Width = 121
        Height = 26
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Vectores'
      ImageIndex = 3
      object Vector: TStringGrid
        Left = 3
        Top = 16
        Width = 741
        Height = 57
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
        ParentFont = False
        TabOrder = 0
      end
      object EditLen: TEdit
        Left = 3
        Top = 79
        Width = 121
        Height = 26
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
      object Button1: TButton
        Left = 130
        Top = 81
        Width = 75
        Height = 25
        Caption = 'Dimensionar'
        TabOrder = 2
        OnClick = Button1Click
      end
      object Edit3: TEdit
        Left = 3
        Top = 112
        Width = 202
        Height = 24
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 3
      end
      object Vector1: TStringGrid
        Left = 3
        Top = 176
        Width = 741
        Height = 57
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
        ParentFont = False
        TabOrder = 4
      end
      object Button3: TButton
        Left = 130
        Top = 239
        Width = 75
        Height = 25
        Caption = 'Dim'
        TabOrder = 5
        OnClick = Button3Click
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'Matrices'
      ImageIndex = 4
      object Matriz: TStringGrid
        Left = 3
        Top = 3
        Width = 414
        Height = 390
        DefaultColWidth = 35
        DefaultRowHeight = 35
        FixedCols = 0
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
      object Edit4: TEdit
        Left = 423
        Top = 3
        Width = 121
        Height = 26
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        NumbersOnly = True
        ParentFont = False
        TabOrder = 1
        Text = '5'
        OnChange = Edit4Change
      end
      object Edit5: TEdit
        Left = 423
        Top = 35
        Width = 121
        Height = 26
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = []
        NumbersOnly = True
        ParentFont = False
        TabOrder = 2
        Text = '5'
        OnChange = Edit5Change
      end
      object Button2: TButton
        Left = 423
        Top = 67
        Width = 121
        Height = 30
        Caption = 'Limpiar'
        TabOrder = 3
        OnClick = Button2Click
      end
    end
  end
  object MainMenu1: TMainMenu
    Left = 672
    Top = 328
    object Numeros1: TMenuItem
      Caption = 'Numeros'
      object Literal1: TMenuItem
        Caption = 'Literal'
        OnClick = Literal1Click
      end
      object CantidadParantesdeImpar1: TMenuItem
        Caption = 'Cantidad Par antes de Impar'
        OnClick = CantidadParantesdeImpar1Click
      end
      object MoverFinal1: TMenuItem
        Caption = 'MoverFinal'
        OnClick = MoverFinal1Click
      end
      object Sumabinarios1: TMenuItem
        Caption = 'Suma binarios'
        OnClick = Sumabinarios1Click
      end
    end
    object Cadenas1: TMenuItem
      Caption = 'Cadenas'
      object CortarPrimeraLetra1: TMenuItem
        Caption = 'Cortar Primera Letra'
        OnClick = CortarPrimeraLetra1Click
      end
      object LeerConjunto1: TMenuItem
        Caption = 'Leer Conjunto'
        OnClick = LeerConjunto1Click
      end
      object EsPalindrome1: TMenuItem
        Caption = 'Es Palindrome'
        OnClick = EsPalindrome1Click
      end
      object Mayordeunacadena1: TMenuItem
        Caption = 'Mayor de una cadena'
        OnClick = Mayordeunacadena1Click
      end
    end
    object Vectores1: TMenuItem
      Caption = 'Vectores'
      object Invertirab1: TMenuItem
        Caption = 'Invertir(a,b)'
        OnClick = Invertirab1Click
      end
      object InsertionSort1: TMenuItem
        Caption = 'InsertionSort'
        OnClick = InsertionSort1Click
      end
      object CargarSerie11: TMenuItem
        Caption = 'Cargar Serie 1'
        OnClick = CargarSerie11Click
      end
      object Ordenado1: TMenuItem
        Caption = 'Ordenado'
        OnClick = Ordenado1Click
      end
      object Sumadigitos1: TMenuItem
        Caption = 'Suma digitos'
        OnClick = Sumadigitos1Click
      end
      object CargarOrdenadocadena1: TMenuItem
        Caption = 'Cargar Ordenado cadena'
        OnClick = CargarOrdenadocadena1Click
      end
      object OrdBurbuja1: TMenuItem
        Caption = 'Ord Burbuja'
        OnClick = OrdBurbuja1Click
      end
      object Insertarv2v2p1: TMenuItem
        Caption = 'Insertar v2 -> v2, p'
        OnClick = Insertarv2v2p1Click
      end
      object cargarfrase1: TMenuItem
        Caption = 'cargar_frase'
        OnClick = cargarfrase1Click
      end
      object Eliminarelemento1: TMenuItem
        Caption = 'Eliminar elemento'
        OnClick = Eliminarelemento1Click
      end
      object Cargarvocales1: TMenuItem
        Caption = 'Cargar vocales'
        OnClick = Cargarvocales1Click
      end
      object Cargarfrecuencias1: TMenuItem
        Caption = 'Cargar frecuencias'
        OnClick = Cargarfrecuencias1Click
      end
    end
    object Matrices: TMenuItem
      Caption = 'Matrices'
      object CargarTodoFila1: TMenuItem
        Caption = 'Cargar Todo Fila'
        OnClick = CargarTodoFila1Click
      end
      object CargarTodoCol1: TMenuItem
        Caption = 'Cargar Todo Col'
        OnClick = CargarTodoCol1Click
      end
      object DiagSecundarioInf1: TMenuItem
        Caption = 'Diag Secundario Inf'
        OnClick = DiagSecundarioInf1Click
      end
      object Cargarexterior1: TMenuItem
        Caption = 'Cargar exterior'
        OnClick = Cargarexterior1Click
      end
      object SecInfAumento21: TMenuItem
        Caption = 'Sec Inf Aumento 2'
        OnClick = SecInfAumento21Click
      end
      object CargarFila11C1: TMenuItem
        Caption = 'Cargar Fila 1,1 -> C'
      end
      object Caracol1: TMenuItem
        Caption = 'Caracol'
        OnClick = Caracol1Click
      end
      object Caracol21: TMenuItem
        Caption = 'Caracol 2'
        OnClick = Caracol21Click
      end
      object Cargarcadena1: TMenuItem
        Caption = 'Cargar cadena'
        OnClick = Cargarcadena1Click
      end
      object Dona1: TMenuItem
        Caption = 'Dona'
        OnClick = Dona1Click
      end
      object CargarFracciones1: TMenuItem
        Caption = 'Cargar Fracciones'
        OnClick = CargarFracciones1Click
      end
    end
  end
end

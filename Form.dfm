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
    ExplicitLeft = 248
    ExplicitTop = 8
    ExplicitWidth = 465
    ExplicitHeight = 305
    object TabSheet1: TTabSheet
      Caption = 'Numeros'
      ExplicitLeft = 0
      ExplicitWidth = 457
      ExplicitHeight = 277
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
      ExplicitWidth = 457
      ExplicitHeight = 277
    end
    object TabSheet3: TTabSheet
      Caption = 'Cadenas'
      ImageIndex = 2
      ExplicitWidth = 457
      ExplicitHeight = 277
    end
    object TabSheet4: TTabSheet
      Caption = 'Vectores'
      ImageIndex = 3
      ExplicitWidth = 457
      ExplicitHeight = 277
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
    end
    object TabSheet5: TTabSheet
      Caption = 'Matrices'
      ImageIndex = 4
      ExplicitWidth = 457
      ExplicitHeight = 277
    end
  end
  object MainMenu1: TMainMenu
    Left = 32
    Top = 376
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
    end
  end
end

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
  object Edit1: TEdit
    Left = 8
    Top = 24
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
    Top = 80
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
  object MainMenu1: TMainMenu
    Left = 400
    Top = 136
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
  end
end

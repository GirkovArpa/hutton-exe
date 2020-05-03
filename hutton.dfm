object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Hutton Cipher'
  ClientHeight = 340
  ClientWidth = 710
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object inputPlaintext: TLabeledEdit
    Left = 8
    Top = 32
    Width = 684
    Height = 22
    EditLabel.Width = 46
    EditLabel.Height = 13
    EditLabel.Caption = 'Plaintext:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = 'MEETMEATTHEGREENMANATTHREE'
    OnChange = inputPlaintextChange
  end
  object inputCiphertext: TLabeledEdit
    Left = 8
    Top = 80
    Width = 684
    Height = 22
    EditLabel.Width = 55
    EditLabel.Height = 13
    EditLabel.Caption = 'Ciphertext:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnChange = inputCiphertextChange
  end
  object inputAlphabetKey: TLabeledEdit
    Left = 8
    Top = 176
    Width = 684
    Height = 22
    EditLabel.Width = 68
    EditLabel.Height = 13
    EditLabel.Caption = 'Alphabet Key:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Text = 'JUPITER'
    OnChange = inputAlphabetKeyChange
  end
  object inputPassword: TLabeledEdit
    Left = 8
    Top = 128
    Width = 684
    Height = 22
    EditLabel.Width = 50
    EditLabel.Height = 13
    EditLabel.Caption = 'Password:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    Text = 'FEDORA'
    OnChange = inputPasswordChange
  end
  object inputAlphabetKeyed: TLabeledEdit
    Left = 8
    Top = 224
    Width = 684
    Height = 22
    EditLabel.Width = 80
    EditLabel.Height = 13
    EditLabel.Caption = 'Keyed Alphabet:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 4
  end
  object buttonEncrypt: TButton
    Left = 8
    Top = 264
    Width = 684
    Height = 25
    Caption = 'Encrypt'
    TabOrder = 5
    OnClick = buttonEncryptClick
  end
  object buttonDecrypt: TButton
    Left = 8
    Top = 304
    Width = 684
    Height = 25
    Caption = 'Decrypt'
    TabOrder = 6
    OnClick = buttonDecryptClick
  end
end

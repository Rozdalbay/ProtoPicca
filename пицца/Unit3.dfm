object Form3: TForm3
  Left = 0
  Top = 0
  Caption = #1047#1072#1082#1072#1079#1099' '#1080' '#1076#1086#1089#1090#1072#1074#1097#1080#1082#1080
  ClientHeight = 317
  ClientWidth = 630
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 288
    Top = 8
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 288
    Top = 0
    Width = 50
    Height = 16
    Caption = #1047#1072#1082#1072#1079#1099
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 272
    Top = 149
    Width = 82
    Height = 16
    Caption = #1044#1086#1089#1090#1072#1074#1097#1080#1082#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = -8
    Top = 22
    Width = 633
    Height = 118
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object DBGrid2: TDBGrid
    Left = -3
    Top = 171
    Width = 625
    Height = 110
    DataSource = DataSource2
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 0
    Top = 146
    Width = 153
    Height = 19
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1079#1072#1082#1072#1079
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 0
    Top = 290
    Width = 153
    Height = 19
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1076#1086#1089#1090#1072#1074#1097#1080#1082#1072
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 464
    Top = 146
    Width = 158
    Height = 20
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1079#1072#1082#1072#1079
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 464
    Top = 290
    Width = 158
    Height = 19
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1076#1086#1089#1090#1072#1074#1097#1080#1082#1072
    TabOrder = 5
    OnClick = Button4Click
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 584
    Top = 272
  end
  object ADOConnection1: TADOConnection
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 488
    Top = 272
  end
  object ADOTable1: TADOTable
    Connection = ADOConnection1
    Left = 536
    Top = 272
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 584
    Top = 240
  end
  object ADOTable2: TADOTable
    Connection = ADOConnection2
    Left = 536
    Top = 240
  end
  object ADOConnection2: TADOConnection
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 488
    Top = 240
  end
end

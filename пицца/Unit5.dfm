object Form5: TForm5
  Left = 0
  Top = 0
  Caption = #1044#1086#1089#1090#1072#1074#1097#1080#1082#1080
  ClientHeight = 281
  ClientWidth = 628
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
    Left = 264
    Top = 24
    Width = 97
    Height = 18
    Caption = #1044#1086#1089#1090#1072#1074#1097#1080#1082#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 56
    Width = 612
    Height = 209
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 440
    Top = 25
    Width = 129
    Height = 25
    Caption = #1042#1099#1087#1086#1083#1085#1077#1085#1086
    TabOrder = 1
    OnClick = Button1Click
  end
  object ADOConnection1: TADOConnection
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 504
    Top = 240
  end
  object ADOTable1: TADOTable
    Connection = ADOConnection1
    Left = 544
    Top = 240
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 584
    Top = 240
  end
end

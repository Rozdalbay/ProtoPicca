//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit4.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form4->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
	AnsiString ConStr;
	FILE *file;
	ConStr="Provider=Microsoft.Jet.OLEDB.4.0;Data Source=";
	char Path[] = "base\\????????? ? ??????????.mdb";
	file=fopen(Path, "r");
	ConStr = ConStr + Path;
	ADOConnection1->ConnectionString=ConStr;
	ADOConnection1->Connected=true;
	ADOTable1->TableName="?????????";
	ADOTable1->Active=true;
	DBGrid1->Columns->Items[0]->Width=70;
	DBGrid1->Columns->Items[1]->Width=70;
	DBGrid1->Columns->Items[2]->Width=70;
	DBGrid1->Columns->Items[3]->Width=160;
	DBGrid1->Columns->Items[4]->Width=200;

	ADOConnection2->ConnectionString=ConStr;
	ADOConnection2->Connected=true;
	ADOTable2->TableName="??????????";
	ADOTable2->Active=true;
	DBGrid2->Columns->Items[0]->Width=70;
	DBGrid2->Columns->Items[1]->Width=70;
	DBGrid2->Columns->Items[2]->Width=160;
	DBGrid2->Columns->Items[3]->Width=160;
	DBGrid2->Columns->Items[4]->Width=50;
    DBGrid2->Columns->Items[5]->Width=80;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	Form1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
	ADOTable1->First();
	while (!ADOTable1->Eof)
	{
		Form4->ComboBox1->Items->Append(Form3->ADOTable1->Fields->FieldByName("ID ??????")->AsString);
		ADOTable1->Next();
	}
	Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
	if (MessageDlg("??????? ?????? ???",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
	ADOTable1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
	if (MessageDlg("??????? ?????? ???",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
	ADOTable2->Delete();
}
//---------------------------------------------------------------------------


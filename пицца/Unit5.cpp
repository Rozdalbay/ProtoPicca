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
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormCreate(TObject *Sender)
{
	AnsiString ConStr;
	FILE *file;
	ConStr="Provider=Microsoft.Jet.OLEDB.4.0;Data Source=";
	char Path[] = "base\\????????? ? ??????????.mdb";
	file=fopen(Path, "r");
	ConStr = ConStr + Path;
	ADOConnection1->ConnectionString=ConStr;
	ADOConnection1->Connected=true;
	ADOTable1->TableName="??????????";
	ADOTable1->Active=true;
	DBGrid1->Columns->Items[0]->Width=70;
	DBGrid1->Columns->Items[1]->Width=90;
	DBGrid1->Columns->Items[2]->Width=145;
	DBGrid1->Columns->Items[3]->Width=160;
	DBGrid1->Columns->Items[4]->Width=50;
	DBGrid1->Columns->Items[5]->Width=58;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	if (MessageDlg("????????????",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
	{
		ADOTable1->Edit();
		ADOTable1->FieldByName("?????????")->AsString="+";
		ADOTable1->Post();
	}
}
//---------------------------------------------------------------------------


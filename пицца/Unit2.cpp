//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	bool x = false;
	ADOTable1->First();
	while (!ADOTable1->Eof)
	{
		if (Edit1->Text==ADOTable1->FieldByName("Логин")->AsString
		&& MaskEdit1->Text==ADOTable1->FieldByName("Пароль")->AsString)
		{
			if (ADOTable1->FieldByName("Права")->AsString=="Admin")
			{
				Form2->Visible=false;
				Form3->ShowModal();
				x = true;
			}
			else
			{
				Form2->Visible=false;
				Form5->ShowModal();
				x = true;
			}
		}
		ADOTable1->Next();
	}
	if (x == false)
		MessageDlg("Неправильный логин или пароль", mtError, TMsgDlgButtons()<<mbOK, 0);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
	AnsiString ConStr;
	FILE *file;
	ConStr="Provider=Microsoft.Jet.OLEDB.4.0;Data Source=";
	char Path[] = "base\\Персонал.mdb";
	file=fopen(Path, "r");
	ConStr = ConStr + Path;
	ADOConnection1->ConnectionString=ConStr;
	ADOConnection1->Connected=true;
	ADOTable1->TableName="Персонал";
	ADOTable1->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form3->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::MaskEdit1KeyPress(TObject *Sender, System::WideChar &Key)

{
	if (Key==char(13))
		Button1->Click();
}
//---------------------------------------------------------------------------


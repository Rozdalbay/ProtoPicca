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
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if (Edit1->Text.Length()==0 || Edit2->Text.Length()==0 || Edit3->Text.Length()==0 || Edit4->Text.Length()==0)
	{
		MessageDlg("????????? ??? ????",mtInformation, TMsgDlgButtons()<<mbOK,0);
		return;
	}
	else
	{
		Form3->ADOTable1->Edit();
		Form3->ADOTable1->Append();
		Form3->ADOTable1->FieldByName("??? ?????????")->AsString=Edit1->Text;
		Form3->ADOTable1->FieldByName("????? ??????")->AsString=Edit2->Text;
		Form3->ADOTable1->FieldByName("????? ????????")->AsString=Edit3->Text;
		Form3->ADOTable1->FieldByName("?????")->AsString=Edit4->Text;
		Form3->ADOTable1->Post();
	}
}
//---------------------------------------------------------------------------


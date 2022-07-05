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
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	if (Edit1->Text.Length()==0 || Edit2->Text.Length()==0 || ComboBox1->Text.Length()==0)
	{
		MessageDlg("Заполните все поля",mtInformation, TMsgDlgButtons()<<mbOK,0);
		return;
	}
	else
	{
		Form3->ADOTable2->Edit();
		Form3->ADOTable2->Append();
		Form3->ADOTable2->FieldByName("Имя доставщика")->AsString=Edit1->Text;
		Form3->ADOTable2->FieldByName("Адрес доставки")->AsString=Edit2->Text;
		Form3->ADOTable2->FieldByName("ID заказа")->AsString=ComboBox1->Text;
		Form3->ADOTable2->FieldByName("Примерное время доставки")->AsString=Edit3->Text;
		Form3->ADOTable2->Post();
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *StartGame;
	TButton *Exit;
	TEdit *login;
	TEdit *password;
	TLabel *Label1;
	TLabel *Label2;
	TButton *log;
	TButton *registr;
	void __fastcall StartGameClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall registrClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

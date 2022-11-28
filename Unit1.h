//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
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
	TButton *logout;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TImage *Image1;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TTimer *Timer1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	void __fastcall StartGameClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall registrClick(TObject *Sender);
	void __fastcall logClick(TObject *Sender);
	void __fastcall logoutClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

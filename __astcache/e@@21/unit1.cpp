//---------------------------------------------------------------------------

#include <vcl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <io.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit2.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
void card2_comp();
void card2_pl();
struct profile
{
  char name [30];
  char parol[30];
  int win;
  int lose;
  int draw;
};

profile check;
FILE user_date;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StartGameClick(TObject *Sender)
{
 restart();
 Form2->Show();
 for (int i=0; i<4;i++)
 {
	for (int j=0; j<9; j++)
	{
	 pool[i][j]=1;
	}
 }


 card2_comp();
 card2_pl();
 card2_pl();
 Form1->Hide();
}
//---------------------------------------------------------------------------
void card2_comp()
{
 bool table(false);
 do
 {
	 hand_comp[pos_comp]=(rand() % 3)*10+rand()%8;
	 if (pool[hand_comp[pos_comp]/10][hand_comp[pos_comp]%10]==1)
	 {
		 pool[hand_comp[pos_comp]/10][hand_comp[pos_comp]%10] = 0;
		 table=true;
	 }

 }while (table==false);
 table=false;

 switch (pos_comp)
  {
	  case 0:
	  Form2->Image7->Picture->LoadFromFile("image\\"+ IntToStr(hand_comp[pos_comp]+11) +".bmp");
	  break;
	  default:
	  break;
  }
  score_comp+=score_card(hand_comp,pos_comp);
  Form2->Score_comp->Caption=score_comp;
  Form2->Image8->Picture->LoadFromFile("image\\100.bmp");
  left_hand_comp();

  pos_comp+=1;
}
//---------------------------------------------------------------------------
void card2_pl()
{
bool table(false);
 do
 {
  hand_player[pos_card]=(rand() % 3)*10+rand()%8;
  if (pool[hand_player[pos_card]/10][hand_player[pos_card]%10]==1)
  {
   pool[hand_player[pos_card]/10][hand_player[pos_card]%10] = 0;
   table=true;
  }

 }while (table==false);
 table=false;

 switch (pos_card)
  {
	  case 0:
	  Form2->Image1->Picture->LoadFromFile("image\\"+ IntToStr(hand_player[pos_card]+11) +".bmp");
	  break;
	  case 1:
	  Form2->Image2->Picture->LoadFromFile("image\\"+ IntToStr(hand_player[pos_card]+11) +".bmp");
	  left_hand();
	  break;
	  default:
	  break;
  }
  score_pl+=score_card(hand_player,pos_card);
  Form2->Score_player->Caption=score_pl;
  pos_card+=1;
 }
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitClick(TObject *Sender)
{
 Form1->Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::registrClick(TObject *Sender)
{
 int number(0);
 do
 {
  number++;
 }while(FileExists(IntToStr(number) + ".txt"));
 String file_space = (IntToStr(number) + ".txt");
 FileCreate(file_space);

 user_date = fopen(file_space);
}
//---------------------------------------------------------------------------


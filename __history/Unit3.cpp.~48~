//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit2.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
void card2_comp();
void card2_pl();

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::New_GameClick(TObject *Sender)
{
 restart();

 Form3->Close();
 card2_comp();
 card2_pl();
 card2_pl();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm3::Main_menuClick(TObject *Sender)
{
 result_main_menu();
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
	  case 1:
	  Form2->Image8->Picture->LoadFromFile("image\\"+ IntToStr(hand_comp[pos_comp]+11) +".bmp");
	  break;
	  case 2:
	  Form2->Image9->Picture->LoadFromFile("image\\"+ IntToStr(hand_comp[pos_comp]+11) +".bmp");
	  left_hand_comp();
	  break;
	  case 3:
	  Form2->Image10->Picture->LoadFromFile("image\\"+ IntToStr(hand_comp[pos_comp]+11) +".bmp");
	  left_hand_comp();
	  break;
	  case 4:
	  Form2->Image11->Picture->LoadFromFile("image\\"+ IntToStr(hand_comp[pos_comp]+11) +".bmp");
	  left_hand_comp();
	  break;
	  case 5:
	  Form2->Image12->Picture->LoadFromFile("image\\"+ IntToStr(hand_comp[pos_comp]+11) +".bmp");
	  left_hand_comp();
	  break;
	  default:
	  break;
  }
  score_comp+=score_card(hand_comp,pos_comp);
  Form2->Score_comp->Caption=score_comp;
  Form2->Image8->Picture->LoadFromFile("image\\100.bmp");
  left_hand_comp();
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

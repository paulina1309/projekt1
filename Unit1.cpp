//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        char a1, a2, a3, a4, a5, a6, a7, a8, a9;
        //a1,a2 pola w grze (ich zawartosc: a1='n'; nic lub'x' lub 'o')
        char kolej;
         void sprawdz()
         {
             if( (a1==a2 && a2==a3 && a1!='n' ) ||
                 (a4==a5 && a5==a6 && a4!='n' ) ||
                 (a7==a8 && a8==a9 && a8!='n' ) ||
                 (a1==a4 && a4==a7 && a1!='n' ) ||
                 (a2==a5 && a5==a8 && a2!='n' ) ||
                 (a3==a6 && a6==a9 && a3!='n' ) ||
                 (a1==a5 && a5==a9 && a1!='n' ) ||
                 (a3==a5 && a5==a7 && a3!='n' ) )

              {
                char * w;
                if(kolej=='x') w="wygrywa k�ko";
                else w="wygrywa krzy�yk";

                Application->MessageBoxA(w, "koniec gry!", MB_OK) ;
              }
          }
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
obszar1->Picture->LoadFromFile("obrazy/nic.bmp");
obszar2->Picture->LoadFromFile("obrazy/nic.bmp");
obszar3->Picture->LoadFromFile("obrazy/nic.bmp");
obszar4->Picture->LoadFromFile("obrazy/nic.bmp");
obszar5->Picture->LoadFromFile("obrazy/nic.bmp");
obszar6->Picture->LoadFromFile("obrazy/nic.bmp");
obszar7->Picture->LoadFromFile("obrazy/nic.bmp");
obszar8->Picture->LoadFromFile("obrazy/nic.bmp");
obszar9->Picture->LoadFromFile("obrazy/nic.bmp");
Image1->Picture->LoadFromFile("obrazy/osmall.bmp");


    a1='n'; a4='n'; a7='n';
    a2='n'; a5='n'; a8='n';
    a3='n'; a6='n'; a9='n';

    kolej='o';

    obszar1->Enabled = true;
    obszar2->Enabled = true;
    obszar3->Enabled = true;
    obszar4->Enabled = true;
    obszar5->Enabled = true;
    obszar6->Enabled = true;
    obszar7->Enabled = true;
    obszar8->Enabled = true;
    obszar9->Enabled = true;




}
//---------------------------------------------------------------------------
void __fastcall TForm1::obszar1Click(TObject *Sender)
{
        if (a1=='n')
        {
             if (kolej=='o')
               {
                   obszar1->Picture->LoadFromFile("obrazy/o.bmp");
                   a1='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar1->Picture->LoadFromFile("obrazy/x.bmp");
                   a1='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar1->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar2Click(TObject *Sender)
{
     if (a2=='n')
        {
             if (kolej=='o')
               {
                   obszar2->Picture->LoadFromFile("obrazy/o.bmp");
                   a2='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar2->Picture->LoadFromFile("obrazy/x.bmp");
                   a2='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar2->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar3Click(TObject *Sender)
{
if (a3=='n')
        {
             if (kolej=='o')
               {
                   obszar3->Picture->LoadFromFile("obrazy/o.bmp");
                   a3='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar3->Picture->LoadFromFile("obrazy/x.bmp");
                   a3='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar3->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar4Click(TObject *Sender)
{
if (a4=='n')
        {
             if (kolej=='o')
               {
                   obszar4->Picture->LoadFromFile("obrazy/o.bmp");
                   a4='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar4->Picture->LoadFromFile("obrazy/x.bmp");
                   a4='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar4->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar5Click(TObject *Sender)
{
if (a5=='n')
        {
             if (kolej=='o')
               {
                   obszar5->Picture->LoadFromFile("obrazy/o.bmp");
                   a5='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar5->Picture->LoadFromFile("obrazy/x.bmp");
                   a5='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar5->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar6Click(TObject *Sender)
{
if (a6=='n')
        {
             if (kolej=='o')
               {
                   obszar6->Picture->LoadFromFile("obrazy/o.bmp");
                   a6='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar6->Picture->LoadFromFile("obrazy/x.bmp");
                   a6='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar6->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar7Click(TObject *Sender)
{
if (a7=='n')
        {
             if (kolej=='o')
               {
                   obszar7->Picture->LoadFromFile("obrazy/o.bmp");
                   a7='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar7->Picture->LoadFromFile("obrazy/x.bmp");
                   a7='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar7->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar8Click(TObject *Sender)
{
if (a8=='n')
        {
             if (kolej=='o')
               {
                   obszar8->Picture->LoadFromFile("obrazy/o.bmp");
                   a8='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar8->Picture->LoadFromFile("obrazy/x.bmp");
                   a8='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar8->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::obszar9Click(TObject *Sender)
{
      if (a9=='n')
        {
             if (kolej=='o')
               {
                   obszar9->Picture->LoadFromFile("obrazy/o.bmp");
                   a9='o';
                   kolej='x';
                   Image1->Picture->LoadFromFile("obrazy/xsmall.bmp");
               }

              else
              {
                  obszar9->Picture->LoadFromFile("obrazy/x.bmp");
                   a9='x';
                   kolej='o';
                   Image1->Picture->LoadFromFile("obrazy/osmall.bmp");

               }
                    obszar9->Enabled=false;
                    sprawdz();

               }
}
//---------------------------------------------------------------------------


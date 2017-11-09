//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *obszar1;
        TImage *obszar2;
        TImage *obszar3;
        TImage *obszar4;
        TImage *obszar5;
        TImage *obszar6;
        TImage *obszar7;
        TImage *obszar8;
        TImage *obszar9;
        TLabel *kolejka;
        TImage *Image1;
        TButton *Button1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall obszar1Click(TObject *Sender);
        void __fastcall obszar2Click(TObject *Sender);
        void __fastcall obszar3Click(TObject *Sender);
        void __fastcall obszar4Click(TObject *Sender);
        void __fastcall obszar5Click(TObject *Sender);
        void __fastcall obszar6Click(TObject *Sender);
        void __fastcall obszar7Click(TObject *Sender);
        void __fastcall obszar8Click(TObject *Sender);
        void __fastcall obszar9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef huttonH
#define huttonH
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
	TLabeledEdit *inputPlaintext;
	TLabeledEdit *inputCiphertext;
	TLabeledEdit *inputAlphabetKey;
	TLabeledEdit *inputPassword;
	TLabeledEdit *inputAlphabetKeyed;
	TButton *buttonEncrypt;
	TButton *buttonDecrypt;
	void __fastcall buttonEncryptClick(TObject *Sender);
	void __fastcall inputAlphabetKeyChange(TObject *Sender);
	void __fastcall buttonDecryptClick(TObject *Sender);
	void __fastcall inputPlaintextChange(TObject *Sender);
	void __fastcall inputCiphertextChange(TObject *Sender);
	void __fastcall inputPasswordChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

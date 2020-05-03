//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hutton.h"
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
String prepKey(String key) {
	String newKey;
	for (int i = 1; i <= key.Length(); i++) {
		if (newKey.Pos(key[i]) == 0)
		newKey += key[i];
	}
	return newKey;
}

String keyAlphabet(String key) {
	String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 1; i <= alphabet.Length(); i++) {
		if (key.Pos(alphabet[i]) == 0)
		key += alphabet[i];
	}
	return key;
}

String hutton(Boolean decrypt, String plaintext, String password, String key) {
	String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	String ciphertext;
	while (password.Length() < plaintext.Length()) password += password;

	for (int i = 1; i <= plaintext.Length(); i++) {

		int shift = alphabet.Pos(password[i]) + alphabet.Pos(key[1]);
        if (decrypt) shift = -shift;

		int ctIdx = shift + key.Pos(plaintext[i]);

		while (ctIdx > 26) ctIdx -= 26;
		while (ctIdx < 1) ctIdx += 26;

		ciphertext += key[ctIdx];

		// swap pt & ct in k
		int pt_ = key.Pos(plaintext[i]);
		WideChar pt = key[pt_];

		int ct_ = key.Pos(ciphertext[i]);
		WideChar ct = key[ct_];

		key[pt_] = ct;
		key[ct_] = pt;
	}
	return ciphertext;
}


void __fastcall TForm1::buttonEncryptClick(TObject *Sender)
{
	String plaintext = inputPlaintext->Text.UpperCase();
	plaintext = StringReplace(plaintext, _D(" "), _D(""), TReplaceFlags() << rfReplaceAll);
	String key = prepKey(
		StringReplace(inputAlphabetKey->Text.UpperCase(), _D(" "), _D(""), TReplaceFlags() << rfReplaceAll)
	);
	key = keyAlphabet(key);
	inputAlphabetKeyed->Text = key;
	String password = inputPassword->Text.UpperCase();
	password = StringReplace(password, _D(" "), _D(""), TReplaceFlags() << rfReplaceAll);
	String ciphertext = hutton(false, plaintext, password, key);
	inputCiphertext->Text = ciphertext;
}

void __fastcall TForm1::inputAlphabetKeyChange(TObject *Sender)
{
	//inputAlphabetKey->Text = inputAlphabetKey->Text.UpperCase();
}
void __fastcall TForm1::buttonDecryptClick(TObject *Sender)
{
	String plaintext = inputCiphertext->Text.UpperCase();
	String key = prepKey(inputAlphabetKey->Text.UpperCase());
	key = keyAlphabet(key);
	inputAlphabetKeyed->Text = key;
	String password = inputPassword->Text.UpperCase();
	String ciphertext = hutton(true, plaintext, password, key);
	inputPlaintext->Text = ciphertext;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::inputPlaintextChange(TObject *Sender)
{
	//inputPlaintext->Text = inputPlaintext->Text.UpperCase();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::inputCiphertextChange(TObject *Sender)
{
	//inputCiphertext->Text = inputCiphertext->Text.UpperCase();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::inputPasswordChange(TObject *Sender)
{
   //inputPassword->Text = inputPassword->Text.UpperCase();
}
//---------------------------------------------------------------------------


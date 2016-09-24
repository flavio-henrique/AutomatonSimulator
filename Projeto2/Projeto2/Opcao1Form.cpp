#include "Opcao1Form.h"

using namespace Projeto2;

int Opcao1Form::getStatus(){
	return Status;
}

void Opcao1Form::setStatus(int UmStatus){
	Status = UmStatus;
}


void Opcao1Form::setResposta(bool UmaResposta){
	Resposta = UmaResposta;
}

void Opcao1Form::setLabel(string UmNome)
{
	String ^ Texto = gcnew String(UmNome.c_str());
	textBox2->Text = Texto;
	delete(Texto);
}

string Opcao1Form::getPalavra(){
	string Palavra;
	MarshalString(textBox1->Text, Palavra);

	return Palavra;
}
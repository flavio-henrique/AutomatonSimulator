#include "TesteAutomatoForm.h"

using namespace AS;

int TesteAutomatoForm::getStatus(){
	return Status;
}

void TesteAutomatoForm::setStatus(int valor){
	Status = valor;
}

string TesteAutomatoForm::getPalavra(){
	string Palavra;

	MarshalString(textBox1->Text, Palavra);

	return Palavra;
}


void TesteAutomatoForm::setLabel(string label){
	String ^ Texto = gcnew String(label.c_str());
	label1->Text = Texto;
	delete(Texto);
}

bool TesteAutomatoForm::testarAF(){
	Automato af;
	return af.testeAutomato1(getPalavra());
}

void TesteAutomatoForm::setImagemEstado(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	pictureBox1->Image = Image::FromFile(path);
	delete(path);
}

void TesteAutomatoForm::setProxEstado(bool valor){
	proxEstado = valor;
}

bool TesteAutomatoForm::getProxEstado(){
	return proxEstado;
}



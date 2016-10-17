#include "TesteAutomatoPorta.h"

using namespace AS;

int TesteAutomatoPorta::getStatus(){
	return Status;
}

void TesteAutomatoPorta::setStatus(int valor){
	Status = valor;
}

void TesteAutomatoPorta::setImagemPorta(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	boxImagemPorta->Image = Image::FromFile(path);
	delete(path);
}

void TesteAutomatoPorta::setImagemEstado(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	boxAutomato->Image = Image::FromFile(path);
	delete(path);
}

void TesteAutomatoPorta::unsetImagemResultado(){
	if (resultado->Image != nullptr)
	{
		//resultado->Image->Dispose();
		resultado->Image = nullptr;
	}
}


void TesteAutomatoPorta::setImagemResultado(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	resultado->Image = Image::FromFile(path);
	delete(path);
}

string TesteAutomatoPorta::getPalavra(){
	string palavra;
	if ((frente && retaguarda) || frente || retaguarda){
		palavra = "a";
	}
	else{
		palavra = "b";
	}
	return palavra;
}


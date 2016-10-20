#include "TesteAutomatoTorneira.h"


using namespace AS;

int TesteAutomatoTorneira::getStatus(){
	return Status;
}

void TesteAutomatoTorneira::setStatus(int valor){
	Status = valor;
}

void TesteAutomatoTorneira::setImagemTorneira(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	boxImagemPorta->Image = Image::FromFile(path);
	delete(path);
}

void TesteAutomatoTorneira::setImagemEstado(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	boxAutomato->Image = Image::FromFile(path);
	delete(path);
}

void TesteAutomatoTorneira::unsetImagemResultado(){
	if (resultado->Image != nullptr)
	{
		//resultado->Image->Dispose();
		resultado->Image = nullptr;
	}
}


void TesteAutomatoTorneira::setImagemResultado(string caminho){

	String ^ path = gcnew String(caminho.c_str());
	resultado->Image = Image::FromFile(path);
	delete(path);
}

string TesteAutomatoTorneira::getPalavra(){
	string palavra;
	if (!acionado){
		palavra = "a";
	}
	else{
		palavra = "b";
	}
	return palavra;
}




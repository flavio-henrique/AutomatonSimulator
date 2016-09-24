#include "TesteAutomato1.h"

using namespace AutomatonSimulator;



int TesteAutomato1::getStatus() {
	return Status;
}

void TesteAutomato1::setStatus(int UmStatus) {
	Status = UmStatus;
}


void TesteAutomato1::setResposta(bool UmaResposta) {
	Resposta = UmaResposta;
}

void TesteAutomato1::setLabel(string UmNome)
{
	String ^ Texto = gcnew String(UmNome.c_str());
	textBox2->Text = Texto;
	delete(Texto);
}

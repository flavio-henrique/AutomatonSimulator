#include "Automato.h"

Automato::Automato(){

}

Automato::~Automato(){

}

ponteiro Automato::automato1(){
	string imagemEstado0 = "C:\\AS/images/automato1/estado0.png";
	string imagemEstado1 = "C:\\AS/images/automato1/estado1.png";
	string imagemEstado2 = "C:\\AS/images/automato1/estado2.png";

	ponteiro Q0 = criaEstado("Q0", false, imagemEstado0);
	ponteiro Q1 = criaEstado("Q1", false, imagemEstado1);
	ponteiro Q2 = criaEstado("Q2", false, imagemEstado2);

	Q0->transicoes[0].simboloAceito = 'a';
	Q0->transicoes[0].link = Q1;

	Q1->transicoes[0].simboloAceito = 'a';
	Q1->transicoes[0].link = Q0;
	Q1->transicoes[1].simboloAceito = 'b';
	Q1->transicoes[1].link = Q2;

	Q2->transicoes[0].simboloAceito = 'b';
	Q2->transicoes[0].link = Q1;
	Q2->isFinal = true;
	
	return Q0;
}

ponteiro Automato::criaEstado(string nome, bool isFinal, string imagem){
	ponteiro estado = (ponteiro) new struct Elementos;
	estado->nomeEstado = nome;
	estado->isFinal = isFinal;
	estado->imagem = imagem;
	return estado;
}

void Automato::sleepcp(int milliseconds) // cross-platform sleep function
{
	clock_t time_end;
	time_end = clock() + milliseconds * CLOCKS_PER_SEC / 1000;
	while (clock() < time_end)
	{
	}
}

bool Automato::testeAutomato1(string palavra){
	ponteiro aux;
	aux = automato1();
	int i, j;
	bool resultado = true;

	AS::TesteAutomatoForm testeAF;

	testeAF.setImagemEstado(aux->imagem);

	for (i = 0; i < palavra.size(); i++){
		for (j = 0; j < 10; j++){
			if (aux->transicoes[j].simboloAceito == palavra[i]){
				//sleepcp(1000);
				//while (!testeAF.getProxEstado()){
				//}
				aux = aux->transicoes[j].link;
				//testeAF.setImagemEstado(aux->imagem);
				break;
			}
		}
		if (j == 10){
			resultado = false;
			break;
		}
	}
	if (resultado && aux->isFinal == false){
		resultado = false;
	}
	return resultado;

}
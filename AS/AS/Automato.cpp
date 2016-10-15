#include "Automato.h"

Automato::Automato(){

}

Automato::~Automato(){

}

ponteiro Automato::automato1(){

	string imagemInicial = "D:\\Automaton Simulator/AutomatonSimulator/AS/images/automato1/original.png";
	string imagemEstado0 = "D:\\Automaton Simulator/AutomatonSimulator/AS/images/automato1/estado0.png";
	string imagemEstado1 = "D:\\Automaton Simulator/AutomatonSimulator/AS/images/automato1/estado1.png";
	string imagemEstado2 = "D:\\Automaton Simulator/AutomatonSimulator/AS/images/automato1/estado2.png";

	ponteiro Q0 = criaEstado("Q0", false, imagemEstado0);
	ponteiro Q1 = criaEstado("Q1", false, imagemEstado1);
	ponteiro Q2 = criaEstado("Q2", false, imagemEstado2);

	Q0->imagemInicial = imagemInicial;
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




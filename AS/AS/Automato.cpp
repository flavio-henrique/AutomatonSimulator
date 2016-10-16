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
	Q1->transicoes[1].simboloAceito = 'a';
	Q1->transicoes[1].link = Q1;

	Q0->transicoes[0].simboloAceito = 'b';
	Q0->transicoes[0].link = Q1;
	Q1->transicoes[0].simboloAceito = 'b';
	Q1->transicoes[0].link = Q1;
	
	Q0->transicoes[1].simboloAceito = 'c';
	Q0->transicoes[1].link = Q1;
	Q1->transicoes[1].simboloAceito = 'c';
	Q1->transicoes[1].link = Q1;
	
	Q1->transicoes[0].simboloAceito = 'n';
	Q1->transicoes[0].link = Q0;
	Q0->transicoes[0].simboloAceito = 'n';
	Q0->transicoes[0].link = Q0;

	Q1->isFinal = true;
	
	return Q0;
}

ponteiro Automato::criaEstado(string nome, bool isFinal, string imagem){
	ponteiro estado = (ponteiro) new struct Elementos;
	estado->nomeEstado = nome;
	estado->isFinal = isFinal;
	estado->imagem = imagem;
	return estado;
}

ponteiro Automato::automato2(){
	string ImagemInicial="D:\Automaton Simulator\AutomatonSimulator\AS\images\automato2\1.gif";
	string ImagemEstado0="D:\Automaton Simulator\AutomatonSimulator\AS\images\automato2\2.gif";
	string ImagemEstado1="D:\Automaton Simulator\AutomatonSimulator\AS\images\automato2\3.gif";
	string ImagemEStado2="D:\Automaton Simulator\AutomatonSimulator\AS\images\automato2\4.gif";

	ponteiro Q0 = criaEstado("Q0", false, ImagemEstado0);
	ponteiro Q1 = criaEstado("Q1", false, ImagemEstado1);
	ponteiro Q2 = criaEstado("Q2", true, ImagemEStado2);


}


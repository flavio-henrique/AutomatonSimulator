#include "Automato.h"

Automato::Automato(){

}

Automato::~Automato(){

}

string Automato::getDiretorio(){
	string result;
	TCHAR NPath[MAX_PATH];

	GetCurrentDirectory(MAX_PATH, NPath);
	result = NPath;
	result = result + "/../";
	replace(result.begin(), result.end(), '\\', '/');
	result[2] = '\\';
	return result;
}

ponteiro Automato::automato1(){

	string imagemInicial = getDiretorio() + "images/automato1/original.png";
	string imagemEstado0 = getDiretorio() + "images/automato1/estado0.png";
	string imagemEstado1 = getDiretorio() +  "images/automato1/estado1.png";
	string imagemEstado2 = getDiretorio() + "images/automato1/estado2.png";

	ponteiro Q0 = criaEstado("Q0", false, imagemEstado0);
	ponteiro Q1 = criaEstado("Q1", false, imagemEstado1);
	ponteiro Q2 = criaEstado("Q2", true, imagemEstado2);

	Q0->imagemInicial = imagemInicial;
	
	Q0->transicoes[0].simboloAceito = 'a';
	Q0->transicoes[0].link = Q1;
	Q1->transicoes[1].simboloAceito = 'a';
	Q1->transicoes[1].link = Q0;

	Q1->transicoes[0].simboloAceito = 'b';
	Q1->transicoes[0].link = Q2;
	Q2->transicoes[0].simboloAceito = 'b';
	Q2->transicoes[0].link = Q1;
	
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
	string ImagemInicial = getDiretorio() + "images/automato2/1.gif";
	string ImagemEstado0 = getDiretorio() + "images/automato2/2.gif";
	string ImagemEstado1 = getDiretorio() + "images/automato2/3.gif";
	string ImagemEStado2 = getDiretorio() + "images/automato2/4.gif";

	ponteiro Q0 = criaEstado("Q0", false, ImagemEstado0);
	ponteiro Q1 = criaEstado("Q1", false, ImagemEstado1);
	ponteiro Q2 = criaEstado("Q2", true, ImagemEStado2);

	Q0->imagemInicial = ImagemInicial;

	Q0->transicoes[0].simboloAceito = 'a';
	Q0->transicoes[0].link = Q1;
	Q0->transicoes[1].simboloAceito = 'b';
	Q0->transicoes[1].link = Q0;

	Q1->transicoes[0].simboloAceito = 'a';
	Q1->transicoes[0].link = Q2;
	Q1->transicoes[1].simboloAceito = 'b';
	Q1->transicoes[1].link = Q0;

	Q2->transicoes[0].simboloAceito = 'a';
	Q2->transicoes[0].link = Q2;
	Q2->transicoes[1].simboloAceito = 'b';
	Q2->transicoes[1].link = Q0; 

	return  Q0;
}


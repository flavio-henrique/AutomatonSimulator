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
	string ImagemInicial = getDiretorio() + "images/automato2/automatoOriginal.png";
	string ImagemEstado0 = getDiretorio() + "images/automato2/estado0.png";
	string ImagemEstado1 = getDiretorio() + "images/automato2/estado1.png";
	string ImagemEStado2 = getDiretorio() + "images/automato2/estado2.png";

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

ponteiro Automato::automato3(){
	string ImagemInicial = getDiretorio() + "images/automatoPorta/automatoPortaFechadaOriginal.png";
	string ImagemEstado0 = getDiretorio() + "images/automatoPorta/automatoPortaEstado0.png";
	string ImagemEstado1 = getDiretorio() + "images/automatoPorta/automatoPortaEstado1.png";

	ponteiro Q0 = criaEstado("Q0", false, ImagemEstado0);
	ponteiro Q1 = criaEstado("Q1", true, ImagemEstado1);

	Q0->imagemInicial = ImagemInicial;

	Q0->transicoes[0].simboloAceito = 'a';
	Q0->transicoes[0].link = Q1;
	Q0->transicoes[1].simboloAceito = 'b';
	Q0->transicoes[1].link = Q0;

	return  Q0;
}

ponteiro Automato::automato4(){
	string ImagemInicial = getDiretorio() + "images/automato4/automato.png";
	string ImagemEstado0 = getDiretorio() + "images/automato4/estado0.png";
	string ImagemEstado1 = getDiretorio() + "images/automato4/estado1.png";
	string ImagemEstado2 = getDiretorio() + "images/automato4/estado2.png";
	string ImagemEstado3 = getDiretorio() + "images/automato4/estado3.png";
	string ImagemEstado4 = getDiretorio() + "images/automato4/estado4.png";
	string ImagemEstado5 = getDiretorio() + "images/automato4/estado5.png";
	string ImagemEstado6 = getDiretorio() + "images/automato4/estado6.png";

	ponteiro Q0 = criaEstado("Q0", false, ImagemEstado0);
	ponteiro Q1 = criaEstado("Q1", false, ImagemEstado1);
	ponteiro Q2 = criaEstado("Q2", false, ImagemEstado2);
	ponteiro Q3 = criaEstado("Q3", false, ImagemEstado3);
	ponteiro Q4 = criaEstado("Q4", false, ImagemEstado4);
	ponteiro Q5 = criaEstado("Q5", false, ImagemEstado5);
	ponteiro Q6 = criaEstado("Q6", true, ImagemEstado6);

	Q0->imagemInicial = ImagemInicial;

	Q0->transicoes[0].simboloAceito = 'p';
	Q0->transicoes[0].link = Q1;

	Q1->transicoes[0].simboloAceito = 'r';
	Q1->transicoes[0].link = Q2;

	Q2->transicoes[0].simboloAceito = 'i';
	Q2->transicoes[0].link = Q3;

	Q3->transicoes[0].simboloAceito = 'n';
	Q3->transicoes[0].link = Q4;

	Q4->transicoes[0].simboloAceito = 't';
	Q4->transicoes[0].link = Q5;

	Q5->transicoes[0].simboloAceito = 'f';
	Q5->transicoes[0].link = Q6;

	return  Q0;
}

ponteiro Automato::automato5(){
	string ImagemInicial = getDiretorio() + "images/automatoTorneira/automatoTorneiraOriginal.png";
	string ImagemEstado0 = getDiretorio() + "images/automatoTorneira/automatoTorneiraEstado0.png";
	string ImagemEstado1 = getDiretorio() + "images/automatoTorneira/automatoTorneiraEstado1.png";

	ponteiro Q0 = criaEstado("Q0", false, ImagemEstado0);
	ponteiro Q1 = criaEstado("Q1", true, ImagemEstado1);

	Q0->imagemInicial = ImagemInicial;

	Q0->transicoes[0].simboloAceito = 'a';
	Q0->transicoes[0].link = Q1;
	Q0->transicoes[1].simboloAceito = 'b';
	Q0->transicoes[1].link = Q0;

	return  Q0;
}
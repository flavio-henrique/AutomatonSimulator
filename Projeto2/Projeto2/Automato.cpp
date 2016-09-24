#include "Automato.h"


Automato::Automato()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			regra[i][j] = '\0';
		}
	}
	regra[0][1] = 'a';
	regra[0][3] = 'b';
	regra[1][1] = 'b';
	regra[1][2] = 'a';
	regra[3][2] = 'b';
	regra[3][3] = 'a';
	EstadoInicial = 0;
	EstadoFinal = 2;
	EstadoAtual = -1;
}


Automato::~Automato()
{
}

bool Automato::verificarPalavra(string Palavra){
	bool Resposta = false;
	int Leitura = 0;
	EstadoAtual = EstadoInicial;
	for (int i = 0; i < Palavra.size(); ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (Palavra[i] == regra[EstadoAtual][j]){
				EstadoAtual = j;
				break;
			}
		}
		if (EstadoAtual == EstadoFinal){
			Leitura = i;
			break;
		}
		
	}
	if (EstadoAtual == EstadoFinal && Leitura == Palavra.size()-1){
		Resposta = true;
	}

	return Resposta;
}
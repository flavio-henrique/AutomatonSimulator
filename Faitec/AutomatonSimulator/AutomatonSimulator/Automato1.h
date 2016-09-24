#ifndef Automato1H
#define Automato1H

#include <iostream>
using namespace std;
#include <string>


class Automato1
{
private:
	char regra[4][4];
	int EstadoInicial;
	int EstadoFinal;
	int EstadoAtual;
public:
	Automato1();
	~Automato1();
	bool verificarPalavra(string);

};

#endif 
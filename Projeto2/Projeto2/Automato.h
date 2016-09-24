#ifndef AutomatoH
#define AutomatoH

#include <iostream>
using namespace std;
#include <string>

class Automato
{
private:
	char regra[4][4];
	int EstadoInicial;
	int EstadoFinal;
	int EstadoAtual;
public:
	Automato();
	~Automato();
	bool verificarPalavra(string);
};
#endif


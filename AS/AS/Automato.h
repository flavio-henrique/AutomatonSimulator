#ifndef AutomatoH
#define AutomatoH

#include <iostream>
using namespace std;
#include <string>
#include "TesteAutomatoForm.h"
#include <time.h>

typedef struct Elementos * ponteiro;
typedef struct {
	ponteiro link;
	char simboloAceito;
}Transicoes;
struct Elementos{
	string nomeEstado;
	string imagem;
	bool isFinal;
	Transicoes transicoes[10];
};

class Automato {
	
private:

public:
	Automato();
	~Automato();
	ponteiro automato1();
	void sleepcp(int milliseconds); // cross-platform sleep function
	bool testeAutomato1(string);
	ponteiro criaEstado(string, bool, string);
};
#endif


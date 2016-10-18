#ifndef AutomatoH
#define AutomatoH

#include <iostream>
using namespace std;
#include <string>
#include <time.h>
#include <windows.h>
#include <algorithm>

typedef struct Elementos * ponteiro;
typedef struct {
	ponteiro link;
	char simboloAceito;
}Transicoes;
struct Elementos{
	string nomeEstado;
	string imagem;
	string imagemInicial;
	bool isFinal;
	Transicoes transicoes[10];
};

class Automato {
	
private:
public:
	Automato();
	~Automato();
	ponteiro automato1();
	ponteiro criaEstado(string, bool, string);
	ponteiro automato2();
	ponteiro automato3();
	ponteiro automato4();
	string getDiretorio();
	
};
#endif


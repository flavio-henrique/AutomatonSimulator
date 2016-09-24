#pragma once
#ifndef ControleH
#define ControleH

#include <iostream>
using namespace std;
#include <string>
#include "TelaMenu.h"
#include "TelaRegras.h"
#include"TelaSobre.h"
#include "TelaRegra1.h"
#include "TelaRegra2.h"
#include "TelaRegra3.h"
#include"Automato1.h"
#include "TesteAutomato1.h"
using namespace System::Windows::Forms;

class Controle {
private:
public:
	Controle();
	~Controle();
	void controlarExecucao(void);
};
#endif


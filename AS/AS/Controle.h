#pragma once
#ifndef ControleH
#define ControleH

#include <iostream>
using namespace std;
#include <string>
#include "MenuAS.h"
#include "FormListaAutomato.h"
#include "TesteAutomatoForm.h"
#include "Automato.h"

using namespace System;
using namespace System::Windows::Forms;

class Controle {
private:
	bool Resposta;
public:
	Controle();
	~Controle();
	void controlarExecucao(void);
};
#endif


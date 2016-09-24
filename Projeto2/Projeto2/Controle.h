#ifndef ControleH
#define ControleH
#include <iostream>
using namespace std;
#include <string>
using namespace System;
using namespace System::Windows::Forms;
#include "MenuForm.h"
#include "Opcao1Form.h"
#include "Opcao2Form.h"
#include "Opcao3Form.h"
#include "Automato.h"

class Controle
{
private:

public:
	Controle();
	~Controle();
	void controlarExecucao(void);
};

#endif 

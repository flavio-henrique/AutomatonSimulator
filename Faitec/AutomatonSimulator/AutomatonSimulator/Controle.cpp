#include "Controle.h"


Controle::Controle() {

}

Controle::~Controle() {

}

void Controle::controlarExecucao(void) {
	AutomatonSimulator::TelaMenu tm;
	AutomatonSimulator::TelaRegras tr;
	AutomatonSimulator::TelaSobre ts;
	AutomatonSimulator::TelaRegra1 tr1;
	AutomatonSimulator::TelaRegra2 tr2;
	AutomatonSimulator::TelaRegra3 tr3;
	AutomatonSimulator::TesteAutomato1 ta1;
	Automato1 a;
	while (tm.getStatus() != 0)
	{
		tm.ShowDialog();
		switch (tm.getStatus())
		{
		case 0:
			break;
		case 1:
			while (tr.getStatus() != 0) {
				tr.ShowDialog();
				switch (tr.getStatus())
				{
				case 0:
					break;
				case 1: 
					while (ta1.getStatus() != 0) {
						ta1.ShowDialog();
						switch (ta1.getStatus())
						{
						case 0:
							break;
						case 1:
							Resposta = a.verificarPalavra(ta1.getPalavra());
							if (Resposta) {
								ta1.setLabel("Aceita");
							}
							else {
								ta1.setLabel("Rejeita");
							}
							break;
						default:
							break;
						}

					}
					of1.setStatus(-1);
					break;
				case 2:
					tr2.ShowDialog();
					break;
				case 3:
					tr3.ShowDialog();
					break;
				default:
					break;
				}
			}
			tr.setStatus(-1);

			break;
		case 2:
			ts.ShowDialog();
			break;
		case 3:
			break;
		default:
			break;
		}
	}

}
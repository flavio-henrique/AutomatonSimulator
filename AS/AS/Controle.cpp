#include "Controle.h"

Controle::Controle(){

}

Controle::~Controle(){

}

void Controle::controlarExecucao(void){
	AS::MenuAS menu;
	AS::FormListaAutomato listaAutomato;
	AS::SobreAs sobre;
	Automato automato;

	bool Resultado;

	while (menu.getStatus() != 0){
		menu.ShowDialog();
		switch (menu.getStatus()){
		case 1:
			while (listaAutomato.getStatus() != 0){
				listaAutomato.ShowDialog();

				switch (listaAutomato.getStatus())
				{
				case 1:
					AS::TesteAutomatoForm teste(1);
					while (teste.getStatus() != 0){
						teste.setStatus(1);
						teste.ShowDialog();
					}
					teste.setStatus(-1);
					break;
				}
			}
			listaAutomato.setStatus(-1);
			break;
		case 2:
			sobre.ShowDialog();
		default:
			break;
		}

	}
}
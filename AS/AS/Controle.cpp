#include "Controle.h"

Controle::Controle(){

}

Controle::~Controle(){

}

void Controle::controlarExecucao(void){
	AS::MenuAS menu;
	AS::FormListaAutomato listaAutomato;
	AS::TesteAutomatoForm teste;
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
					while (teste.getStatus() != 0){
						teste.ShowDialog();

						switch (teste.getStatus())
						{
						case 1:
							Resultado = automato.testeAutomato1(teste.getPalavra());
							if (Resultado){
								teste.setLabel("Aceita");
							}
							else{
								teste.setLabel("Rejeita");
							}
							break;	
						}
					}
					teste.setStatus(-1);
					break;
				}
			}
			listaAutomato.setStatus(-1);
			break;
		default:
			break;
		}

	}
}
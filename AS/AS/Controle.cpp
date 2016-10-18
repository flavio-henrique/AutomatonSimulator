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
	AS::SobreAutomato1Form sobreAF1;
	AS::SobreAutomato4 sobreAF4;

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
					
					while (sobreAF1.getStatus() != 0){
						sobreAF1.ShowDialog();

						switch (sobreAF1.getStatus()){
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
					sobreAF1.setStatus(-1);
					break;
				case 2:
					
					while (sobreAF1.getStatus() != 0){
						sobreAF1.ShowDialog();
						switch (sobreAF1.getStatus()){
						case 1:
							AS::TesteAutomatoForm teste2(2);
							while (teste2.getStatus() != 0){
								teste2.setStatus(1);
								teste2.ShowDialog();
							}
							teste2.setStatus(-1);
							break;
						}
					}
					sobreAF1.setStatus(-1);
					break;
				case 3:
					while (sobreAF1.getStatus() != 0){
						sobreAF1.ShowDialog();
						switch (sobreAF1.getStatus()){
						case 1:
							AS::TesteAutomatoPorta testeAFPorta;
							while (testeAFPorta.getStatus() != 0){
								testeAFPorta.setStatus(1);
								testeAFPorta.ShowDialog();
							}
							testeAFPorta.setStatus(-1);
							break;
						}
					}
					sobreAF1.setStatus(-1);
					break;
				case 4:

					while (sobreAF4.getStatus() != 0){
						sobreAF4.ShowDialog();

						switch (sobreAF4.getStatus()){
						case 1:
							AS::TesteAutomatoForm teste(4);
							while (teste.getStatus() != 0){
								teste.setStatus(1);
								teste.ShowDialog();
							}
							teste.setStatus(-1);
							break;
						}
					}
					sobreAF4.setStatus(-1);
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
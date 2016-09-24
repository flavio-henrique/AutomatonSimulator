#include "Controle.h"


Controle::Controle()
{

}

Controle::~Controle()
{


}

void Controle::controlarExecucao(void)
{
	Projeto2::MenuForm mf;
	Projeto2::Opcao1Form of1;
	Projeto2::Opcao2Form of2;
	Projeto2::Opcao3Form of3;
	Automato a;
	bool Resposta;

	while (mf.getStatus() != 0){
		mf.ShowDialog();
		switch (mf.getStatus())
		{
		case 0:
			break;
		case 1:
			//of1.setResposta(NULL);
			while (of1.getStatus() != 0){
				of1.ShowDialog();
				switch (of1.getStatus())
				{
				case 0:
					break;
				case 1:
					Resposta = a.verificarPalavra(of1.getPalavra());
					if (Resposta){
						of1.setLabel("Aceita");
					}
					else{
						of1.setLabel("Rejeita");
					}
					break;
				default:
					break;
				}

			}
			of1.setStatus(-1);
			break;
		case 2:
			of2.ShowDialog();
			break;
		case 3:
			of3.ShowDialog();
			break;
		default:
			break;
		}
		
	}
}
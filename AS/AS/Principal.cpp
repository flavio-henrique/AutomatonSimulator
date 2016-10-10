#include "Controle.h"


[STAThread]
int main(array<String^>^ arg)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		Controle c;

		c.controlarExecucao();

		return 0;
	}
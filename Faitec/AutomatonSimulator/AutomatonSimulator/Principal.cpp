#include "Controle.h"

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Controle c;

	c.controlarExecucao();

	return 0;
}
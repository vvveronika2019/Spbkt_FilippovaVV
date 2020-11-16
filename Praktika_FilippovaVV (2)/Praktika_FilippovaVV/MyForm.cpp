#include "MyForm.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	srand(time(0));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PraktikaFilippovaVV::MyForm form;
	Application::Run(% form);
}
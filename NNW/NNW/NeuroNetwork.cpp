#include "NeuroForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    NNW::NeuroForm Form;
    Application::Run(% Form);
}



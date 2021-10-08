#include "MyForm.h"
#include <string>
#include <iostream>
#include "pch.h"
#include "Lista.h"
#include "Pila.h"
#include"ListaString.h"

using namespace System;
using namespace System::Windows::Forms;
using System::String;
using namespace std;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab05CristianGonzalez1183221::MyForm form;
	Application::Run(% form);
	return 0;
}


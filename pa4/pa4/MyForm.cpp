/*
Name: Ting Wang
Cs215 Fall 201
Program assignment4
Dec 7 2014
implementation of a calculator
*/
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PA4::MyForm form;
	Application::Run(%form);
}

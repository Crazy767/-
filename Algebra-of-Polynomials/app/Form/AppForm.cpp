#include "AppForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // �������� ���������� �����
    WinFormApp::AppForm1^ form = gcnew WinFormApp::AppForm1();

    // ������ ���������� � ����������� �����
    Application::Run(form);

    return 0;
}
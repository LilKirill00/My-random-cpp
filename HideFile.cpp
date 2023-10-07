#include <iostream>
#include <string>
#include <fstream>//Файлы
using namespace std;

int main()
{
    ofstream hide("Hide_file.vbs");
    string file_name = "название_файла.bat";
    hide << "Set WshShell = CreateObject(\"WScript.Shell\")\nWshShell.Run chr(34) & \"" + file_name + "\" & Chr(34), 0\nSet WshShell = Nothing";
    hide.close();
}
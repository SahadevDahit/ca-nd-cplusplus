#include<iostream>
#include<string>
#include<Windows.h>
#include<conio.h>
#include<dos.h>
using namespace std;
void start (string filename)
{
	ShellExecute(NULL,"open",filename.c_str(),NULL,NULL,SW_SHOWNORMAL);
	}

void runn(string CodePath)
{
//    os.startfile("CodePath");
    ShellExecute(NULL,"startfile",CodePath.c_str(),NULL,NULL,SW_SHOWNORMAL);


}
int main()
{
	system ("clear");
	start ("notepad");
	runn("C:\Program Files (x86)\Dev-Cpp");
	return 0;
}


#include <iostream>
#include <conio.h>
#include <locale>
#include <Windows.h> //��� WinExec();
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"");
//    WinExec( "C:\\Windows\\system32\\notepad.exe", 1);
    WinExec("C:\\Program Files (x86)\\1cv8\\8.3.8.2088\\bin\\1cv8s.exe",1);
//    WinExec("C:\\Program Files (x86)\\1cv8\\8.3.8.2088\\bin\\!start.bat",1);

// ������ ����� "�"
//    keybd_event('C', 0,0,0);
//    keybd_event('C', 0,KEYEVENTF_KEYUP,0);

//������ ENTER
    keybd_event(VK_RETURN, 0x9C, 0, 0);
    keybd_event(VK_RETURN, 0x9C, KEYEVENTF_KEYUP, 0);

 //   getch();
    return 0;
}

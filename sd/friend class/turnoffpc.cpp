#include<Windows.h>

int main()
{


    SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,(LPARAM)2);
    Sleep(500);

    SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,(LPARAM)-1);

    return 0;
}

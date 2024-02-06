#define _CRT_SECURE_NO_WARNINGS
#include <windows.h> 
#include <tchar.h> 
#include <ctime>

VOID CreateArray(UINT arr[]) {
    for (int i = 0; i < 100; i++) 
        arr[i] = i + 1;
}

INT WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
    srand(time(0));
    UINT aArray[100];
    TCHAR szMessageText[60];
    INT idOfBox;
    UINT low = 1, high = 100;
    UINT randNumber = low + rand() % (high - low + 1);

    CreateArray(aArray);

    do {
        _stprintf(szMessageText, TEXT("Ваше число больше %d ?"), randNumber);
        idOfBox = MessageBox(0, szMessageText, NULL, MB_YESNOCANCEL | MB_ICONQUESTION);

        if (idOfBox == IDYES) {
            low = randNumber + 1;
        }
        else if (idOfBox == IDNO) {
            high = randNumber - 1;
        }

        randNumber = low + rand() % (high - low + 1);

    } while (idOfBox != IDCANCEL);

    MessageBox(0, TEXT("Я снова победил!"), TEXT("Ура!!"), MB_OK|MB_ICONASTERISK);
}

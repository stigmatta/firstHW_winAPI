#define _CRT_SECURE_NO_WARNINGS
#include <windows.h> 
#include <tchar.h> 

INT WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
    UINT uMessagesLength = 0, uAverageMessageLength = 0;
    LPCWSTR szMessageText = TEXT("Здравствуйте.Меня зовут Андрей.Мне 19 лет");

    MessageBox(0, szMessageText, TEXT("Окно сообщения"), MB_OK | MB_ICONINFORMATION);

    uMessagesLength += _tcsclen(szMessageText);
    szMessageText = TEXT("Я учусь в академии ШАГ и хочу стать программистом");

    MessageBox(0, szMessageText, TEXT("Окно сообщения"), MB_OK | MB_ICONINFORMATION);

    uMessagesLength += _tcslen(szMessageText);
    szMessageText = TEXT("Сейчас изучаю предмет Системное программирование");

    uMessagesLength += _tcslen(szMessageText);
    uAverageMessageLength = uMessagesLength / 3;

    TCHAR szWindowText[50];
    _stprintf(szWindowText, TEXT("Средняя длина сообщения: %d"), uAverageMessageLength);

    MessageBox(0,szMessageText , szWindowText, MB_OK | MB_ICONINFORMATION);

    return 0;
}

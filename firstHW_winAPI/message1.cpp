#define _CRT_SECURE_NO_WARNINGS
#include <windows.h> 
#include <tchar.h> 

INT WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
    UINT uMessagesLength = 0, uAverageMessageLength = 0;
    LPCWSTR szMessageText = TEXT("������������.���� ����� ������.��� 19 ���");

    MessageBox(0, szMessageText, TEXT("���� ���������"), MB_OK | MB_ICONINFORMATION);

    uMessagesLength += _tcsclen(szMessageText);
    szMessageText = TEXT("� ����� � �������� ��� � ���� ����� �������������");

    MessageBox(0, szMessageText, TEXT("���� ���������"), MB_OK | MB_ICONINFORMATION);

    uMessagesLength += _tcslen(szMessageText);
    szMessageText = TEXT("������ ������ ������� ��������� ����������������");

    uMessagesLength += _tcslen(szMessageText);
    uAverageMessageLength = uMessagesLength / 3;

    TCHAR szWindowText[50];
    _stprintf(szWindowText, TEXT("������� ����� ���������: %d"), uAverageMessageLength);

    MessageBox(0,szMessageText , szWindowText, MB_OK | MB_ICONINFORMATION);

    return 0;
}

#include <iostream>
#include "modules_zobenko.h"

using namespace std;

int main()
{
    localization();
    wcout<<author<<endl;
    wchar_t checkbox=0;
    while(true){
        wcout<<L"---------Виберіть дію----------\n";
        wcout<<L"Введіть a для перевірки на помилки вірш...\n";
        wcout<<L"Введіть b для дозапису інформації...\n";
        wcout<<L"Введіть с для переведення числа у двійкову систему...\n";
        wcout<<L"Введіть d для виконання s_calculation...\n";
        wcout<<L"Введіть e для виходу із программи\n";
        wcout<<L"==========>";
        wcin>>checkbox;
        switch (checkbox) {
        case 'a':
        {
            wcout<<L"Створіть файл (input) з розширенням .тхт у папці з .ехе файлом, \nпотім в (input.txt) запишіть вірш який знаходиться на гітхабі в папці (task). \nЦе все необхідно для коректної роботи программи. \nДякую за увагу!\n";
            task1();
            break;
        }
        case 'b':
        {
            wcout<<L"Дозапис було створено у файлі input.Для коректної роботи функції (а) видаліть дозапис після перегляду\n";
            task2();
            break;
        }
        case 'c':
        {
            task3();
            break;
        }
        case 'd':
        {
            S_calculation();
            break;
        }
        case 'e':
        {
            return 0;
            break;
        }
        }
    }
    system("pause");
    getchar();
    return 0;
}

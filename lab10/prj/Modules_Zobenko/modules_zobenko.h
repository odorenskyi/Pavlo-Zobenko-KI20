#ifndef MODULES_ZOBENKO_H
#define MODULES_ZOBENKO_H
#include <iostream>
#include <fstream>
#include <wchar.h>
#include <fcntl.h>
#include <clocale>
#include <windows.h>
#include <codecvt>
#include <ctime>
#include<cmath>

using namespace std;
std::wifstream::pos_type filesize(const char* filename)
{
    std::wifstream in(filename, std::wifstream::ate | std::wifstream::binary);
    return in.tellg();
}
wstring author = {L"Зобенко Павло. Версія 1.0"};
wstring virsh ={L"Свята моя ненько, я вдячний Тобі,\n"
                       "Що в хаті тепленько і сіль є, і хліб,\n"
                       "За те, що ще можу свій хрест я нести,\n"
                       "О Матінько Божа, спаси і прости.\n"};

void localization(){
    _wsetlocale(LC_ALL, L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin), _O_U8TEXT);
}
wstring Getter_Input(){
    wifstream input;
    input.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input.open("input.txt");
    wstring line;
    wstring copys;
    while (getline(input, line))
    {
        copys+=line;
        copys.push_back('\n');
    }
    input.close();
    return copys;
}



void task1(){
    wstring copys=Getter_Input();
    wstring author = L"Зобенко Павло. Версія 1.0";
    wofstream output;
    output.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    output.open("output.txt");
    output<<L"Ім'я розробника: "<<author<<endl;
    output<<L"а б в г д е є ж з и і ї й к л м н о п р с т у ф х ц ч ш щ ь ю я"<<endl;

    if (virsh==copys){
        output<<L"Твір був перевірений , помилок не виявлено.";
    }
    else{
        output<<L"Твір був перевірений , помилки були виявленні.";
    }
    output.close();
}
void task2(){
    time_t cur_date=time(0);
    wofstream input2;
    input2.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input2.open("input.txt", ios_base::app);
    input2<<L"Державний Прапор України — стяг із двох рівновеликих горизонтальних смуг синього і жовтого кольорів.\n\n";
    input2<<L"Великий Державний Герб України встановлюється з урахуванням малого Державного Герба України та герба \nВійська Запорізького законом, що приймається не менш як двома третинами \nвід конституційного складу Верховної Ради України\n\n";
    input2<<L"Державний Гімн України — ";
    input2<<L"Ще не вмерла України і слава, і воля,\n"
                 "Ще нам, браття молодії, усміхнеться доля.\n"
                 "Згинуть наші воріженьки, як роса на сонці.\n"
                 "Запануєм і ми, браття, у своїй сторонці.\n"
                 "Душу й тіло ми положим за нашу свободу,\n"
                 "І покажем, що ми, браття, козацького роду.\n\n";
    input2<<endl<<L"Дата дозапису: "<<ctime(&cur_date);
    input2.close();
}

int validation(){
    int a=0;
    while (!(wcin >> a)){
        wcout <<L"Введіть число:\n";
        wcin.clear();
        fflush(stdin);
        wcout<<L"===>";
    }
    while(a<0 || a==0 ){
        if(a<0 || a==0){
            wcout<<L"Введіть число більше 0"<<endl;
            wcout<<L"===>";
            wcin.clear();
            fflush(stdin);
        }
        a=validation();
    }
    return a;
}

void task3(){
    wcout<<L"Введіть число\n"<<endl;
    wstring text;
    int a=0;
    a=validation();
    int k=0;
    while(a) {
        k = a % 2;
        a = a / 2;
        text =to_wstring(k)+text;
    }
    wcout<<L"Число у двійковій системі: "<<text<<endl;
}

int check(int num){
    bool valid = false;
    while (!valid){
        valid = true;
        wcout << L"Введіть число більше за 0, у випадку y та z, ведіть число яке не дорівнює 0 \n";
        wcin >> num;
        if(wcin.fail()) {
            wcin.clear();
            wcin.ignore();
            valid = false;
        }

    }
    return num;
}
double S_calculation(){
    double S=0,x=0,y=0,z=0;
    double PI = 3.141592653589793;
    wcout<<L"\nВвести  x: \n";
    x=check(x);
    while(x==0){
        if(x==0){
            wcout<<L"Введіть число яке не дорівнює 0 \n";
        }
        x=check(x);
    }
    wcout<<L"\nВвести y; \n";
    y=check(y);
    while(y==0){
        if(y==0){
            wcout<<L"Введіть число яке не дорівнює 0 \n";
        }
        y=check(y);
    }
    wcout<<L"\nВвести  z; \n";
    z=check(z);
    while(z==0){
        if(z==0){
            wcout<<L"Введіть число яке не дорівнює 0 \n";
        }
        z=check(z);
    }

    S=0.5 * (( pow(y,2) + 2 * z) / (sqrt(7 * PI + x))) - (sqrt(exp(abs(x))) + (sqrt(abs(y - x))) / (sin (z * y)));
    wcout <<"S =";
    wcout << S <<"\n";
    return 0;
}
#endif // MODULES_ZOBENKO_H

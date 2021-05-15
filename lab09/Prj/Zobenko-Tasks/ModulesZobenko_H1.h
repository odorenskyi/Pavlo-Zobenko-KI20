#ifndef MODULESZOBENKO_H1_H
#define MODULESZOBENKO_H1_H
#include <iostream>
#include <fcntl.h>
#include <cmath>
#include <cctype>

#endif // MODULESZOBENKO_H_H

using namespace std;

string Name_of_Developer()
{
    string name;
    name="Версiя 1.0\nРозробник: Зобенко Павло Олександрович.\nЦНТУ, 2021 рiк.<c> \n";
    return name;
}

int check(int num){
    bool valid = false;
    while (!valid){
        valid = true;
        cout << "Введiть число яке не дорiвнює 0 \n";
        cin >> num;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            valid = false;
        }

    }
    return num;
}
double S_calculation(){
    double S=0,x=0,y=0,z=0;
    double PI = 3.141592653589793;
    cout<<"\nВвести x: \n";
    x=check(x);
    while(x==0){
        if(x==0){
            cout<<"Введiть число бiльше 0 \n";
        }
        x=check(x);
    }
    cout<<"\nВвести y; \n";
    y=check(y);
    while(y==0){
        if(y==0){
            cout<<"Введiть число бiльше 0,або менше за 0 \n";
        }
        y=check(y);
    }
    cout<<"\nВвести z; \n";
    z=check(z);
    while(z==0){
        if(z==0){
            cout<<"Введiть число бiльше 0,або менше за 0 \n";
        }
        z=check(z);
    }

    S=0.5 * (( pow(y,2) + 2 * z) / (sqrt(7 * PI + x))) - (sqrt(exp(abs(x))) + (sqrt(abs(y - x))) / (sin (z * y)));
    cout <<"S =";
    cout << S;
    return 0;
}

double Task_9_1(){
    int a=0,b=0,c=0,d=0;
    a = 41880268;
    b = 109112 + 56131 + 61149;
    c = 43694 + 4269;

    cout<<"Статистичнi данi чисельностi населення України станом на 1 сiчня 2021р.: "<<a<<"\n";
    cout<<"Кiлькiсть громадян, якi вибули, знялись з реєстрацiї, вмерли: "<<b<<"\n";
    cout<<"Кiлькiсть громадян, якi зареєструвалися на постiйне мiсце проживання, народились: "<<c<<"\n";
    d=a-b+c;
    cout<<"Чисельнiсть населення в Українi станом на 1 травня 2021р. становитиме: "<<d<<"\n";
    if(d>a){
        cout<<"К?льк?сть людей як? зареєструвалися на пост?йне м?сце та к?льк?сть новонароджених б?льше н?ж к?льк?сть людей як? знялись з реєстрац?ї,або померли.";
    }
    else{
        cout<<"Кiлькiсть людей якi знялись з реєстрацiї,або померли бiльше нiж кiлькiсть \nлюдей якi зареєструвалися на постiйне мiсце та кiлькiсть новонароджених.";
    }
    return 0;
}

int validation()
{
    float arr;
    while (!(cin >> arr)){
        cout << "Помилка введiть числа \n";
        cin.clear();
        fflush(stdin);
        cout<<"Введiть швидкiсть руху повiтряних масс: ";
    }
    while(arr<0 || arr==0 || arr>100){
        if(arr<0|| arr==0 || arr>100){
            cout<<"введiть показники не менше 0 та не бiльше нiж 32.6: "<<endl;
            cout<<"===>";
            cin.clear();
            fflush(stdin);
        }
        arr=validation();
    }
    return arr;
}

double Task_9_2(){
    float arr[24];
    int lol[24];
    cout<<"Введiть швидкiсть руху повiтряних масс впрдовж доби(По годинах):\n";
    for (int i = 0; i < 24; i++) {
        lol[i]=0;
    }
    for (int i = 0; i < 24; i++) {
        cout<<i + 1<<": ";
        arr[i]=validation();
    }
    for (int i = 0; i < 24; i++) {
        if(arr[i]<0.3){
            lol[i]=0;
        }
        if(arr[i]>=0.3 && arr[i]<=1.5){
            lol[i]=1;
        }
        if(arr[i]>=1.6 && arr[i]<=3.3){
            lol[i]=2;
        }
        if(arr[i]>=3.4 && arr[i]<=5.4){
            lol[i]=3;
        }
        if(arr[i]>=5.5 && arr[i]<=7.9){
            lol[i]=4;
        }
        if(arr[i]>=8.0 && arr[i]<=10.7){
            lol[i]=5;
        }
        if(arr[i]>=10.8 && arr[i]<=13.8){
            lol[i]=6;
        }
        if(arr[i]>=13.9 && arr[i]<=17.1){
            lol[i]=7;
        }
        if(arr[i]>=17.2 && arr[i]<=20.7){
            lol[i]=8;
        }
        if(arr[i]>=20.8 && arr[i]<=24.4){
            lol[i]=9;
        }
        if(arr[i]>=24.5 && arr[i]<=28.4){
            lol[i]=10;
        }
        if(arr[i]>=28.5 && arr[i]<=32.6){
            lol[i]=11;
        }
        if(arr[i]>32.7){
            lol[i]=12;
        }
    }
    int min = lol[0];

    for (int i = 1; i < 25; i++) {
        if (lol[i] < min) {
            min = lol[i];
        }
    }
    cout<<"Найменша швидкiсть вiтру зафiксованна впродовж доби (В балах Бофорта): ";
    cout<<min<<"\n";
    return 0;
}

int validation_2(){
    int a=0;
    while (!(cin >> a)){
        cout << "Введiть числа: ";
        cin.clear();
        fflush(stdin);
        cout<<"===>";
    }
    while(a<0 || a==0 || a>908000){
        if(a<0 || a==0 || a>908000){
            cout<<"Ввеiть число блiьше 0 та до 9008000:"<<endl;
            cout<<"===>";
            cin.clear();
            fflush(stdin);
        }
        a=validation_2();
    }
    return a;
}

double Task_9_3(){
    cout<<"==> ";
        string text;
        int a=0;
        int k=0;
        a=validation_2();
        while(a) {
            k = a % 2;
            a = a / 2;
            text =to_string(k)+text;
        }
        cout << text << endl;
        int i=0,count_null=0,count_one=0;
        while (text[i]) {
            if(text[i]=='0') count_null++;
            else if(text[i]=='1') count_one++;
            i++;
        }
        cout<<L"7 element is : "<<text[text.length()-7]<<endl;
        if(text[text.length()-7]=='0') {
            cout<<L"count of 0 : "<<count_null<<endl;
        }
        else {
            cout<<L"counto of 1 : "<<count_one<<endl;
        }
        return 0;
    }


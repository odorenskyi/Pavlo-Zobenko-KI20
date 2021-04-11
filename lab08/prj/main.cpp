#include <iostream>
#include<windows.h>
#include"MODULESZOBENKO_H.h"

using namespace std;


int main()  {

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << Name_of_Developer() << endl;
    cout<<"Введiть а i б натискаючи enter, щоб перевiрити iстиннiсть виразу a+5>b+2"<<endl;
    cout<< result();
    cout<< ("\n");
    cout<<endl<<"обчислити вираз S=1/2 * ((y^2z) / (√7pi+x)) - (√(e^|x|)+((√|y-z|) / (sin*z*y)) (x,y,z вводить користувач)): \n";
    cout<<S_calculation()<<endl;
    system("pause");
    getchar();
    return 0;

}

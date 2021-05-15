#include <iostream>
#include <windows.h>
#include "Modules_Zobenko.h"
#include <wchar.h>

using namespace std;

int main()
{
    cout<<Name_of_Developer();
    char checkbox=0;
    while (true){
        cout<<"Введiть d для виконання S_calculation"<<endl;
        cout<<"Введiть g для розрахунку чисельностi населення областi"<<endl;
        cout<<"Введiть h для розрахунку сили вiтру"<<endl;
        cout<<"Введiть j для розрахунку кiлькостi бiтiв"<<endl;
        cout<<"Введiть на вибiр k,K,к для виходу iз програми"<<endl;
        cout<<"====>";
        cout<<endl;
        cin>>checkbox;
        if(checkbox=='d'){
            S_calculation();
        }
        if(checkbox=='g'){
            Task_9_1();
        }
        if(checkbox=='h'){
            Task_9_2();
        }
        if(checkbox=='j'){
           Task_9_3();
        }
        if(checkbox=='k'|| checkbox=='K' || checkbox=='к'){
            break;
        }
        else{
            Beep(500,500);
        }
    }
    system("pause");
    getchar();
    return 0;
}

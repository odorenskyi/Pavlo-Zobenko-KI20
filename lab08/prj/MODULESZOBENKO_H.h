#ifndef MODULESZOBENKO_H_H_INCLUDED
#define MODULESZOBENKO_H_H_INCLUDED
#include <iostream>
#include<math.h>
using namespace std;
string Name_of_Developer()
{
    string name;
    name="Версiя 1.0\nРозробник: Зобенко Павло Олександрович.\nЦНТУ, 2021 рiк.<c>";
    return name;
}
bool result(){
    char a=0;
    char b=0;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    if(a + 5 > b + 2){
        return true;
    }
    else return false;
}
int check(int num){
    bool valid = false;
    while (!valid){
        valid = true;
        cout << "Введiть число яке не дорiвнює 0: ";
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
   cout<<"\nВвести x; \n";
       x=check(x);
      while(x==0){
          if(x==0){
              cout<<"Введiть число бiльше 0,або менше за 0 \n";
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
#endif

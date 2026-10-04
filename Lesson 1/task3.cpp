#include <locale.h>
#include <iostream>
using namespace std;


    int main() {
        setlocale(LC_ALL, "Russian");
        int m, l, d, t;
        cout<< "Enter the mass\n";
        cin>> m;
        cout<< "Enter the lift force\n";
        cin>> l;
        cout<< "Enter the lift resistance\n";
        cin>> d;
        cout<< "Enter the engine thrust\n";
        cin>> t;

        int a = (t-d)/m;
        int ay = (l-m*10)/m;
        cout<< "ускорение:"<< a;
        cout<< "\nвертикальное ускорение:"<< ay;


        return 0;
    }



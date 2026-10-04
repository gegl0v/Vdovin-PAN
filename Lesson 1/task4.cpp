#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    int a,h, flag = 1;
    double t;
    while (flag == 1) {
        cout<< "Введите высоту: ";
        cin>> h;
        cout<< "Введите ускорение: ";
        cin>> a;
        if (h>0 and a>0){flag = 0;}
    }
    t = sqrt(2*h/a);
    cout << "Время набора высоты: " << t;
    return 0;
}
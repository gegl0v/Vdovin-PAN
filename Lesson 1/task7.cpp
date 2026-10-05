#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int m = 40000; //40 тонн
    double t, f, d;


    cout << "Введите силу тяги двигателя: ";
    cin >> t;
    cout << "\nВведите коэффициент сопротивления: ";
    cin >> d;
    cout << "\nВведите подъемную силу: ";
    cin >> f;
    double a = (t-d)/m;
    cout << "\nСамолет находится в сосоянии ";
    if(a>0){
        if(a>0.5){cout << "набора высоты";}
        else{cout << "горизонтального полета";}
    } else {cout << "снижения";}

    return 0;
}
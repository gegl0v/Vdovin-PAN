#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
double aero(int s,int v,int ro,int cd){
    return 0.5*ro*v*v*s*cd;}
double up_force(int s,int v,int ro, int cl){
    return 0.5*ro*v*v*s*cl;}

int main() {

    int la[3][8];

    setlocale(LC_ALL, "Russian");
    int s, v, ro, cd, cl, m;
    for(int i = 0;i<3;i++){
        cout << "ЛА №" << i+1;
        cout<< "\nВведите площадь крыла\n";
        cin>> s;
        la[i][0] = s;
        cout<< "Введите скорость полета\n";
        cin>> v;
        la[i][1] = v;
        cout<< "Введите плотность воздуха\n";
        cin>> ro;
        la[i][2] = ro;
        cout<< "Введите коэффициент подъемной силы\n";
        cin>> cl;
        la[i][3] =cl;
        cout<< "Введите коэффициент сопротивления\n";
        cin>> cd;
        la[i][4] = cd;
        double l = aero(la[i][0],la[i][1],la[i][2],la[i][4]);
        la[i][5] = l;
        cout << "Аэродинамическое сопротивление:" << l;
        double d = up_force(la[i][0],la[i][1],la[i][2],la[i][3]);
        cout << "\nПодъемная сила:" << d;
        la[i][6] = d;
        cout<< "\nВведите массу\n";
        cin>> m;
        la[i][7] = m;
    }

    int h,pas, flag = 1;
    double a,t, min = 9999999.999;
    while (flag == 1) {
        cout<< "Введите высоту: ";
        cin>> h;
        if (h>0){flag = 0;}
    }
    for(int i = 0;i<3;i++){
        a = (la[i][5]-la[i][7]*9.8)/la[i][7];
        t = sqrt(2*h/a);
        if(t < min){pas = i+1; min = t;}
    }

    cout << "\nБыстрее наберет высоту ЛА №"<< pas <<"\nВремя набора высоты: " << t;
    return 0;
}



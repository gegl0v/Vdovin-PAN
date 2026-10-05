#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;

double up_force(double s, double v, double ro, double cl) {
    return 0.5 * ro * v * v * s * cl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int N = 5; 
    double V[N];     
    double ro[N];    
    double s, cl;    


    cout << "Введите площадь крыла: ";
    cin >> s;
    cout << "Введите коэффициент подъемной силы: ";
    cin >> cl;

    cout << "\nВведите данные для " << N << " шагов траектории:\n";
    for (int i = 0; i < N; i++) {
        cout << "\nШаг " << i + 1 << ":\n";
        cout << "  Скорость V[" << i << "]: ";
        cin >> V[i];
        cout << "  Плотность воздуха ro[" << i << "]: ";
        cin >> ro[i];
    }
    cout << "\n| Шаг | Скорость | Плотность | Подъемная сила |\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < N; i++) {
        double force = up_force(s, V[i], ro[i], cl);
        cout << "| " << i + 1 << "   | " 
             << V[i] << "     | " 
             << ro[i] << "      | " 
             << force << " |\n";
    }

    return 0;
}
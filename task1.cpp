#include <iostream>
using namespace std;

int main() {
    int s, v, ro, cl;
    cout<< "Введите площадь крыла\n";
    cin>> s;
    cout<< "Введите скорость полета\n";
    cin>> v;
    cout<< "Введите плотность воздуха\n";
    cin>> ro;
    cout<< "Введите коэффициент подъемной силы\n";
    cin>> cl;
    double v1 = 0.5*ro*(v*v)*s*cl;
    cout<< v1;

    return 0;
}

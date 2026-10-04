#include <iostream>
using namespace std;

double aero(int ro, int v, int s, int cd){
    return 0.5*ro*v*v*s*cd;    
}

    int main() {
        int s, v, ro, cd;
        cout<< "Enter the wing area\n";
        cin>> s;
        cout<< "Enter the flight speed\n";
        cin>> v;
        cout<< "Enter the air density\n";
        cin>> ro;
        cout<< "Enter the drag coefficient\n";
        cin>> cd;
        cout<< aero(ro,v,s, cd);

        return 0;
    }



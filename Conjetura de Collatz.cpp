#include <iostream>

using namespace std;

int main() {
cout<< "Conjetura de Collatz";
    long long n;
    cin >> n;
     int i=0;
     cout<<"Resultado-";
     if (n < 1 || n > 1e6) {
        cout << "Fuera de rango asere" << endl;
        return 0;
    }

    int pasos = 0;

    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }

    cout << pasos << endl;

    return 0;
}
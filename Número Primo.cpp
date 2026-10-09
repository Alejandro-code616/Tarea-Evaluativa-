#include <iostream>

using namespace std;

int main() {
cout << "¿Es un numero primo?";
    long long n;
    cin >> n;
     cout << "Respuesta-";
    if (n < 2 || n > 1e6) {
        cout << "Fuera de rango" << endl;
        return 0;
    }

    bool es_primo = true;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            es_primo = false;
            
        }
    }

    if (es_primo) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }

    return 0;
}
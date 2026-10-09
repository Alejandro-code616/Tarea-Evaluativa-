#include <iostream>

using namespace std;

int main() {
cout<< "Adivina el numero oculto";
    int numero_secreto = 74; 
    int intento=5;
    int total_intentos = 0;
    do {
        cin >> intento;
        total_intentos ++;
        if (intento < numero_secreto) {
            cout << "Es mayor" << endl; 
        } else if (intento > numero_secreto) {
            cout << "Es menor" << endl; 
        } else {
           cout << "cantidad de intentos -";
             cout << total_intentos << endl;
        }

    } while (intento != numero_secreto); 
cout <<"¡¡Felicidades adivinaste el numero!!";
    return 0;
}
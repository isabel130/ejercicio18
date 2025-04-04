#include <iostream>
using namespace std;
int main() {

    double a, b, c;

    cout << "Ingrese la longitud del lado 1: ";
    cin >> a;

    cout << "Ingrese la longitud del lado 2: ";
    cin >> b;

    cout << "Ingrese la longitud del lado 3: ";
    cin >> c;

    if (a+b>c and a+c>b and b+c>a) {
        if (a==b==c) {
            cout << "El triangulo es equilatero.";
        }
        else if (a==b or b==c or a==c) {
            cout << "El triangulo es isósceles.";
        }
        else {
            cout << "El triangulo es escaleno.";
        }
    }
    else {
        cout << "No es un triangulo.";
    }


    return 0;
}
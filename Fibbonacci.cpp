#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj numer elementu ciągu Fibonacciego: ";
    cin >> n;

    // Zmienna przechowująca poprzednie dwa elementy
    int a = 0, b = 1, fib = 0;
    
    // Jeśli n jest 0 lub 1, bezpośrednio zwróć wynik
    if (n == 0) {
        cout << "Element Fibonacciego o numerze " << n << " wynosi: 0" << endl;
        return 0;
    } else if (n == 1) {
        cout << "Element Fibonacciego o numerze " << n << " wynosi: 1" << endl;
        return 0;
    }
    
    // Obliczanie n-tego elementu ciągu Fibonacciego
    for (int i = 2; i <= n; ++i) {
        fib = a + b;  // Oblicz nowy element ciągu
        a = b;        // Przesuń b na a
        b = fib;      // Przesuń fib na b
    }
    
    cout << "Element Fibonacciego o numerze " << n << " wynosi: " << fib << endl;

    return 0;
}

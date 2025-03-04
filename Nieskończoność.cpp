#include <iostream>
#include <cmath>  
#include <string> // dla typu string
using namespace std;

int main() {
    string wejscie;

    while (true) {
        cout << "Wpisz liczbę (lub 'END' aby zakończyć): ";
        cin >> wejscie;

        // Jeśli użytkownik wpisze "END", przerywamy działanie programu
        if (wejscie == "END") {
            cout << "Koniec działania programu." << endl;
            break;
        }

        // Próba konwersji wejścia na liczbę typu double
        double liczba = stod(wejscie); // stod konwertuje string na double
        int liczba_calkowita = round(liczba); // Zaokrąglamy liczbę do całkowitej

        // Sprawdzamy, czy liczba jest parzysta czy nieparzysta
        if (liczba_calkowita % 2 == 0) {
            // Liczba jest parzysta, obliczamy sumę jej cyfr
            int suma = 0;
            int temp = abs(liczba_calkowita);  // Zabezpieczenie przed liczbami ujemnymi
            while (temp > 0) {
                suma += temp % 10;
                temp /= 10;
            }
            cout << "Suma cyfr liczby " << liczba_calkowita << " wynosi: " << suma << endl;
        } else {
            // Liczba jest nieparzysta, obliczamy jej silnię
            long long silnia = 1;
            for (int i = 1; i <= liczba_calkowita; ++i) {
                silnia *= i;
            }
            cout << "Silnia liczby " << liczba_calkowita << " wynosi: " << silnia << endl;
        }
        
    }

    return 0;
}

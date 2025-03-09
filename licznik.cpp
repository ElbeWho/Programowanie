#include <iostream>
using namespace std;

int main() {
    int dolna, gorna;
    
    // Wczytywanie granic przedziału
    cout << "Podaj dolna granicę przedziału: ";
    cin >> dolna;
    cout << "Podaj górną granicę przedziału: ";
    cin >> gorna;

    // Sprawdzanie, czy dolna granica jest mniejsza od górnej
    if (dolna >= gorna) {
        cout << "Problem: dolna granica musi być mniejsza od górnej." << endl;
        return 1; // Zakończenie programu, jeśli granice są niepoprawne
    }

    int liczba_parzystych = 0;
    
    // Wypisywanie nagłówków dla dwóch kolumn
    cout << "Liczby parzyste w przedziale [" << dolna << ", " << gorna << "]:" << endl;
    cout << "--------------------" << endl;
    cout << "Nr  | Liczba" << endl;
    cout << "--------------------" << endl;
    
    // Zliczanie liczb parzystych i wypisywanie ich w dwóch kolumnach
    for (int i = dolna; i <= gorna; ++i) {
        if (i % 2 == 0) {
            liczba_parzystych++;
            // Wypisujemy numer i liczbę w dwóch kolumnach
            cout << liczba_parzystych << "   | " << i << endl;
        }
    }

    // Wypisanie liczby parzystych
    cout << "Liczba liczb parzystych w przedziale: " << liczba_parzystych << endl;

    return 0;
}

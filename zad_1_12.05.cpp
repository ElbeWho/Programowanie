#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Otwarcie pliku do odczytu
    ifstream plik("szekspir.txt");

    // Sprawdzenie, czy udało się otworzyć plik
    if (plik.fail()) {
        cout << "Brak pliku!" << endl;
        return 1;
    }

    string slowo;
    int liczba_wyrazow = 0;
    int liczba_znakow = 0;
    int liczba_e = 0;

    // Wczytywanie słów z pliku
    while (plik >> slowo) {
        ++liczba_wyrazow;
        liczba_znakow += slowo.length();

        for (char znak : slowo) {
            if (znak == 'e' || znak == 'E') {
                ++liczba_e;
            }
        }
    }

    // Wypisanie wyników
    cout << "Liczba wyrazow: " << liczba_wyrazow << endl;
    cout << "Liczba znakow: " << liczba_znakow << endl;
    cout << "Liczba liter 'e' lub 'E': " << liczba_e << endl;

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    // Otwarcie pliku do odczytu
    std::ifstream fileinp("szekspir.txt");

    // Sprawdzenie, czy udało się otworzyć plik
    if (fileinp.fail()) {
        std::cout << "Brak pliku!" << std::endl;
        return 1;
    }

    std::string slowo;
    int liczba_wyrazow = 0;
    int liczba_znakow = 0;
    int liczba_e = 0;

    // Wczytywanie słów z pliku
    while (fileinp >> slowo) {
        ++liczba_wyrazow;
        liczba_znakow += slowo.length();

        for (char znak : slowo) {
            if (znak == 'e' || znak == 'E') {
                ++liczba_e;
            }
        }
    }

    // Otwarcie pliku do zapisu wyników
    ofstream fileout("wyniki.txt");
    if (fileout.fail()) {
        cout << "Blad przy otwieraniu pliku wyjściowego!" << endl;
        return 1;
    }

    // Zapis wyników do pliku
    fileout << "Liczba wyrazow: " << liczba_wyrazow << endl;
    fileout << "Liczba znakow: " << liczba_znakow << endl;
    fileout << "Liczba liter 'e' lub 'E': " << liczba_e << endl;

    cout << "Wyniki zostały zapisane do pliku 'wyniki.txt'." << endl;

    return 0;
}

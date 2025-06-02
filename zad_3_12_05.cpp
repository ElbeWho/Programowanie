#include <iostream>
#include <fstream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

int main() {
    int n;
    cout << "Podaj ile liczb chcesz wylosowac: ";
    cin >> n;

    // Inicjalizacja generatora losowego
    srand(static_cast<unsigned int>(time(0)));

    // Otwarcie plików do zapisu
    ofstream plik_parzyste("parzyste.txt");
    ofstream plik_nieparzyste("nieparzyste.txt");

    // Sprawdzenie poprawności otwarcia plików
    if (!plik_parzyste.is_open() || !plik_nieparzyste.is_open()) {
        cerr << "Blad przy otwieraniu plikow!" << endl;
        return 1;
    }

    // Losowanie i zapis
    for (int i = 0; i < n; ++i) {
        int liczba = rand() % 100 + 1; // liczby od 1 do 100
        if (liczba % 2 == 0) {
            plik_parzyste << liczba << endl;
        } else {
            plik_nieparzyste << liczba << endl;
        }
    }

    // Zamknięcie plików
    plik_parzyste.close();
    plik_nieparzyste.close();

    cout << "Zakonczono zapis liczb do plikow." << endl;
    return 0;
}

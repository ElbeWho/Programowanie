#include <iostream>
#include <vector>
#include <string>
#include <iomanip>  // dla setprecision

using namespace std;

int main() {
    string imie, nazwisko;
    float liczba;
    vector<float> liczby;

    // Wczytywanie danych ze standardowego wejścia
    while (cin >> imie >> nazwisko >> liczba) {
        liczby.push_back(liczba);
    }

    if (liczby.empty()) {
        cout << "Brak danych do analizy." << endl;
        return 1;
    }

    // Inicjalizacja min i max pierwszą liczbą
    float suma = 0.0f;
    float min = liczby[0];
    float max = liczby[0];

    for (float x : liczby) {
        suma += x;
        if (x < min) min = x;
        if (x > max) max = x;
    }

    float srednia = suma / liczby.size();

    // Wyniki
    cout << fixed << setprecision(2);
    cout << "Liczba wczytanych rekordów: " << liczby.size() << endl;
    cout << "Średnia: " << srednia << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maksimum: " << max << endl;

    cout << "Wczytane liczby: ";
    for (float x : liczby) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

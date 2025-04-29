#include <iostream>
#include <vector>
using namespace std;

// Funkcja do wypełniania pustego wektora kwadratami liczb
void wypelnijPusty(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        v.push_back(i * i);
    }
}

// Funkcja do wypełniania istniejącego już wektora kwadratami liczb
void wypelnijGotowy(vector<int>& v) {
    for (int i = 0; i < v.size
        (); ++i) {
        v[i] = i * i;
    }
}

// Funkcja do wypisywania zawartości wektora
void wypisz(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Podaj ile liczb chcesz wygenerowac: ";
    cin >> n;

    // --- WERSJA 1: Pusty wektor ---
    vector<int> pusty;
    wypelnijPusty(pusty, n);

    cout << "Wektor wypelniony metoda pustego wektora:" << endl;
    wypisz(pusty);

    // --- WERSJA 2: Wektor o ustalonej dlugosci ---
    vector<int> gotowy(n); // tworzymy od razu n-elementowy wektor
    wypelnijGotowy(gotowy);

    cout << "Wektor wypelniony metoda gotowego wektora:" << endl;
    wypisz(gotowy);

    return 0;
}

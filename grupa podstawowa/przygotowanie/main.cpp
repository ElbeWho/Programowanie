// main.cpp
#include <iostream>
#include <vector>
#include <string>
#include "funkcje.h"

using namespace std;

int main() {
    vector<vector<double>> data;
    vector<string> headers;

    if (!loadTriangles("nowy.txt", headers, data)) {
        cerr << "Błąd: Nie można otworzyć pliku!" << endl;
        return 1;
    }

    int wybor;
    cout << "Wybierz numer zapytania:\n";
    cout << "1. Oblicz średni obwód wszystkich trójkątów\n";
    cout << "2. Zapisz bok b tam, gdzie a > 5 i c > 5\n";
    cout << "Wybór: ";
    cin >> wybor;

    if (wybor == 1) {
        cout << "Średni obwód: " << averagePerimeter(data) << endl;
    } else if (wybor == 2) {
        saveBValues(data, "bok_b.txt");
        cout << "Boki b zostały zapisane do pliku bok_b.txt" << endl;
    } else {
        cout << "Niepoprawny wybór." << endl;
    }

    return 0;
}

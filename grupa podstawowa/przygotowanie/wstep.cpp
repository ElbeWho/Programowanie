#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

//wersja poprawiona bez "switch", co nie poprawiło się na zajęciach

using namespace std;

int main() {
    string filename = "nowy.txt";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Nie można otworzyć pliku: " << filename << endl;
        return 1;
    }

    vector<string> naglowki;
    vector<double> a_vec, b_vec, c_vec;

    // Wczytanie nagłówka
    string linia;
    getline(file, linia);
    stringstream ss(linia);
    string kolumna;
    while (ss >> kolumna) {
        naglowki.push_back(kolumna);
    }

    // Wczytanie danych
    double a, b, c;
    while (file >> a >> b >> c) {
        // Sprawdzenie warunku istnienia trójkąta
        if (a + b > c && a + c > b && b + c > a) {
            a_vec.push_back(a);
            b_vec.push_back(b);
            c_vec.push_back(c);
        }
    }

    file.close();

    if (a_vec.empty()) {
        cout << "Brak poprawnych trójkątów do analizy." << endl;
        return 0;
    }

    cout << "\nMENU:\n";
    cout << "1. Wyświetl średni obwód\n";
    cout << "2. Zapisz boki b dla trójkątów, gdzie a > 5 i c > 5\n";
    cout << "0. Wyjście\n";
    cout << "Wybierz opcję: ";

    int wybor;
    cin >> wybor;

    if (wybor == 1) {
        double suma = 0;
        for (size_t i = 0; i < a_vec.size(); ++i) {
            suma += a_vec[i] + b_vec[i] + c_vec[i];
        }
        double srednia = suma / a_vec.size();
        cout << fixed << setprecision(2);
        cout << "Średni obwód: " << srednia << endl;
    }
    else if (wybor == 2) {
        ofstream output("bok_b.txt");
        if (!output.is_open()) {
            cerr << "Nie można otworzyć pliku wyjściowego.\n";
        } else {
            for (size_t i = 0; i < a_vec.size(); ++i) {
                if (a_vec[i] > 5 && c_vec[i] > 5) {
                    output << fixed << setprecision(2) << b_vec[i] << endl;
                }
            }
            output.close();
            cout << "Zapisano wartości b do pliku bok_b.txt\n";
        }
    }
    else if (wybor == 0) {
        cout << "Zakończono program.\n";
    }
    else {
        cout << "Niepoprawny wybór.\n";
    }

    return 0;
}

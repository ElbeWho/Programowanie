#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Trojkat {
    double a, b, c;
};

int main() {
    string filename = "dane.txt";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Nie można otworzyć pliku: " << filename << endl;
        return 1;
    }

    vector<string> naglowki;
    vector<Trojkat> trojkaty;

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
            trojkaty.push_back({a, b, c});
        }
    }

    file.close();

    if (trojkaty.empty()) {
        cout << "Brak poprawnych trójkątów do analizy." << endl;
        return 0;
    }

    // Menu użytkownika
    int wybor;
    do {
        cout << "\nMENU:\n";
        cout << "1. Wyświetl średni obwód\n";
        cout << "2. Zapisz boki b dla trójkątów, gdzie a > 5 i c > 5\n";
        cout << "0. Wyjście\n";
        cout << "Wybierz opcję: ";
        cin >> wybor;

        switch (wybor) {
            case 1: {
                double suma = 0;
                for (const auto& t : trojkaty) {
                    suma += t.a + t.b + t.c;
                }
                double srednia = suma / trojkaty.size();
                cout << fixed << setprecision(2);
                cout << "Średni obwód: " << srednia << endl;
                break;
            }

            case 2: {
                ofstream output("bok_b.txt");
                if (!output.is_open()) {
                    cerr << "Nie można otworzyć pliku wyjściowego.\n";
                    break;
                }

                for (const auto& t : trojkaty) {
                    if (t.a > 5 && t.c > 5) {
                        output << fixed << setprecision(2) << t.b << endl;
                    }
                }

                output.close();
                cout << "Zapisano wartości b do pliku bok_b.txt\n";
                break;
            }

            case 0:
                cout << "Zakończono program.\n";
                break;

            default:
                cout << "Niepoprawny wybór.\n";
        }

    } while (wybor != 0);

    return 0;
}

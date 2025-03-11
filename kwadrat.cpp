#include <iostream>
#include<iomanip>

using namespace std;



int main() {


    int n;
    char znak;

    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj znak: ";
    cin >> znak;

    for (int i = 0; i < n; i++) { // Pętla wierszy
        for (int j = 0; j < n; j++) { // Pętla kolumn
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1) {
                cout << setw(5) << znak << setw(5) ; // Rysowanie boków i przekątnych
            } else {
                cout << " "<< setw(5); // Puste miejsce wewnątrz kwadratu
            }
        }
        cout << endl; // Nowa linia po każdym wierszu
    }

    return 0;
}

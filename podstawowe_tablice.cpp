#include <iostream>
using namespace std;

void wyswietl(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int liczby[5] = {10, 20, 30, 40, 50};
    wyswietl(liczby, 5);
    return 0;
    //sizeof() - zastanowić się co zwraca dla tablicy dynamicznej i statycznej ?
}
#include <iostream>
using namespace std;

// Funkcja zamieniająca dwie liczby całkowite
void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funkcja zamieniająca dwa znaki
void zamien(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Test: zamiana liczb
    int x = 5, y = 10;
    cout << "Przed zamiana liczb: x = " << x << ", y = " << y << endl;
    zamien(&x, &y);
    cout << "Po zamianie liczb:   x = " << x << ", y = " << y << endl;

    // Test: zamiana znaków
    char a = 'A', b = 'Z';
    cout << "Przed zamiana znakow: a = " << a << ", b = " << b << endl;
    zamien(&a, &b);
    cout << "Po zamianie znakow:   a = " << a << ", b = " << b << endl;

    return 0;

    //PRZYPOMNIENIE
    int x = 42;
    int* ptr = &x; // wskaźnik ptr wskazuje na zmienną x
    cout << *ptr << endl; // wypisze 42
}

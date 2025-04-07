#include <iostream>
#include <string>
using namespace std;

bool czy_palindrom(string napis) {
    int lewy = 0;
    int prawy = napis.length() - 1;

    while (lewy < prawy) {
        cout << napis[lewy] << endl;
        if (napis[lewy] != napis[prawy]) {
            return false;
        }
        lewy++;
        prawy--;
    }

    return true;
}

int main() {
    string napis;
    cout << "Podaj wyraz: ";
    getline(cin, napis);
    //getline - z wykładu 
    if (czy_palindrom(napis)) {
        cout << "To jest palindrom." << endl;
    } else {
        cout << "To nie jest palindrom." << endl;
    }

    cout << napis.length()<< endl; // działa tak samo jak napis.size()

    return 0;
}
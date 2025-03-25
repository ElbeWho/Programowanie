#include <iostream>

using namespace std;

// Funkcja sprawdzająca, czy liczba jest pierwsza
bool czyPierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true; 
}

// Funkcja obliczająca sumę cyfr liczby
int sumaCyfr(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int liczba;
    
    // Pobranie liczby od użytkownika
    while(true){
    	cout << "Podaj liczbę całkowitą z zakresu [10, 99]: ";
    	cin >> liczba;
    
    	// Sprawdzenie, czy liczba jest w zakresie
    	if (liczba < 10 || liczba > 99) {
        	cout << "Liczba jest poza zakresem!" << endl;
        	continue;
    	}
    	
    	// Sprawdzenie, czy liczba jest pierwsza
    	if (czyPierwsza(liczba)) {
        	cout << "Liczba " << liczba << " jest pierwsza." << endl;
    	} 
    	else {
        	cout << "Liczba " << liczba << " nie jest pierwsza." << endl;
    	}
    
    	// Obliczenie i wyświetlenie sumy cyfr
    	cout << "Suma cyfr liczby " << liczba << " wynosi: " << sumaCyfr(liczba) << endl;
    
    	break;
    }
}

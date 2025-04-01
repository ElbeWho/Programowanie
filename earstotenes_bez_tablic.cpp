#include <iostream>

void sieve_eratosthenes(int n, int current = 2) {
    if (current > n) return;
    
    // Sprawdzamy, czy liczba jest pierwsza
    bool is_prime = true;
    for (int i = 2; i * i <= current; i++) {
        if (current % i == 0) {
            is_prime = false;
            break;
        }
    }
    
    if (is_prime) {
        std::cout << current << " ";
        // Usuwamy wielokrotności rekurencyjnie
        int multiple = current * 2;
        while (multiple <= n) {
            multiple += current;
        }
    }
    
    sieve_eratosthenes(n, current + 1);
}




int main() {
    int n;
    std::cout << "Podaj gorny zakres: ";
    std::cin >> n;
    std::cout << "Liczby pierwsze do " << n << ": ";
    sieve_eratosthenes(n);
    return 0;
}

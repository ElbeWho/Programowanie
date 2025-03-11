#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Inicjalizacja generatora losowego
    int wynik = std::rand()%6+1 ;

    std::cout << "Wylosowana liczba: " << wynik << std::endl;

    return 0;
}
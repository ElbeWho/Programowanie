#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Podaj współczynnik a: ";
    std::cin >> a;
    std::cout << "Podaj współczynnik b: ";
    std::cin >> b;
    std::cout << "Podaj współczynnik c: ";
    std::cin >> c;
    double epsilon = 1e-9;
    double delta = b * b - 4 * a * c;
    std::cout << "Delta = " << delta << std::endl;
    
    if (delta < 0) {
        std::cout << "Równanie nie ma rzeczywistych pierwiastków." << std::endl;
    } else if (delta == 0 || delta < epsilon) {
        double x = -b / (2 * a);
        std::cout << "Równanie ma jeden pierwiastek: x = " << x << std::endl;
    } else {
        double x1 = (-b - std::sqrt(delta)) / (2 * a);
        double x2 = (-b + std::sqrt(delta)) / (2 * a);
        std::cout << "Równanie ma dwa pierwiastki: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    
    return 0;
}
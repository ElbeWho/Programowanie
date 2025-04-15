#ifndef TROJKAT_H
#define TROJKAT_H

class Trojkat {
private:
    double a, b, c;

    bool czyTrojkat(double x, double y, double z) const;

public:
    // Konstruktory i destruktor
    Trojkat();                          // konstruktor domyślny
    Trojkat(double a, double b, double c); // konstruktor z parametrami
    ~Trojkat();                         // destruktor
    
};

#endif

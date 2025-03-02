#include<iostream>  // Dołączamy bibliotekę do obsługi wejścia/wyjścia

using namespace std;

int main(){
    // Prośba o podanie wartości dla zmiennej a
    cout<<"podaj a: "<<endl;  
    int a;  // Deklaracja zmiennej a typu całkowitego
    cin>> a;  // Wczytanie wartości a z wejścia od użytkownika

    // Prośba o podanie wartości dla zmiennej b
    cout<< "podaj b:"<<endl; 
    int b;  // Deklaracja zmiennej b typu całkowitego
    cin>> b;  // Wczytanie wartości b z wejścia od użytkownika

    // Zastosowanie operatora preinkrementacji na zmiennej a (zwiększa a o 1 przed wypisaniem)
    cout<<"a++: "<< ++a << endl;

    // Zastosowanie operatora postinkrementacji na zmiennej b (zwiększa b o 1 po wypisaniu)
    cout<<"b++: "<< b++ << endl;

    return 0;  // Zakończenie programu i zwrócenie 0, co oznacza poprawne wykonanie
}

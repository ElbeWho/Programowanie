#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Podaj liczbe a: "<< endl;
    cin << a;
    cout<<"Podaj liczbe b: "<<endl;
    cin >> b;
    cout << "Suma liczb wynosi: " a+b <<endl;

    if (a>b){
        cout<<"Iloraz jest wiekszy od 1."<<endl;
        cout<<"Iloraz liczb wynosi: "<< a/b<<endl;
    }
    els {
        cout<<"Iloraz jest mniejszy od 1." <<endl;
    }
}
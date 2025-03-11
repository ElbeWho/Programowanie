#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float sumaF= 0;
double sumaD=0;
int main(){
    cout << fixed << setprecision(20);

    for (int i=0; i<=20; i++){
        sumaD += 1/pow(10, i);
        sumaF +=1/pow(10, i);
        cout<<"numer iteracji: " << i << setw(5) << "suma typu float: "
             << sumaF
                << setw(5) <<"  suma typu double: " << sumaD <<endl;
    }

    return 0;
}
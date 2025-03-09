#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0, j = n;
    while (i <= n) {
        cout << setw(5) << i << setw(5) << j << endl;
        i++;
        j--;
    }
    return 0;
    
}

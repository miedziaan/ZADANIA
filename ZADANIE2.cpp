#include <iostream>
using namespace std;

int Rekurencja(int a, int n) {
    if (n == 0) {            
        return 1;
    }
    if (n % 2 == 0) {        
        return Rekurencja(a * a, n / 2);
    }
    else {                 
        return a * Rekurencja(a, n - 1);
    }
}

int main() {
    int a, n;
    cout << "Podaj baze (a): ";
    cin >> a;
    cout << "Podaj wykladnik (n): ";
    cin >> n;

    int wynik = Rekurencja(a, n);
    cout << a << "^" << n << " = " << wynik << endl;

    return 0;
}

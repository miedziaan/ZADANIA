#include <iostream>
using namespace std;

int main() {
    int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int szukana;
    int l = 0;
    int p = 15;
    int sr;

    cout << "Podaj liczbe: ";
    cin >> szukana;

    while (l <= p) {
        sr = (l + p) / 2;
        if (tab[sr] == szukana) {
            cout << "Liczba " << szukana << " jest w tabeli";
            return 0; 
        }
        if (tab[sr] > szukana)
            p = sr - 1;
        else
            l = sr + 1;
    }


    cout << "Liczba " << szukana << " nie ma w tabeli";
    return 0;
}

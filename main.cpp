#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int n;
    cout << "podaj rozmiar tablicy\n";
    cin >> n;
    double  *wsk;
    wsk = new double[n]; //ustalam rozmiar tablicy
    for (int i =0; i < n; i++) {
        cout << "podaj wartosc " << i << endl;
        cin >> *(wsk + i);
    }
    double suma {0};

    for (int i =0; i < n; i++) {
        suma += *(wsk +i);
    }
    cout << (wsk+1);
    *(wsk+n)=5; //chce wstawic element za ostatnim elementem tablicy (nie mogę już zmienić ustalonego rozmiaru)
    delete[] wsk;
    cout << "suma: " << suma << endl;


    return 0;
}


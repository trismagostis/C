#include <iostream>

using namespace std;

int main() //oblicza sume podanych liczb przy pomocy tablicy dynamicznej
{
    int *wsk,n,suma=0;
    cout<<"podaj rozmiar tablicy"<<endl;
    cin>>n;
    wsk=new int[n]; //deklaracja tablicy dynamicznej
    for(int i=0;i<n;i++) //pobiera zawartosc tablicy
    {
        cout<<"podaj element o indeksie "<<i<<endl;
        cin >> *(wsk+i); //obsluga wartosci tablicy dynamicznej
    }
    for(int i=0;i<n;i++)//wypisuje tablice
    {
        cout<<"element o indeksie "<<i<<" = "<<*(wsk+i)<<endl;
    }
    for(int i=0;i<n;i++) //liczy sume elementów tablicy
    {
        suma=suma + *(wsk+i); //suma+=*(wsk+i)
    }
    cout<< "suma elementow = "<<suma;
    delete[] wsk;//usuniecie tablicy dynamicznej
    return 0;
}

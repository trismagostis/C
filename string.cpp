#include <iostream>
#include <string> //klasa objektów dynamicznych skalowalnych
using namespace std;

int main(){
    string napis;
    //getline(cin,napis); //sposób na pobieranie lancuchow wieloczlonowych
    napis = "bob jest bobem";
    napis.append(" ale fajnym"); //dolaczamy na koncu
    napis.insert(3,"ak");  //dolaczamy gdzie chcemy
    cout <<napis.compare("bobak jest bobem ale fajnym")<<endl;//zwraca zero dla napisów takich samych
    cout << napis;                                            // lub liczbe rozna od zero dla roznych
}


#include <cstring>
int main()
{
    /char cnapis[20];
    // cin>>cnapis; nie działa
    strcpy(cnapis,"bolek"); //strcpy funkcja z cstring kopiująca literał łańcuchowy (napis) do tablicy
    //znajduje się w cstring
    cout <<cnapis;/
    /*char cnapis="C++";
    cnapis="bolek"; //metoda działa, ale jest deprecjonowana.
    cout << cnapis;

    char napis[20];
    cin.get(napis,20);//pobieranie napisu wieloczłonowego
    cout<<napis;
    return 0;/
}


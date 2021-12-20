#include <iostream>
using namespace std;
void change(int *wsk)
{
    *wsk=*wsk+10;
}

int main()
{
    int i=5;
    int *wsk ;
    wsk=&i;
    cout << i<<endl;
    cout << *wsk<<endl;
    cout << wsk<<endl;

    return 0;
}
#include <iostream>
using namespace std;
void change(int *wsk)
{
    *wsk=*wsk+10;
}

int main()
{
    int i=5;
    int *wsk ;
    wsk=&i;
    /*cout<< "wartosc wskaznika: "<<wsk<<endl;
    cout<< "wartosc zmiennej przechowywanej pod adresem wskaznika: "<<*wsk<<endl;
    *wsk=*wsk+1;
    cout<<i<<endl;*/
    cout << i<<endl;
    change(wsk);
    cout << i<<endl;

    return 0;
}

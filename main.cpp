#include <iostream>
using namespace std;

int main()
{
    int *wsk;
    wsk=new int;
    *wsk=5;
    cout<<*wsk;
    delete wsk;
        return 0;
}


#include <iostream>
using namespace std;
typedef int calkowita;
using rzeczywiste=double;
int main()
{
    int a =5;
    double b =4.6;
    decltype (a+b)  c;
    c=a+b;
    auto g='d';
    cout << g;
    return 0;
    calkowita a =5;
    rzeczywiste b =4.6;
    cout << b;

}

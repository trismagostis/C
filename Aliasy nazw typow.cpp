#include <iostream>
using namespace std;
int main()
{
    int a =5;
    double b =4.6;
    decltype (a+b)  c;
    c=a+b;
    auto g='d';
    cout << g;
    return 0;
}

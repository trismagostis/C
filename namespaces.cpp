#include <iostream>
namespace stale
{
    const double pi=3.14;
}
namespace stale1
{
    const double pi=3;
}
using namespace stale1;
using namespace std;
using namespace stale;

int main()
{
    double r;
    cout <<"podaj promien okregu\n";
    cin>> r;

    cout << "pole okregu = "<< pi*r*r<<endl;
    return 0;
}


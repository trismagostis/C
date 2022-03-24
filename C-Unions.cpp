#include <iostream>
#include <cstring>
using namespace std;
union Student {
    char imie ;
    int ocena;
};
int main()
{
    Student uczen;
    uczen.ocena = 4;
    uczen.imie=3;

    cout << sizeof(Student)<<endl;
    //cout << uczen.ocena;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
union Student {
    char tab[20] ;
    int ocena;
};
int main()
{
    Student Kamil;
    Kamil {.ocena=4};
    cout << sizeof(Student);
    return 0;
}


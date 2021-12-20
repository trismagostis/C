
int zmienna1 =1, zmienna2=5;
/*const int *wsk;//taka deklaracja wskaznika uniemozliwia zmianę wskazywanej wartosci, wskażnik na stałą
wsk=&zmienna1;
//(*wsk)++;
wsk=&zmienna2;
cout<<*wsk;*/
int *const wsk=&zmienna1; //wskaznik stały musi być inicjowany
//wsk=&zmienna2; nie mogę zmienic adresu w stałym wskazniku
*wsk=17;
cout<<zmienna1;




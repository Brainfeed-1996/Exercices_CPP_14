#include <iostream>
using namespace std ;
int main()
{ int n, p ;
n=0 ;
while (n<=5) n++ ;
cout << "A : n = " << n << "\n" ;
n=p=0 ;
while (n<=8) n += p++ ;
cout << "B : n = " << n << "\n" ;
n=p=0 ;
while (n<=8) n += ++p ;
cout << "C : n = " << n << "\n" ;
n=p=0 ;
while (p<=5) n+= p++ ;
cout << "D : n = " << n << "\n" ;
n=p=0 ;
while (p<=5) n+= ++p ;
cout << "E : n = " << n << "\n" ;
}

/*
Résultats :

A : n = 6
B : n = 10
C : n = 10
D : n = 15
E : n = 21
*/

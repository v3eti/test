#include <iostream>// Lab2E8

using namespace std;
int a = 100;
int& refA = a; // Reference to a
int main()
{
   refA = 30; // Modifying refA modifies a
   cout << "\na="  << a << "\nrefA=" << refA;
   //It changes bolth the original and the refenrece
    return 0;
}

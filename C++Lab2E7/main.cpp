#include <iostream>//Lab2E7

using namespace std;
int x=100;
int* p1 = &x;
int* p2 = p1;





int main()
{
    cout << "\nx="  << x << "\np1=" << *p1 << "\np2=" << *p2;
    *p1=10;
        cout << "\nx="  << x << "\np1=" << *p1 << "\np2=" << *p2;
        *p2=12;
              cout << "\nx="  << x << "\np1=" << *p1 << "\np2=" << *p2;
    return 0;
}

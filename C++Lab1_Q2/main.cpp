//Lab1E2
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
//getline
short amount=0;
string he;
    cout <<"Enter Message: ";
    std::getline(std::cin,he); // get imput from user
short l = he.length();
transform(he.begin(), he.end(), he.begin(),::toupper); //Transforms all the lower case chareters.

for (int i=0; i<l; i++){ //Find the vowels
if ((((he[i]=='A' || he[i]=='E') || he[i]=='I') || he[i]=='O') || he[i]=='U')
    amount++;


}


for (int i=0; i<l/2; i++){ //loops for half of the amount of letters
    swap(he[i], he[l-i-1]); // swaps the farthest appart non swaped chareters
}

std::cout << "The mount of vowels:" << " " << amount << endl; //
std::cout << he << endl;
    return 0;
}



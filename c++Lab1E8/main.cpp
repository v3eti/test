#include <iostream> //Lab1E8
#include <string>
#include <cstring>
using namespace std;
string pass;

bool lowerT=0, upperT=0;
int main()
{
        cout <<"Enter password";
    cin >> pass;
 int length = pass.length();
    for (int i=0; i < length; i++){
 char c = pass[i];
    if (islower(c)){
        lowerT=1;}
         if (isupper(c)){
        upperT=1;}
    }



if (size(pass)>= 8){
    if(lowerT == 1){
            if (upperT == 1){
                    cout << "strong Password" << endl;
            } cout << "Weak Password. No uppercase letters." << endl;
    } cout << "Weak Password. No lowercase letters." << endl;
    }else{
        cout << "Weak Password. Too short." << endl;
}

    return 0;
}
/*

*/

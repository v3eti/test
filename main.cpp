#include <iostream>//Lab2E1
#include <cmath>
using namespace std;
int num1, num2;
double dub1, dub2;
bool roundTF = 0;
///int prdt=1;
//A
void multiply(int a, int b){ //mutiply function that multiplyes imputs 1 and 2 together
cout << "product = " << (a * b) << "\n";
}


void multiply(double a, double b){ // overloaded double version of multiply function
      cout << "product = " << (a * b) << "\n";
}

void multiply(int a, double b){ // overloaded double version of multiply function
      if (roundTF >= 1){
//if 1 than round
      cout << "product rounded = " << round(a * b) << "\n";

}else{

         cout << "product = " << (a * b) << "\n";
}
}
int main(){
    //get intigers
    cout <<"Enter first integer: ";
cin >> num1; // get input from user


    cout <<"Enter second integer: ";
cin >> num2; // get input from user

      multiply(num1,num2);

         cout << "A Done." << endl;

         //get dubles
    cout <<"Enter first double: ";
cin >> dub1; // get input from user


    cout <<"Enter second double: ";
cin >> dub2; // get input from user

      multiply(dub1,dub2);

   cout << "B Done." << endl;


       //get intiger
    cout <<"Enter first integer: ";
cin >> num1; // get input from user
//get duble
    cout <<"Enter second double: ";
cin >> dub2; // get input from user
//Get bool
   cout <<"Round 1=yes, 0=no: ";
cin >> roundTF; // get input from user

  multiply(num1,dub2);


    return 0;
}

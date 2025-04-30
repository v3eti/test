#include <iostream>//Lab1E5
 #include<cmath>
 #include <string>
 //#include <sstream>
using namespace std;


int main()
{
    int i;
int num;
    cout <<"Enter a sequence of degits to sum: ";
    cin >> num; // get imput from user

//int size = trunc(log10(num)) + 1;
int Scalc = num;
// the amount of intigers
   int size = 0; //amount of digits.
   while(Scalc != 0) {
      Scalc = Scalc / 10;
      size++;
   }
//std::cout <<  size; //test out

//std::cout << num / 1 % 10; // 1 % 10 last number 10 % 10 second last.
int sum = 0;
for (int i=size-1; i >= 0; i--){ //Loops for the length amount.
Scalc=pow(10, i); //10 to the power of i
sum = (num / Scalc % 10) + sum; // caculates the sum
}
cout << sum << " ("; //puts out the sum

for (int i=size-1; i >= 0; i--){ //Loops for the length amount.

Scalc=pow(10, i); //10 to the power of i
if (i > 0){
/*std::*/cout << num / Scalc % 10 << "+";
}
else{
cout << num / Scalc % 10;

}
}
cout << ")";


/*//number to string
std::string numstr = std::to_string(num);

std::stringstream ss;
ss << numstr;
cout << ss.str();

//std::cout << numstr[4] << std::endl; // numstr[0] -> first number
*/
/*
int num_arr[size]; //make array have the values



  for (int i=0; i>=size; i++){ //Loops for the length amount.

calc = (num_arr[i] + calc); // The current iteration + the last iteration sum.
//I cloud save this as an vector and use pointer to point out them indevidually so the output can reference them
std::cout << calc <<  std::endl;
  std::cout << num << num_arr << calc << std::endl;
  }
std::cout << calc << std::endl;
*/
    return 0;

}

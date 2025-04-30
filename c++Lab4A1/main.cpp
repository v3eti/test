#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string title;
    int pages;

    public:
    //constuctor
    Book(string t = "Untitled", int p = 0) : title(t), pages(p) {
    cout << "Constructor: \""<<title << "\" with" <<pages<<"pages\n";
     }
//Destructor
~Book(){
    cout << "Destructor: \"" <<title << "\"destroyed\n";
}
//method to display boook
void display() const{
cout << "Title:" << title <<", Pages: "<<pages<<endl;
}
};

int main()
{
    //create array of 3 book objects
    Book libarry[3] ={
Book("C++ Fundementals",300),
Book("Data structures", 450),
Book("Algorithms", 500)
    };
  cout << "\n--- Libary Contents ---\n";
  for(int i=0; i<3; ++i){
    libarry[i].display();
  }


    cout << "\n--- End of Program ---\n";

    return 0;
}

/*
int num1;
    cout <<"Enter a sequence of degits to sum: ";
    cin >> num; // get imput from user
*/

/*
Uisng overload?
+ add 2 complex i together
- minus 2 i
/ devide 2 i
use a frend function to prit the a +bi
a= regular number b*i= imagenery part

Fo the tests
crate 2 coplex numbers and display thier sum + differnece -?
and quoiten

frend for operator << and class to have a constractor


Complex c1(4, 5), c2(2, -3);
 cout << "c1 = " << c1 << endl;
 cout << "c2 = " << c2 << endl;
 cout << "Sum = " << c1 + c2 << endl;
 cout << "Difference = " << c1 - c2 << endl;
 cout << "Q

*/

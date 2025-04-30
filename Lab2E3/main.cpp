#include <iostream>//Lab2E3
#include <string>
using namespace std;

float fa,fb;
char op;

void add(){
 cout <<(fa+fb) << "\n";
}
 void neg(){
 cout <<(fa-fb) << "\n";
 }
void sum(){
 cout <<(fa*fb) << "\n";
 }
void dev(){
 cout <<(fa/fb) << "\n";
 }




int main()
{ //dialog an user imputs
    cout <<"celect operation (+,-,*,/): ";
    cin >> op;
    //get
    cout <<"Enter first number: ";
cin >> fa;
    cout <<"Second first number: ";
cin >> fb;

//function check / call
if (op=='+'){
add();
}else if(op=='-'){
neg();
}else if(op=='*'){
sum();
}else if(op=='/'){
dev();
}
else{
    cout <<"Operator error";
}
    return 0;
}

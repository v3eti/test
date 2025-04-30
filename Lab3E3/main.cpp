#include <iostream> //Lab3E3
#include <string>
using namespace std;

class Car{
private:
    string brand;
    int year;
    public:


   int* Constructor(string b, int y){

    brand= b;
    year= y;

    cout << "Car "  << brand << " from " << year << " created.\n";

}
    Destructor(){

        //delete
    cout << "Car " << brand <<  " destroyed";

    }

    void showinfo(){
    cout << "\nbrand:" << brand << " year:" << year;
}
};


int main()
{
//int *ptr= new int [5];
//Car *ptr= obj;
//delete ptr;
Car *obj = new Car(); //Car obj;
obj->Constructor("Toyota", 1987);
obj->showinfo();
obj->Destructor();


delete obj;


    //cout << "Hello world!" << endl;
    return 0;
}


/*
 void setName(string n){
    name= n;
    }

     string getName(){
 //cout << name << "\n";
 return name;




*/

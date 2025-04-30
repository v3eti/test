#include <iostream> //Lab3E2
#include <string>
using namespace std;

   class Book {
private:
    string title;
    int pages;
    string author="Peter"; //The horse is here
protected:
    float price;
public:
    string publisher;
    djsplayAuthorInfo(){
cout << author;
    }

    };




int main()
{
/*A
title = "Family guy" //Error caused by trying to change private class when we are not allowed to.
cout << "title" << endl; //Soulution is to give it acces to the book class
*/

//B
Book edit;
edit.publisher = "Big Man";
cout << edit.publisher << endl; // publisher is public and we are allowed to change it.


//C
edit.djsplayAuthorInfo(); //This works because we have acess to the function that has acess to the author info.
//If you make the function private it will give you an error

//D
//The access specifier/modifier allow you to control what has acess to pesific code

//E
//Helps us group data and code together


    return 0;
}

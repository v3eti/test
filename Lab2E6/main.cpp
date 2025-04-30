#include <iostream>//Lab2E6
#include <string>
using namespace std;

//User will be given 4 options add display search by id and exit this will be done by the switch
//sturct will be used to bild and out put student data
//Might want  to make it so that it is in the while true loop

struct Student {
 char name[50];
 int id;
 float grade;
};


//make this hole thing into the first function
int s,mode_select,Add_stud;
//s is the student name place for the array I guess
/*
void Student_add(){
cout <<"Student name\n";
cin >> 'Student.name[0]';



}
*/


int main()
{
     cout <<"(1)Add a student.\n(2)Display all students.\n(3)Search for a student by ID.\n(4) Exit the program.\n";
cin >> mode_select; // get input from user
//Student.name
//functions for adding wiuing and searching
/*
switch (mode_select){
    case Add_stud: Student_add()

    break;
    case
    default: return 0;

 }*/
/*
 cout << "Student ID\n";
cin >> Student.id;


cout <<"Student grade\n";
cin >> grade;
*/

Student.id = 1;
    return 0;
}

#include <iostream>//lab3E2
#include <string>
using namespace std;
class Sudent{
private:
    string name;
    int age;
    char grade;
    string group ="2025 group";
public:
//setter
    void setName(string n){
    name= n;
    }
    void setAge(int a){
    age = a;
    }
    void setGrade(char g){
    grade = g;
    }
//getter
    string getName(){
 //cout << name << "\n";
 return name;
    }
    int getAge(){
 //cout << age << "\n";
  return age;
    }
    char getGrade(){
 //cout << grade << "\n";
  return grade;
    }

    void displayInfo(){
        cout << "\nName:" << getName() << "\nAge:" << getAge() << "\nGrade:"<< getGrade();
/*getName();
getAge();
getGrade();*/
    }
};

int main()
{
    Sudent stud1;
    stud1.setName("David");
    stud1.setAge(20);
    stud1.setGrade('B');
    stud1.displayInfo();



    //cout << "age" << endl;


    return 0;
}

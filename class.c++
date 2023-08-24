// Create a class student that has private data members for the students roll number and age implement a parameterized constructor and a destructor for the class define a function isSenior outside the class that takes a student object as an argument and returns true if the students age  is greater than 24, otherwise returns false

#include<iostream>
using namespace std;
class Student
{
    private :
    int roll_number;
    int age;
    public:
    Student(int e, int n)
    {
        roll_number = e;
        age =n;
    }
    ~Student(){
        cout<< "Student object i destroyed "<<endl;
    }
    bool isSenior();
};
bool Student ::isSenior(){
    if(age >24){
        return true;
    }
    else
    return false;
}
int main()
{
    Student s(202,27);
   cout<<s.isSenior()<<endl;
  return 0;
};
//Constructor , destructor , function etc

/**
 define a class circle with data member radius declare member function set radius and get area indside the class define the function outside the class to set the radius and calculate the area of the circle
*/

// #include<bits/stdc++.h>
// using namespace std;

// class circle{
//    public:
//    double radius;

//    void setRadius(double r){
//       radius =r;
//    }

//   double getare(){
//     return 3.1416*radius*radius;
//   }

// };

// int main(){

//   circle c;
//   double r;
//   cout<<"Enter the value :"<< endl;
//   cin>>r;
//   c.setRadius(r);
//   cout<< "are of the circle : " << c.getare() << endl;

//   return 0;

// }


// create a class called student to represent a student the class should have a private data member for the students name implement a constructor to initialize the sudents name and  a destructor to display a message when a student object is destroyed

// #include<bits/stdc++.h>
// using namespace std;

// class student{
//     private:
//     string name;
//      public:
//      student(string x){
//         name = x;
//      };
//      ~student(){
//         cout<<"Is destroyed"<<endl;
//      }
//     void dis(){
//         cout<< "Enter name :" << name <<endl;
//     }
// };
// int main(){
//     student s1("Hello");
//     student s2 ("Bangladesh");
//     s1.dis();
//     s2.dis();

// };

// create a  class called person having private data members for the persons name and age implement a constructor to initialize the person objects a destructor to display a message when an object is destroyed define a member function to display  the person's information outside the class

#include<bits/stdc++.h>
using namespace std;
class person{
    private :
    string name;
    int age; 
    public:
    person(string e , int n){
      name = e;
      age =  n;
    };
  ~person(){
    cout<<"Is destroyed "<<endl;
  }
  void dis(){
    cout<< "Name :" << name << endl;
    cout<< "age : "  << age <<endl;
  };

};

int main(){
    person p1("Bro",23);
    p1.dis();
    return 0;
}
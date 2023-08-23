//Constructor , destructor , function etc

/**
 define a class circle with data member radius declare member function set radius and get area indside the class define the function outside the class to set the radius and calculate the area of the circle
*/

#include<bits/stdc++.h>
using namespace std;

class circle{
   public:
   double radius;

   void setRadius(double r){
      radius =r;
   }

  double getare(){
    return 3.1416*radius*radius;
  }

};

int main(){

  circle c;
  double r;
  cout<<"Enter the value :"<< endl;
  cin>>r;
  c.setRadius(r);
  cout<< "are of the circle : " << c.getare() << endl;

  return 0;

}
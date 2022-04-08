#include <iostream>
using namespace std;
#include "student.h"

int main(){

	//student m1(1111,2,"Chavakarn"),m2(112),m3;
  student m1(6413222,2.9,"Phumed",123456),m2(112),m3,*p;
  m1.display(); // id gpa name
  //m2.display();
  //m3.display();
  cout<<endl<<"======="<<endl;
  m1.display_person(); //id

   //student *mp=new student(6313171,1.7,"Kridchai");//delete mp;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa

//Try until 14:55 -->
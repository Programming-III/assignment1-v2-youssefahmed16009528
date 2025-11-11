#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
 class Student :
  int yearLevel;
  string major;
    public :
     Student(string n, int i, int majorField, int yL) : Person(n,i){
         major = majorField;
         yearLevel = yL;
     }
     void display(){
         Person::display();
         cout<<"Major: "<<major<<", Year Level: "<<yearLevel<<endl;
     }












#endif

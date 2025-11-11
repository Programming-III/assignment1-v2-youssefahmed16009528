#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class Instsructor :
   string department;
   int experienceYears;
    public :
     Instructor(string n, int i, string dept, int expY) : Person(n,i){
         department = dept;
         experienceYears = expY;
     }
     void display(){
         Person::display();
         cout<<"Department: "<<department<<", Experience Years: "<<experienceYears<<endl;
        }











#endif

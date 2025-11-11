#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class Person {
    string name;
    int id;
  public :
   Person(string n, int i){
       name = n;
       id = i;
   }
    void display(){
         cout<<"Name: "<<name<<", ID: "<<id<<endl;
    }
};











#endif

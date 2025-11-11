#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course{
    string courseCode;
    string courseName;
    int maxStudents;
    Student* enrolledStudents[100];
    int currentStudents;
    public :
     course( string cCode, string cName, int maxS){
         courseCode = cCode;
         courseName = cName;
         maxStudents = maxS;
         currentStudents = 0;
     }
        void addStudent(const Student &s){
         if(currentStudents < maxStudents){
             enrolledStudents[currentStudents] = new Student(s);
             currentStudents++;
         } else {
             cout<<"Cannot add more students, class is full."<<endl;
         }
        }
     void displayCourseInfo(){
         cout<<"Course Code: "<<courseCode<<", Course Name: "<<courseName<<", Max Students: "<<maxStudents<<", Current Enrolled: "<<currentStudents<<endl;
         cout<<"Enrolled Students:"<<endl;
         for(int i=0; i<currentStudents; i++){
             enrolledStudents[i]->display();
         }













#endif

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
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







// ==================== Student Class Implementation ====================

 class Student {
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

};


// ==================== Instructor Class Implementation ====================
class Instsructor {
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
};




// ==================== Course Class Implementation ====================
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
     }
};






// ==================== Main Function ====================
int main() {
       Person p("Omar Nabil", 2202);
    p.display();
    Student s("Omar Nabil",2202,Informatics,2);
    s.display();
    Instructor inst("Dr Lina Khaled", Computer Science, 2);
    inst.display();
    course c("CS101", "Introduction to Programming", 3);
    c.addStudent(s);
    
    return 0;
}

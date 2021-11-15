#include<iostream>
#include "records.h"
Student s1(001, "Niharika");
Course c1(201, "Physics",4);
Grade g1(1, 201, 'A');

int main(){

  std::cout<<"Student id : "<<s1.get_id()<<"\n";
  std::cout<<"Student name : "<<s1.get_name()<<"\n";
  std::cout<<"Course id :"<<c1.get_id()<<std::endl;
  std::cout<<"Course name : "<<c1.get_name()<<"\n";
  std::cout<<"Course credits : "<<c1.get_credits()<<"\n";
  std::cout<<"Student "<<g1.get_student_id()<<" have "<<g1.get_grade()<<" grade in course "<<g1.get_course_id()<<std::endl;
  return(0);
}

#include "cow.h"// to include the class definitions from the header file
// To resolve the scope of all the members of cow clss use 'cow::' before the member name

//constructor for cow class
cow::cow(std::string name_i,int age_i, unsigned char purpose_i){
  name=name_i;
  age=age_i;
  purpose=purpose_i;
}
  
//getter functions:functions to return data 
std::string cow::get_name(){
  return name;
}
int cow::get_age(){
  return age;
}
unsigned char cow::get_purpose(){
  return purpose;
}

//setter functions:functions to change data members of the class
void cow::set_age(int new_age){
  age=new_age;
}
void cow::set_name(std::string new_name){
  name=new_name;
}
void cow::set_purpose(unsigned char new_purpose){
  purpose=new_purpose;
}

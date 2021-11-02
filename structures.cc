#include<iostream>
#include<string>

struct cow{
  std::string name;
  int age;
  unsigned char purpose;
};

//Enumerations are preferred over constants because of encapsulstion it provides
//In case of enumerated objects, the output of the object is character type index
//you need to convert the output to int type explicitly to use the same
enum cow_purpose {dairy, meat, hide, pet};
int main(){
  cow my_cow;
  my_cow.name="Benny";
  my_cow.age=9;
  my_cow.purpose=dairy;
  std::cout<<my_cow.name<<" is a type-"<<(int)my_cow.purpose<<" cow."<<std::endl;
  std::cout<<my_cow.name<<" is "<<my_cow.age<<" years old."<<std::endl; 
  return(0);
}

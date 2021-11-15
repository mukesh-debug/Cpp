//References are aliases to existing variables 
//to define or declare a reference for a variable use 'type& reference_name= original_variable_name'
//useful application of reference can be for memory saving like passing parameters by reference
#include<iostream>
int my_int=33;
int& ref_int=my_int;
int main(){
  std::cout<<"value of original variable "<<my_int<<std::endl;
  std::cout<<"address of original variable "<<&my_int<<std::endl;
  std::cout<<std::endl;

  std::cout<<"value of reference variable "<<ref_int<<std::endl;
  std::cout<<"address of reference variable "<<&ref_int<<std::endl;
  return(0);
}

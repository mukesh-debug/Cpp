#include<iostream>
#include<string>
#include "cow.h"

int main(){
  cow my_cow("Dolly", 8, pet);

  std::cout<<"MY cow's name is "<<my_cow.get_name()<<std::endl;             
  std::cout<<"Age of my cow is "<<my_cow.get_age()<<std::endl;              
  std::cout<<"Purpose of my cow is "<<(int)my_cow.get_purpose()<<std::endl; 

  my_cow.set_age(12);
  my_cow.set_name("Groot");
  my_cow.set_purpose(hide);
  std::cout<<std::endl;

  std::cout<<"[Output after using setter functions to change the data]"<<std::endl;
  std::cout<<"MY cow's name is "<<my_cow.get_name()<<std::endl;             
  std::cout<<"Age of my cow is "<<my_cow.get_age()<<std::endl;              
  std::cout<<"Purpose of my cow is "<<(int)my_cow.get_purpose()<<std::endl; 
  return(0);
}

#include<iostream>
#include<string>
//This program is just to remind what elements to use in a standard program.
//Also to get familiar with its working and the manin function.
//Note that the string variables can only be used for a single word i.e no space can be used within a string
int main(){
  std::string name;
  std::cout<<"Please Enter your name to proceed."<<std::endl;
  std::cin>>name;
  std::cout<<"Greetings! "<<name<<std::endl;
  return(0);
}

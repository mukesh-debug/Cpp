#include<iostream>
#include<cstdint> 
#include<typeinfo>
/*To use the standard library of c for different types of predefined integers
Here the syntax is like 'u(if unsigned)int32(or any other bit length)_t' */
#define PI 3.1415926535897932384626433 //define macros or symbol to represent any thing
#define DEBUG //Comment this line to not execute the statements in the ifdef block
int main(){
  std::cout<<"The value of pi is : "<<PI<<std::endl;
  #ifdef DEBUG
    std::cout<<"[This text is from ifdef block]"<<std::endl;
  #endif
  /*ifdef can be used for printing info for debugging and when not required, define directive can be made comment and thus making the ifdef directive null and void*/
  int8_t notreal=9;
  int16_t small=1234;
  int32_t large=987543009;
  large+=small;
  std::cout<<"[Printing value and type of the variable 'notreal']"<<notreal<<std::endl;
  std::cout<<typeid(notreal).name()<<std::endl;
  std::cout<<"value of 'small' : "<<small<<std::endl;
  std::cout<<"value of 'large' now : "<<large<<std::endl; 
  return(0);
}

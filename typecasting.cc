#include<iostream>

float flt = -7.49f;
int32_t sgn;
uint32_t unsgn;

int main(){
  sgn=flt;
  unsgn=sgn;
  std::cout<<"[Floating point number]float: "<<flt<<std::endl;
  std::cout<<"[Signed integer,implicit type casting of flt]int32 : "<<sgn<<std::endl;
  std::cout<<"[Unsigned integer, assigned the value of sgn]uint32 : "<<unsgn<<std::endl;
  std::cout<<"(The unsigned number will be 2^32-7, i.e 2's complement of the number assigned to it.)"<<std::endl;
  
  int fahrenheit = 100;
  int celcius;
  //celcius=((float)5/9)*(fahrenheit-32);
  celcius=(5.0f/9)*(fahrenheit-32);
  std::cout<<std::endl;
  std::cout<<"[Converting Fahrenheit to celcius]"<<std::endl;
  std::cout<<"Fahrenheit: "<<fahrenheit<<std::endl;
  std::cout<<"Celcius: "<<celcius<<std::endl;

  float pt=10.99;//if pt is double fractional part will be 9900 and not different like in case of float
  std::cout<<std::endl;
  std::cout<<"[Float]: "<<(float)pt<<std::endl;
  std::cout<<"[Integer part]: "<<(int)pt<<std::endl;
  std::cout<<"[Fractional part]: "<<(int)((pt-(int)pt)*10000)<<std::endl;
  return(0);
}

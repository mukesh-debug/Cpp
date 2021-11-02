#include<iostream>
#include<typeinfo> //This header file from standard library is to use typeid()
int main(){
  /* To use the 'auto' keyword for declaring and initialising variables without specifying their types.
  Here auto keyword can automatically define what the type of variable is based on the assigned values to them.*/
  auto a=5;
  auto b=3.4;
  auto c=3.14f;
  auto d=2.9815;
  auto e='H';
  auto f="Hello, World";
  auto g=12345678901;
  auto h=012;
  auto i=0b1100;
  auto j=0xFFFF;
  auto k=true;
  
  std::cout<<a<<"\t"<<typeid(a).name()<<std::endl;
  std::cout<<b<<"\t"<<typeid(b).name()<<std::endl;
  std::cout<<c<<"\t"<<typeid(c).name()<<std::endl;
  std::cout<<d<<"\t"<<typeid(d).name()<<std::endl;
  std::cout<<e<<"\t"<<typeid(e).name()<<std::endl;
  std::cout<<f<<"\t"<<typeid(f).name()<<std::endl;
  std::cout<<g<<"\t"<<typeid(g).name()<<std::endl;
  std::cout<<h<<"\t"<<typeid(h).name()<<std::endl;
  std::cout<<i<<"\t"<<typeid(i).name()<<std::endl;
  std::cout<<j<<"\t"<<typeid(j).name()<<std::endl;
  std::cout<<k<<"\t"<<typeid(k).name()<<std::endl;
  return(0);
  }

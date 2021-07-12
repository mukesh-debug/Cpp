/*
This script is my first script in c++ after a long time.
*/
#include<stdio.h>
#include<iostream>

int main()
{
  char str[]="Hey You!\n";
  char name[20];
  std::cout<<str<<"Who?\n";
  std::cout<<"Enter your Name\n";
  std::cin>>name;
  std::cout<<"Hello, "<<name<<"\n";
  printf("Hello, World\n");
  int age;
  char ch;
  std::cout<<"Do you want to know about yourself(Y/N)\n";
  std::cin>>ch;
  if(ch=='y' or 'Y')
  {
    std::cout<<"Enter your age\n";
    std::cin>>age;
    if(age>=13 and age<19)
      std::cout<<"You are a Teenager\n";
    else if(age<13)
      std::cout<<"You are a child\n";
    else
      std::cout<<"You are a Grown Up\n";

  }


}

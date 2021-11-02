#include<iostream>
#include<string> //from standard library of c++, std::string is class
#include<cstring> //string from standard library of c for character array as string

const int LENGTH1=25;
char array_str1[LENGTH1]="Hello, World!";
char array_str2[LENGTH1]="I am new here.";

std::string std_str1="Hey! Guys.";
std::string std_str2="How are you all.";

int main(){
  std::cout<<"[Printing character arrays, and their manupulations]"<<std::endl;
  std::cout<<"Length of First array: "<<LENGTH1<<std::endl;
  std::cout<<"First character array: "<<array_str1<<std::endl;
  std::cout<<"second character array: "<<array_str2<<std::endl;
  strcat(array_str1, array_str2);
  std::cout<<"First character array after concatenation: "<<array_str1<<std::endl;
  std::cout<<std::endl;
 
  std::cout<<"[First string]: "<<std_str1<<std::endl;
  std::cout<<"[Second string]: "<<std_str2<<std::endl;
  std::cout<<"[Concatenated string]: "<<std_str1+std_str2<<std::endl;
  std::cout<<"[More concatination]: "<<std_str1+" "+std_str2<<std::endl;
  return(0);
}

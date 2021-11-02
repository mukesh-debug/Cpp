#include<iostream>
using namespace std;
//Macros for defining constants is sometimes discouraged since, defining constants as macros can't be checked for silly mistakes.
//macros can't be checked for type errors as it is treated as symbols. 
//#define ARR_LENGTH 5
const int ARR_LENGTH=5;
int arr[ARR_LENGTH];

int main(){
  arr[0]=13;
  arr[1]=15;
  arr[2]=18;
  std::cout<<"Array 'arr'has "<<ARR_LENGTH<<" elements."<<endl;
  std::cout<<"arr[0] : "<<arr[0]<<endl;
  std::cout<<"arr[1] : "<<arr[1]<<endl;
  std::cout<<"arr[2] : "<<arr[2]<<endl;
  std::cout<<"arr[3] : "<<arr[3]<<endl;
  std::cout<<"arr[4] : "<<arr[4]<<endl;
  return(0);
}

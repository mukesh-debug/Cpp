#include<iostream>
#include<stdio.h>

/*
This for loop is generating numbers from 1 upto the user input from STDIN
The main function only takes a positive integer as input
*/
int main()
{
  int n;
  std::cout<<"Enter a non negative number: ";
  std::cin>>n;
  for(int i=1;i<=n;i++)
  {
    std::cout<<i<<" ";
  }
  std::cout<<"\n";
}

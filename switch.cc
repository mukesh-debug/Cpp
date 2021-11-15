#include<iostream>
int main(){
  int operand1, operand2, result;
  char operation;
  std::cout<<"Enter operand 1 : ";
  std::cin>>operand1;
  std::cout<<"\n";
  
  std::cout<<"Enter operand 2 : ";
  std::cin>>operand2;
  std::cout<<"\n";

  std::cout<<"Enter operation['+', '-', '*', '/']: ";
  std::cin>>operation;
  std::cout<<"\n";
  
  switch(operation){
    case '+': result=operand1+operand2;
    break;
    case '-' : result = operand1-operand2;
    break;

    case '*' : result = operand1*operand2;
    break;
    case '/' : result = operand1/operand2;
    break;     
    default: result=operand1+operand2;
  }
  std::cout<<"Result of your operation (";
  std::cout<<operand1<<" "<<operation<<" "<<operand2<<") is "<<result<<std::endl;
  return(0);
}

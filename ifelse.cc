#include<iostream>

int a = 998;
bool flag = true;
char letter = 'e';

int main(){
  if(a>1000)
    std::cout<<"Warning: a is not above 1000."<<"\n"; 
  if(a%2)
    std::cout<<"a is odd"<<"\n";
  else
    std::cout<<"a is even"<<"\n";
  
  if(flag){
    std::cout<<"value of flag is true"<<"\n";
    }
  else
    std::cout<<"value of flag is false"<<"\n";
  std::cout<<"letter "<<letter<<" is ";
  if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' && letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
    std::cout<<"not";
  std::cout<<" vowel."<<"\n";
  return(0);
}

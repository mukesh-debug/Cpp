#include<iostream>
#include<vector>
std::vector<int> numbers = {9, 8, 7, 6, 5, 4, 3, 2};
int main(){
  std::vector<int>::iterator ptr = numbers.begin();
  
  while(ptr != numbers.end()){
    std::cout<<*ptr<<"\t";
    ptr = next(ptr, 1);  //next() function advances the iterator.
    }
  std::cout<<std::endl;
  
  int i=0;
  do{
    std::cout<<numbers[i]<<"(pos "<<i<<")"<<"\t";
    i++;
    }while(i!=(int)numbers.size());
  
  std::cout<<std::endl;
  return(0);
}

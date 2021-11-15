#include<iostream>
#include<vector>
std::vector<int> numbers = {12, 32, 49, 22, 91, 34, 65};
auto average = 0.0f;
int main(){
  for(int i = 0; i<(int)numbers.size(); i++){
    average += numbers[i];
    }
  std::cout<<"Average of all the elements of the vector is "<<average/numbers.size()<<std::endl;
  average = 0.0f;
  for(auto x : numbers){
    average += x;
  }
  std::cout<<"Average of all the elements of the vector is "<<average/numbers.size()<<std::endl;
    
  return(0);
}

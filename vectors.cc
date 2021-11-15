//STL vectors are dynamically sized containers
//vectors can store any type of elements(i.e it is generic container class)
//vectors are part of the Standard Template Library(STL)
/* two things to consider to work with vectors 
  first include vector class 
  second syntax is 'vector<data type> vector_name;'*/
#include<iostream>
#include<vector>
#include<string>
class cow{
public:
  cow(std::string name_i, int age_i, unsigned char purpose_i){
    name=name_i;
    age=age_i;
    purpose=purpose_i;
    }
  
  std::string get_name(){
    return name;}
  int get_age(){
    return age;}
  unsigned char get_purpose(){
    return purpose;}
  std::string name;
  int age;
  unsigned char purpose;
};
enum cow_purpose {dairy, pet, hide};
std::vector<int> primes;
/*vectors have two ends front and back but since vectors store elements sequentilly
  we will require reallocation if elements are inserted from front*/

std::vector<cow> cattle;
int main(){
  //size() and push_back() are member functions of the vector STL class
  std::cout<<"vector 'primes' has "<<primes.size()<<" elements."<<std::endl;
  primes.push_back(2);
  primes.push_back(3);
  primes.push_back(5);
  primes.push_back(7);

  std::cout<<"vector 'primes' has "<<primes.size()<<" elements."<<std::endl;
  std::cout<<"the element at index 1 is "<<primes[1]<<std::endl;
  primes[1]=5; //elements can also be accessed for writing
  std::cout<<"the element at index 1 is "<<primes[1]<<std::endl;
  
  cattle.push_back(cow("Daisy", 7, dairy));
  cattle.push_back(cow("Lily", 8, pet));
  cattle.push_back(cow("Tulip", 3, hide));
  cattle.push_back(cow("Daffodil", 9, dairy));
  
  std::cout<<"First cow is "<<cattle.begin()->get_name()<<std::endl;
  std::cout<<"cow at index 1 is "<<cattle[1].get_name()<<std::endl;
  std::cout<<"Second last cow is "<<prev(cattle.end(), 2)->get_name()<<std::endl;
  std::cout<<"Last cow in the list is "<<(cattle.end()-1)->get_name()<<std::endl;
 
  return(0);
}

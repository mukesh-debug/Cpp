#include<iostream>
#include<string>

class cow{
public:
  //constructor for cow class
  cow(std::string name_i,int age_i, unsigned char purpose_i){
    name=name_i;
    age=age_i;
    purpose=purpose_i;
  }
    
  //getter functions:functions to return data 
  std::string get_name(){
    return name;
  }
  int get_age(){
    return age;
  }
  unsigned char get_purpose(){
    return purpose;
  }

  //setter functions:functions to change data members of the class
  void set_age(int new_age){
    age=new_age;
  }
  void set_name(std::string new_name){
    name=new_name;
  }
  void set_purpose(unsigned char new_purpose){
    purpose=new_purpose;
  }
private:
  std::string name;
  int age;
  unsigned char purpose;
};
enum cow_purpose {dairy, meat, hide, pet};
  
int main(){
  cow my_cow("Daisy", 9, dairy);
  
  std::cout<<"MY cow's name is "<<my_cow.get_name()<<std::endl;             
  std::cout<<"Age of my cow is "<<my_cow.get_age()<<std::endl;              
  std::cout<<"Purpose of my cow is "<<(int)my_cow.get_purpose()<<std::endl; 

  my_cow.set_age(12);
  my_cow.set_name("Groot");
  my_cow.set_purpose(hide);
  std::cout<<std::endl;
  std::cout<<"[Output after using setter functions to change the data]"<<std::endl;
  std::cout<<"MY cow's name is "<<my_cow.get_name()<<std::endl;             
  std::cout<<"Age of my cow is "<<my_cow.get_age()<<std::endl;              
  std::cout<<"Purpose of my cow is "<<(int)my_cow.get_purpose()<<std::endl; 
/*my_cow.name="Dolly";
  my_cow.age=10;
  my_cow.purpose=pet;
  std::cout<<"MY cow's name is "<<my_cow.name<<std::endl;
  std::cout<<"Age of my cow is "<<my_cow.age<<std::endl;
  std::cout<<"Purpose of my cow is "<<(int)my_cow.purpose<<std::endl;
  */
  return(0);
}

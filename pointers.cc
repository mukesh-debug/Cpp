//Pointers are special type of variable that holds memory addresses
// to declare a pointer to point to integer type variable we use int *ptr;
//to make ptr(pointer variable) point to a variable of same type use ptr=&a;
//here & is address of operator and returns the address of the variable at its right
#include<iostream>

int a=37;
int *ptr;

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

//To create a pointer of type cow
cow *my_cow;
int main(){
  ptr=&a;
  std::cout<<"contents of variable 'a' is "<<a<<std::endl;
  std::cout<<"        address of variable 'a':"<<ptr<<std::endl;
  std::cout<<"value of pointer variable 'ptr':"<<ptr<<std::endl;
  std::cout<<"        address of variable 'ptr':"<<&ptr<<std::endl;
  std::cout<<"        the value 'ptr' is pointing to is "<<*ptr<<std::endl;
  
  //To dynamically allocate value of my_cow use 'new' keyword 
  my_cow=new cow("Daisy", 9, dairy);
  
  std::cout<<"[created the pointer 'my_cow']"<<std::endl;
  //The correct way of accessing the members of a pointed object is to first dereference the pointer
  //and then access a member of the object the pointer is pointing to
  std::cout<<"MY cow's name is "<<(*my_cow).get_name()<<std::endl; //To dereference use '()'            
  //instead of using '*' to reference value of pointer pointing to and dereference using '()' just use '->' for doing the same
  std::cout<<"Age of my cow is "<<my_cow->get_age()<<std::endl;              
  std::cout<<"Purpose of my cow is "<<(int)my_cow->get_purpose()<<std::endl; 

  //To delete the pointer 'my_cow' after use 
  delete my_cow; //delete is the keyword here
  std::cout<<"[deleted the pointer 'my_cow']"<<std::endl;

  
  return(0);
}

#ifndef COW_H //here ifndef means if COW_H is not defined then execute the block
  #define COW_H
  #include<string>
  class cow{
  public:
  //constructor for cow class
    cow(std::string name_i,int age_i, unsigned char purpose_i);
    
  //getter functions:functions to return data 
    std::string get_name();
    int get_age();
    unsigned char get_purpose();

  //setter functions:functions to change data members of the class
    void set_age(int new_age);
    void set_name(std::string new_name);
    void set_purpose(unsigned char new_purpose);
  private:
    std::string name;
    int age;
    unsigned char purpose;
  };
  enum cow_purpose {dairy, meat, hide, pet};
#endif //COW_H

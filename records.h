#ifndef RECORDS_H
  #define RECORDS_H
  #include<iostream>
  #include<string>
  class Student{
    int id;
    std::string name;
    public:
      Student(int id_i, std::string name_i);
      int get_id();
      std::string get_name();
  };
  class Course{
    int id;
    std::string name;
    int8_t credits;
    public:
      Course(int id_i, std::string name_i, int8_t credits_i);
      int get_id();
      std::string get_name();
      int8_t get_credits();
  };
  class Grade{
    int student_id;
    int course_id;
    char grade;
    public:
      Grade(int student_id_i, int course_id_i, char grade_i);
      int get_student_id();
      int get_course_id();
      char get_grade();
  };
#endif

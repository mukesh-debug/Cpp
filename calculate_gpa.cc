#include <iostream>
#include <vector>
#include "records.h"
using namespace std;
vector<Student> students = {Student(1,"George P. Burdell"),Student(2,"Nancy Rhodes")};
vector<Course> courses = {Course(1,"Algebra",5), Course(2,"Physics",4), Course(3,"English",3), Course(4,"Economics",4)};
vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};
float GPA = 0.0f;
int id;

int main(){
	cout << "Enter a student ID: ";
	cin >> id;
	// Calculate the GPA for the selected student.
	switch(){
		case 'A' : point = 4.0;
		break;	
		case 'B' : point = 3.0;
		break;	
		case 'C' : point = 2.0;
		break;	
		case 'D' : point = 1.0;
		break;	
		case 'F' : point = 0.0;
		break;	
		default: point = 0.0;}
	// Write your code here

	string student_str;
	student_str = students[0].get_name(); // Change this to the selected student's name

	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}



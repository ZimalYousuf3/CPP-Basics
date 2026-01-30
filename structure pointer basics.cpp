#include <iostream>
#include <string>
using namespace std ;

struct Student{
	string name ;
	int roll ;
	float cgpa;
};

void printStudentPtr (Student *s){
	cout << " Name: " << s->name << endl ; 
	cout << " Roll: " << s->roll << endl ;
	cout << " CGPA: " << s->cgpa << endl ;
}

int main ()
{
	Student s ;
	s.name = "Zimal";     
    s.roll = 27;
    s.cgpa = 3.9;
	printStudentPtr (&s) ;
	
	return 0
}



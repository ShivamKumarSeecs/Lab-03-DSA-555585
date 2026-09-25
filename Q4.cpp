//Shivam Kumar 555585
#include <iostream>
#include <string>
using namespace std;

struct Student
{
	int rollNo;
	string fullName; //fullname must be in string
	float marks;
};

void displayStudent(const Student* s) 
{
	cout << "Roll Number: " << (*s).rollNo << endl
		<< "Full Name: " << (*s).fullName << endl
		<< "Marks: " << (*s).marks << endl;
};
void updateMarks(Student* s, float newMarks)
{
	s->marks = newMarks;
};


void main() {
	Student* s1 = new Student; //created on heap

	//input
	cout << "Enter Roll Number: ";
	cin >> (*s1).rollNo; //dereference
	
	cin.ignore(); //clear input buffer
	
	cout << "Enter Full Name: ";
	getline(cin, (*s1).fullName); //get whole line
	
	cout << "Enter Marks: ";
	cin >> (*s1).marks;
	
	cout << endl;

	displayStudent(s1); //display

	float newMarks; //newmarks variable for inp[ut
	cout << "Enter new marks: ";
	cin >> newMarks;
	updateMarks(s1, newMarks); // call fucntion

	displayStudent(s1);

	// release the ptr
	delete s1;
	s1 = nullptr;

	

}

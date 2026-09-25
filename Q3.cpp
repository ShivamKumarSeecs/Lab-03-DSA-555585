#include <iostream>
#include <string>
using namespace std;

struct Student
{
	int rollNo;
	string fullName; //fullname must be in string
	float marks;
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

	//labels
	cout << "Roll Number: " << (*s1).rollNo << endl
		<< "Full Name: " << (*s1).fullName << endl
		<< "Marks: " << (*s1).marks << endl;

	// release the ptr
	delete s1;
	s1 = nullptr;

	

}

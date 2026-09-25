#include <iostream>
#include <string>
using namespace std;

struct Student
{
	int rollNo;
	string fullName; //fullname must be in string
	float marks;
};

void displayIfExists(const Student* s) 
{
	if (s != nullptr) {
		cout << "Roll Number: " << (*s).rollNo << endl
			<< "Full Name: " << (*s).fullName << endl
			<< "Marks: " << (*s).marks << endl;
	}
	else {
		cout << "No record available" << endl; 
	}
};


void main() {
	Student* s1 = nullptr; //initialized to nullptr
	
	displayIfExists(s1); //first call

	s1 = new Student; //allocated on heap

	//input
	cout << "Enter Roll Number: ";
	cin >> (*s1).rollNo; //dereference
	
	cin.ignore(); //clear input buffer
	
	cout << "Enter Full Name: ";
	getline(cin, (*s1).fullName); //get whole line
	
	cout << "Enter Marks: ";
	cin >> (*s1).marks;
	
	cout << endl;

	displayIfExists(s1); //second call


	// release the ptr
	delete s1;
	s1 = nullptr;

	displayIfExists(s1); //third call

	

}

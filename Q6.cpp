//Shivam Kumar 555585

#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNo;
	string fullName;
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

void updateMarks(Student* s, float newMarks)
{
	s->marks = newMarks;
};

int main() {
	bool ended = false;  //flag for ending program
	Student* s1 = nullptr;
	while (!ended) {
		int option;
		cout << "HELLO" << endl;
		cout << "0: Create Record" << endl
			<< "1: Display Record" << endl
			<< "2: Update Marks" << endl
			<< "3: Delete Record" << endl
			<< "4: Exit" << endl;
		cout << "Enter Option: ";
		cin >> option;
		switch (option) {
			case 0:
				if (s1 == nullptr) {
					s1 = new Student;

					//input
					cout << "Enter Roll Number: ";
					cin >> (*s1).rollNo; //dereference

					cin.ignore(); //clear input buffer

					cout << "Enter Full Name: ";
					getline(cin, (*s1).fullName); //get whole line

					cout << "Enter Marks: ";
					cin >> (*s1).marks;

					cout << endl;
				} else {
					cout << "Already created" << endl;
				}
				break;
			case 1:
				displayIfExists(s1);
				break;
			case 2:
				if (s1 != nullptr) {
					float newMarks; //newmarks variable for inp[ut
					cout << "Enter new marks: ";
					cin >> newMarks;
					updateMarks(s1, newMarks); // call fucntion
				} else {
					cout << "Not created" << endl;
				}
				break;
			case 3:
				if (s1 != nullptr) {
					delete s1;
					s1 = nullptr;
					cout << "Record Deleted" << endl;
				}
				else {
					cout << "No record to delete" << endl;
				}
				break;

			case 4:
				ended = true; //end the menu loop
				cout << "Exiting Program" << endl;
				break;

			default:
				cout << "Invalid Choice. Try again." << endl;
		}
	}

	delete s1;
	s1 = nullptr;
	return 0;
}

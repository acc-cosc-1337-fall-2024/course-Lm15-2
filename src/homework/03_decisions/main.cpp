// write include statements
#include <iostream>
#include <decisions.h>
using std::cin;
using std::cout;

int main()
{
	int choice;
	int selection_if;
	int selection_switch;

	cout << "Please enter your selection for using if or switch to detrime letter grade from numeric:" << "\n";
	cout << "1- Option 1(Using If)" << "\n";
	cout << "2- Option 2(Using Switch)" << "\n";
	cout << "3- Option 3(End Program)" << "\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "You've chosen Option 1(Using If) \n";
		cout << "Please enter the number grade: \n";
		cin >> selection_if;
		cout << "Your grade is: " << get_letter_grade_using_if(selection_if) << "\n";
		break;
	case 2:
		cout << "You've chosen Option 2(Using Switch) \n";
		cout << "Please enter the number grade: \n";
		cin >> selection_switch;
		cout << "your grade is: " << get_letter_grade_using_if(selection_switch) << "\n";
		break;
	case 3:
		break;
	}

	return 0;
}
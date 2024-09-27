//write include statements
#include<iostream>
#include "repetition.h"
using namespace ::std;
//write using statements

int main() 
{
	int choice;
	int selectionFACTORIAL, selectionGCD1, selectionGCD2;
	do{
		cout << "Please enter your selection for using factorial or GCD: \n";
	cout << "1- Option 1(Using factorial)\n";
	cout << "2- Option 2(Using GCD)\n";
	cout << "3- Option 3(End Program)\n";
cin >> choice;
switch (choice)
	{
	case 1:
		cout << "You've chosen Option 1(Using factorial) \n";
		cout << "Please enter the number: \n";
		cin >> selectionFACTORIAL;
		cout << "The Factorial of " << selectionFACTORIAL << " is: " << factorial(selectionFACTORIAL) << "\n";
		break;
	case 2:
		cout << "You've chosen Option 2(Using GCD) \n";
		cout << "Please enter the first number: \n";
		cin >> selectionGCD1;
		cout << "Please enter the second number: ";
		cin >> selectionGCD2;
		cout << "The gcd of "<< selectionGCD1 << "and " << selectionGCD2 <<" is: " << gcd(selectionGCD1, selectionGCD2) << "\n";
		break;
	}

}
while (choice != 3 );
return 0;
}
#include"func.h"
#include<iostream>
using namespace ::std;
int main() 
{
	int choice;
	string String_DNA;
	do{
		cout << "Menu: \n";
	cout << "1- Get GC Content\n";
	cout << "2- Get DNA Complement\n";
	cout << "3- Exit\n";
cin >> choice;
switch (choice)
	{
	case 1:
	cout<< "Enter a DNA string";
	cin >> String_DNA;
	cout << "The GC of " << String_DNA << " is: " << get_gc_content(String_DNA);
		break;
	case 2:
	cout<< "Enter a DNA string";
	cin >> String_DNA;
	string reverse_Total = reverse_string(String_DNA);
	cout << "The complement of " << String_DNA << " is " << get_dna_complement(reverse_Total);
		break;
	}
}
while (choice != 3 );
return 0;
}
//write include statements
#include <iostream> 
#include "hwexpressions.h"

//write namespace using statement for cout
using std :: cout, std :: cin;
int main()
{
//Meal Amount
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout << "Enter the amount the meal costs:" <<"\n"; 
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
//Tip rate
	cout << "Enter the Tip rate: "<<"\n";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;
// receipt
	cout <<"Meal Amount: "<<meal_amount<<"\n";
	cout <<"Sales Tax: " << tax_amount<<"\n";
	cout <<"Tip Amount:  "<< tip_amount <<"\n";
	cout <<"Total: "<< total <<"\n";

	return 0;
}

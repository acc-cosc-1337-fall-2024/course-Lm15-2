#include "hwexpressions.h"
const double tax_rate = 0.0675;
//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double get_sales_tax_amount (double meal_amount){
	
	double product = meal_amount * tax_rate;
	return product; 
}
double get_tip_amount(double meal_amount, double tip_rate){

	double result = meal_amount * tip_rate;
	return result; 
}
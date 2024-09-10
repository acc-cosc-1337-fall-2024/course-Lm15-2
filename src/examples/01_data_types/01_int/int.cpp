/*
Function echo_variable returns the incoming parameter

@param int-integer type
@return return the int parameter
*/
#include<iostream>
#include "int.h"
using std::cout;

int echo_varibale(int num)
{ 
	return num;
	
}
double calculate_interest(double rate, int amount){
	return rate * amount;
}
int add_numbers(int num1, int num2){
    int result = num1 + num2;

    cout<<"Result is"<<result;

    return 0;
}
int divide_numbers(double num1, double num2){
    return num1 / num2;
}

int return_ascii_value(char ch){
    return ch;
}
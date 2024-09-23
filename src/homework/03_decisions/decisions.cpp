// write include statement for decisions header
#include <iostream>
#include "decisions.h"

using std::cin;
using std::cout;
// Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
  string letter;
  if (grade >= 0 && grade <= 59)
  {
    letter = "F";
  }
  else if (grade >= 60 && grade <= 69)
  {
    letter = "D";
  }
  else if (grade >= 70 && grade <= 79)
  {
    letter = "C";
  }
  else if (grade >= 80 && grade <= 89)
  {
    letter = "B";
  }
  else if (grade >= 90 && grade <= 100)
  {
    letter = "A";
  }
  else
  {
    letter = "value is not in the range of 000-100";
  
  }
  return letter;
}
string get_letter_grade_using_switch(int grade)
{

  string letter;
  switch (grade)
  {
  case 0 ... 59:
    letter = 'F';
    break;
  case 60 ... 69:
    letter = 'D';
    break;
  case 70 ... 79:
    letter = 'C';
    break;
  case 80 ... 89:
    letter = 'B';
    break;
  case 90 ... 100:
    letter = 'A';
    break;
  default:
    break;
  }
  return letter;
}
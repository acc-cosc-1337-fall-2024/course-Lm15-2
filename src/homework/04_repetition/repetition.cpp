// add include statements
#include "repetition.h"
using namespace ::std;
// add function(s) code here
int factorial(int num)
{

    int result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int gcd(int num1, int num2)
{
    int result = min(num1, num2);
    while (result > 0)
    {
        if (num1 % result == 0 && num2 % result == 0)
        {
            break;
        }
        result--;
    }
      return result; 
} 

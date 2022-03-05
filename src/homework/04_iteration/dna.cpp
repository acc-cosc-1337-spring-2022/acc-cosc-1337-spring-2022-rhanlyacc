#include "dna.h"
#include <iostream>

using std::cout; using std::cin; using std::string;


int i = 1;
int num;
int sum = 1;

int factorial(int num) 
{   
    while (i <=num) 
    {
        sum = sum * i;
        i++;
    }
    return(sum);
}

int gcd(int num1, int num2) 
{
    if (num1 == 0 || num2 == 0)
    return 0;
    else if (num1 == num2)
    return num1;
    else if (num1 > num2)
    return gcd(num1-num2, num2);
    else return gcd(num1, num2-num1);


}
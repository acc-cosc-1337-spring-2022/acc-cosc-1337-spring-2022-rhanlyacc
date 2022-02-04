//write include statements

#include "variables.h"
#include <iostream>



//write namespace using statement for cout

using std::cin;  using std::cout;

int main()
{
	
	int num1;
	cout<<"Enter a number: ";
	cin>>num1;

	int result;
	result = multiply_numbers(num1);
	cout<<"Result is: "<<result<<"\n";

	int num2 = 4;
	result = multiply_numbers(num2);
	cout<<"Result is: "<<result<<"\n";




	return 0;
}

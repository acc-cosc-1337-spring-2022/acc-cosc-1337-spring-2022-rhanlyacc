#include<iostream>
#include<string>
#include "decisions.h"
#include <math.h>
#include "dna.h"

using std::cout; using std::cin; using std::string;


int main() 
{
	
	int choice;
    int num;
    int num1;
    int num2;
    
    do
    {
		cout << std::endl
		<< " 1 - Factorial.\n"
		<< " 2 - Greatest Common Divisor.\n"
		<< " 3 - Exit.\n"
		<< " Enter your choice and press return: ";
		cin >> choice;	
		
		
		switch (choice)
		{
			case 1:
			cout<<" Enter value: ";
			cin>>num;
			cout<<" The factorial is : " <<factorial(num) <<std::endl;
			break;
			
            case 2:
			cout<<" Enter a value: ";
			cin>>num1;
            cout<<" Enter another value: ";
            cin>>num2;
			cout<<" The GCD is: " <<gcd(num1, num2) <<std::endl;
			
			break;
			case 3:
			cout<<" You have exited the program";
			break;
		}
		
        
    }   
	while (choice != 3);
}

#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

/*


Min Grade   Max Grade	Letter Grade 
90          100             A             
80          89              B             
70			79				C
60			69				D
00          59              F             
-----------------------------------------------
                                      


*/

int main() 
	{
	
	int choice;

		cout << std::endl
		<< " 1 - Letter grade using if.\n"
		<< " 2 - Letter grade using switch.\n"
		<< " 3 - Exit.\n"
		<< " Enter your choice and press return: ";
		cin >> choice;	
		
		int grade;
		switch (choice)
		{
			case 1:
			cout<<" Enter numerical grade: ";
			cin>>grade;
			cout<<" Your grade is: " <<get_letter_grade_using_if(grade);
			break;
			case 2:
			cout<<" Enter numerical grade: ";
			cin>>grade;
			cout<<" Your grade is: " <<get_letter_grade_using_switch(grade);
			
			
			break;
			case 3:
			cout<<" You have exited the program";
			break;
		}
		return 0;
	}
//write include statements
#include<string>
#include<iostream>
#include "sequence.h"

using std::cout; using std::cin; using std::string;


int main() 
{
	
	int choice;
	string dna;

    do
    {
		cout << std::endl
		<< " 1 - Get GC Content .\n"
		<< " 2 - Get DNA Complement.\n"
		<< " 3 - Exit.\n"
		<< " Enter your choice and press return: ";
		cin >> choice;	
		
		
		switch (choice)
		{
			case 1:
			cout<<"Enter DNA string: ";
           	cin>>dna;
			cout<<" GC Content :" <<get_gc_content(dna) <<std::endl;
			break;
			
            case 2:
			cout<<" Enter DNA string: ";
			cin>>dna;
            
			cout<<" DNA Complement:  " <<get_dna_complement(dna) <<std::endl;
			
			break;
			case 3:
			cout<<" You have exited the program";
			break;
		}
		
        
    }   
	while (choice != 3);
}

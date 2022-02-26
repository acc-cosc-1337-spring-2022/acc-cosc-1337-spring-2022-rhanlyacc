#include<iostream>
#include "decisions.h"
#include<string>
using std::cout; using std::cin; using std::string;





int grade;
char letter_grade;

char get_letter_grade_using_if(int grade)
{
	char letter_grade = 0;
	    
      if (grade<0 || grade >100)
	  {
		cout<<"Not calcuable. Please enter a value between 1-100.\n";
    }  
      else if(grade >=90)
			letter_grade = 'A';

	    else if(grade >=80)
			letter_grade = 'B';

	    else if(grade >=70)
			letter_grade = 'C';

	    else if(grade >=60)
			letter_grade = 'D';

	    else
			letter_grade = 'F';

	  return letter_grade;
	
}



char get_letter_grade_using_switch(int grade)
{
  if (grade<0 || grade >100)
	  {
		cout<<"Not calcuable. Please enter a value between 1-100.\n";
    } 

    else
      switch(grade/10)
      {
        case (10):
        case (9):
          letter_grade = 'A';
          break;
        case (8):
          letter_grade = 'B';
          break;
        case (7):
          letter_grade = 'C';
          break;
        case (6):
          letter_grade = 'D';
          break;
        
        default:
          letter_grade = 'F';
      }

    return letter_grade;

}
//write include statements
#include "expressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cin;  using std::cout;

/*

*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount = .0675;
	
	
	cout<<"Enter cost of meal: ";
	cin>>meal_amount;
	
	cout<<"Enter percentage of tip: ";
	cin>>tip_rate;
	

	get_sales_tax_amount(meal_amount);
	{
		return (tax_amount);
	}
	

	get_tip_amount(tip_rate, meal_amount);
	{
		return(tip_amount);
	}

	double total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal Amount: "<<meal_amount<<"";
	
	cout<<"Sales Tax:	"<<tax_amount<<"";
	
	cout<<"Tip Amount:  "<<tip_amount<<"";
	
	cout<<"Total:	"<<total<<"";

	return 0;

}

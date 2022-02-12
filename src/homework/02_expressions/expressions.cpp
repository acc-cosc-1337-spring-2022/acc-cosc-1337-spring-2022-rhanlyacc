#include "expressions.h"


double get_sales_tax_amount(double meal_amount)
{
	double tax_rate = .0675; 
	return (tax_rate * meal_amount);
}



double get_tip_amount(double tip_rate, double meal_amount)
{
	return (tip_rate/100) * meal_amount;
}



#include "variables.h"
//define constant tax rate
const double tax_rate = 0.0675;

//find sales tax from meal amont and sales rate
double get_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount;

}


//get tip from meal amount and tip rate
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}
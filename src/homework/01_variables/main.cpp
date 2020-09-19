//write include statements
#include<iostream>
#include"variables.h"
#include<iomanip>


//write namespace using statement for cout
using std::cout;   using std::cin;


int main()
{
	double meal_amount = 0.0;
	double tip_rate = 0.0;
	double tax_amount = 0.0;
	double tip_amount = 0.0;
	double total = 0.0;

	cout<<"Please enter the meal amount: $";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Please enter the tip rate in decimal format (ie 20% = .20): ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<< std::setprecision(2) << std::fixed;
	cout<<"Meal Amount:     $"<<meal_amount<<"\n";
	cout<<"Sales Tax:     $"<<tax_amount<<"\n";
	cout<<"Tip Amount:     $"<<tip_amount<<"\n";
	cout<<"Total:     $"<<total;

	return 0;
}

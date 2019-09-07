// Name:
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>
int main()
{
  double mealcost = 44.50;
  double tax_percentage = 0.034487;
  double tip_percentage = 0.089;
  double totalbill;

  // 3.44875% of tax on meal cost
  double tax = mealcost * tax_percentage;
  // 8.9% of tip on meal cost
  double tip = mealcost * tip_percentage;
  std::cout <<"What is the mealcost";
  std::cin>> mealcost;


/*
  std::cout << "What is the tax of the meal cost";
  std::cin >> tax;
  tax = 0.034487;
  std::cout << "What is the tip of the meal cost";
  std::cin >> tip;
  tip = 0.089;
*/


  // Calulate total bill
  totalbill = mealcost * tax * tip;

  // Display the total bill
  std::cout << "The total bill of the meal is $56.8487./n ";

  return 0;
}

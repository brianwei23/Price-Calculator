#include <iostream>
#include <bits/stdc++.h>
#include "Price.h"

int main(){
  char choice;
  double subTotalPrice;
  double tax;
  double tip;

  std::cout << "What is the subtotal?" << std::endl;
  std::cin >> subTotalPrice;
  std::cout << "What is the tax percentage? This should be based on the city your in." << std::endl;
  std::cin >> tax;
  std::cout << "How much do you want to tip? Put the percentage." << std::endl;
  std::cin >> tip;

  std::cout << "Hope you had a nice meal. Press 'A' to calculate the tax. Press 'B' to calculate the tip. Press 'C' to calculate the price with tax. Press 'D' to calculate the full price with tax and tip included." << std::endl;

  std::cin >> choice;

  Price calc;

  if(choice == 'A' || choice == 'a'){
      std::cout << "The tax is $" << std::fixed << std::setprecision(2) << calc.calcTax(subTotalPrice, tax) << "." << std::endl;
  }
  else if(choice == 'B' || choice == 'b'){
      std::cout << "The tip is $" << std::fixed << std::setprecision(2) << calc.calcTip(subTotalPrice, tip) << "." << std::endl;
  }
  else if(choice == 'C' || choice == 'c'){
      std::cout << "The price with tax is $" << std::fixed << std::setprecision(2) << calc.priceWithTax(subTotalPrice, tax) << "." << std::endl;
  }
  else if(choice == 'D' || choice == 'd'){
      std::cout << "The total price with tax and tip included is $" << std::fixed << std::setprecision(2) << calc.priceWithTaxAndTip(subTotalPrice, tax, tip) << "." << std::endl;
  }
  else{
      std::cout << "That is an invalid choice." << std::endl;
  }

  return 0;
}  
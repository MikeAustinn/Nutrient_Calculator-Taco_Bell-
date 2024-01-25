#include "Burritos.cpp"
#include "Taco_bell_tester.cpp"
#include <iomanip>
#include <iostream>
#include <list>
#include <ostream>
using namespace std;

int main() {
  string choice;
  int input;
  int total_calories = 0;
  int total_fat = 0;
  int total_cholesterol = 0;
  int total_sodium = 0;
  int total_carbs = 0;
  int total_protein = 0;
  double total_price = 0;
  list<string> total_order;
  Taco myTaco;
  NutritionalInformation info;

  do {
    cout << "What do you want" << endl;
    cout << "1. For tacos" << endl;
    cout << "2. For Burritos" << endl;
    cout << "3. Size and Sweets" << endl;
    cout << "4. Specailities" << endl;
    cout << "5. Quit " << endl;
    cout << "______________________" << endl;
    cout << " Option: ";
    cin >> input;
    cout << endl;

    switch (input) {
    case 1:
      info = Taco_runner();
      for (string order : info.total_order) {
        total_order.push_back(order);
      }
      cout << endl;
      total_calories += info.total_calories;
      total_fat = info.total_fat;
      total_cholesterol = info.total_cholesterol;
      total_sodium = info.total_sodium;
      total_carbs = info.total_carbs;
      total_protein = info.total_protein;
      total_price = info.total_price;
      break;
    case 2:
      Burritos();
      break;
    case 3:
      // code
      break;
    case 4:
      // code
      break;
    case 5:
      // total order and nutrition
      break;
    default:
      cout << "INVALID CHOICE CHOOSE OPTION 1-5" << endl;
      break;
    }

    cout << "Anything Else?: ";
    cin >> choice;
  } while (choice == "yes" || choice == "Yes");

  cout << "You total order is: " << endl;
  for (string order : total_order) {
    cout << order << ", ";
  }
  cout << endl; 
  cout << "Total Fat: " << total_fat << " g" << endl;
  cout << "Total Cholesterol: " << total_cholesterol << " mg" << endl;
  cout << "Total Sodium: " << total_sodium << " mg" << endl;
  cout << "Total Carbs: " << total_carbs << " g" << endl;
  cout << "Total Protein: " << total_protein << " g" << endl << endl;
  cout << "Total Price: $" << total_price << endl; 
  return 0;
}
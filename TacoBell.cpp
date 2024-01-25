#include "Taco_bell.h"

void Taco::displayMenu() {
  std::cout << "What type of taco would you like?" << std::endl;
  std::cout << "1. Soft Taco" << std::endl;
  std::cout << "2. Soft Taco Supreme" << std::endl;
  std::cout << "3. Crunchy Taco" << std::endl;
  std::cout << "4. Crunchy Taco Supreme" << std::endl;
  std::cout << "5. Nacho Cheese Doritos Locos Tacos" << std::endl;
  std::cout << "6. Nacho Cheese Doritos Locos Tacos Supreme" << std::endl;
  std::cout << "7. Spicy Potato Soft Taco" << std::endl;
}
void Taco::getUserChoice() {
  std::cout << "Enter your choice (1-7): ";
  std::cin >> choice;
  std:: cout << endl; 
}
void Taco::get_item(int choice) {
  int total_calories;

  switch (choice) {
  case 1:
    taco_type = "Soft Taco";
    Calories = 180;
    Fat = 9;
    Cholesterol = 25;
    Sodium = 500;
    Carbs = 18;
    Protein = 9;
    Price = 1.89;
    break;
  case 2:
    taco_type = "Soft Taco Supreme";
    Calories = 210;
    Fat = 10;
    Cholesterol = 25;
    Sodium = 510;
    Carbs = 20;
    Protein = 9;
    Price = 2.59;
    break;
  case 3:
    taco_type = "Crunchy Taco";
    Calories = 170;
    Fat = 10;
    Cholesterol = 25;
    Sodium = 300;
    Carbs = 13;
    Protein = 8;
    Price = 1.89;
    break;
  case 4:
    taco_type = "Crunchy Taco Supreme";
    Calories = 190;
    Fat = 11;
    Cholesterol = 25;
    Sodium = 320;
    Carbs = 15;
    Protein = 8;
    Price = 2.59;
    break;
  case 5:
    taco_type = "Nacho Cheese Doritos Locos Tacos";
    Calories = 170;
    Fat = 9;
    Cholesterol = 25;
    Sodium = 350;
    Carbs = 13;
    Protein = 8;
    Price = 2.69;
    break;
  case 6:
    taco_type = "Nacho Cheese Doritos Locos Tacos Supreme";
    Calories = 190;
    Fat = 11;
    Cholesterol = 25;
    Sodium = 360;
    Carbs = 15;
    Protein = 8;
    Price = 3.19;
    break;
case 7: 
    taco_type = "Spicy Potato Soft Taco";
    Calories = 240;
    Fat = 12;
    Cholesterol = 10;
    Sodium = 480;
    Carbs = 28;
    Protein = 5;
    Price = 1.59;
    break;
    
  }
}


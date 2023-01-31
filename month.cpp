// Write a program month.cpp that asks the user to input the 
year and the month (1-12) and prints the number of days in that 
month (taking into account leap years). You may not use switch 
case or arrays even if you know these language constructs.

#include <iostream>

bool year_type(int year);
int common_year(int month);
int leap_year(int month);

int main() {
  int year, month;
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << "Enter month: ";
  std::cin >> month;

  
  if(year_type(year) == false){
  common_year(month);
    } else 
  leap_year(month); 

}

bool year_type(int year) {
    

    bool leap;
    if (year % 4 != 0) {
    std::cout << "Common year" << std::endl;
      leap = false;
    //int common_year(int month);
  } else if (year % 100 != 0) {
    std::cout << "Leap year" << std::endl;
      leap = true;
    //int leap_year(int month);
  } else if (year % 400 != 0) {
    std::cout << "Common year" << std::endl;
      leap = false;
    //int common_year(int month);
  } else{
    std::cout << "Leap year" << std::endl;
    //int leap_year(int month);
      leap = true;
      }
  return leap;
    
}
  
// Common year----------------------------
int common_year(int month) {
  if(month == 2) {
    std::cout << "28 days" << std::endl; 
  } else if(month != 2 && month % 2 != 0) {
      std::cout << "31 days" << std::endl; 
    } else if(month != 2 && month % 2 == 0) {
        std::cout << "30 days" << std::endl;
      }
  return 0; 
}  

// Leap year -------------------------
int leap_year(int month) {
  if(month == 2) {
    std::cout << "29 days" << std::endl; 
  } else if(month != 2 && month % 2 !=0) {
    std::cout << "31 days" << std::endl; 
    } else if(month != 2 && month % 2 == 0) { 
        std::cout << "30 days" << std::endl; 
      }   
  return 0;
}

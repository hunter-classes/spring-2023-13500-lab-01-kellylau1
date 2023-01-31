// Write a program leap.cpp that asks the user to input an 
integer representing
// a year number (1999, 2016, etc.). If the input year is a leap 
year according
// to the modern Gregorian calendar, it should print Leap year, 
otherwise, print
// Common year.

#include <iostream>

int main() {
  int year;
  std::cout << "Year number: ";
  std::cin >> year;
  
  if (year % 4 != 0) {
    std::cout << "Common year" << std::endl;
  } else if (year % 100 != 0) {
    std::cout << "Leap year" << std::endl;
  } else if (year % 400 != 0) {
    std::cout << "Common year" << std::endl;
  } else
    std::cout << "Leap year" << std::endl;
  
}

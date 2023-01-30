// Write a program smaller.cpp that asks the user to input two integer numbers and 
prints out the smaller of the two.

#include <iostream>

int main() { 
  int firstnum, secondnum; 
  std::cout << "First number: "; 
  std::cin >> firstnum;
  std::cout << "Second number: ";
  std::cin >> secondnum; 

  if(firstnum < secondnum){
    std::cout << "The smaller of the two is " << firstnum << std::endl; 
  } else {
    std::cout << "The smaller of the two is " << secondnum << std::endl; 
  }
}

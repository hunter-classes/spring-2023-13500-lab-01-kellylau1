// Write a program smaller3.cpp that asks the user to input 
three integer numbers, and prints out the smallest of the three.

// (Hint: There are many possible solutions here. One possible 
strategy: Given numbers x, y, and z, you can first compare x and 
y, take whichever is smaller and compare it with z.)

#include <iostream>

int main() { 
  int firstnum, secondnum, thirdnum; 
  std::cout << "First number: "; 
  std::cin >> firstnum;
  std::cout << "Second number: ";
  std::cin >> secondnum; 
  std::cout << "Third number: ";
  std::cin >> thirdnum; 

  if(firstnum < secondnum && firstnum < thirdnum){
    std::cout << "The smaller of the three is " << firstnum << 
std::endl;
  } else if(secondnum < firstnum && secondnum < thirdnum) {
      std::cout << "The smaller of the three is " << secondnum 
<< std::endl;
  } else 
      std::cout << "The smaller of the three is " << thirdnum << 
std::endl;

  
}

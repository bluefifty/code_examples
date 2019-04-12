#include <iostream>

int main() {

  // Write a for loop here:
  
  for (int i = 99; i > 2; i--) {
  
    std::cout << i << " bottles of pop on the wall, ";
    std::cout << i << " bottles of pop.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i - 1 << " bottles of pop on the wall.\n\n";
  
  }
  
  std::cout << "2 bottles of pop on the wall, 2 bottles of pop.\n";
  std::cout << "Take one down and pass it around.\n";
  std::cout << "1 bottle of pop on the wall.\n\n";
  
  std::cout << "1 bottle of pop on the wall, 1 bottle of pop.\n";
  std::cout << "Take one down and pass it around.\n";
  std::cout << "0 bottles of pop on the wall.\n\n";
  
  std::cout << "No more bottles of pop on the wall.\n";
  std::cout << "No more bottles of pop.\n";
  std::cout << "Go to the store and buy some more,\n";
  std::cout << "99 bottles of pop on the wall.\n";
  
}

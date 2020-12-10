#include <iostream>

int main()
{
  int x, y, remainder;		
  std::cout << "Enter 2 numbers.";
  std::cin >> x; 
  std::cin >> y;
  remainder = x%y;
  std::cout <<"The remainder is "<< remainder;
	
	return 0;
}

#include <iostream>

int main () {
	double a, b;
	
	std::cin >> a >> b;
	
	std::cout << "S = " << a*b << std::endl << "P = " << 2*(a+b) << std::endl;
	
	system("pause");
	return 0;
}
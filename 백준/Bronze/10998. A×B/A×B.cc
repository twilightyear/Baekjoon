#include <iostream>

int main(){

	int a,b;

	std::cin >> a;
	if (a<0){
		std::cout << "조건 : a > 0"<< std::endl;
		exit(0);
	}
	std::cin >> b;
	if (b>=10){
		std::cout << "조건 : b < 0"<< std::endl;
		exit(0);
	}
	std::cout << a*b << std::endl;

	return 0;
}
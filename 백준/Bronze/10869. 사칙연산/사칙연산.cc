#include <iostream>

int main(){

	int a,b;

	std::cin >> a;
	if (a<0){
		std::cout << "조건 : a >= 0"<< std::endl;
		exit(0);
	}
	std::cin >> b;
	if (b>10000){
		std::cout << "조건 : b <= 10,000"<< std::endl;
		exit(0);
	}

	std::cout << a+b << std::endl;
	std::cout << a-b << std::endl;
	std::cout << a*b << std::endl;
	std::cout << a/b << std::endl;
	std::cout << a%b << std::endl;

	return 0;
}
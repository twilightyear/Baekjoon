#include <iostream>

int main(){

	int y;
	std::cin >> y;

	if (1000>y or y>3000){
		std::cout << "조건 : [ 1000 <= y <= 3000 ]" << std::endl;
		exit(0);
	}

	std::cout << y-543 << std::endl;
	return 0;
}
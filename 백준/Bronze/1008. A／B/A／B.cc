#include <iostream>
#include <iomanip>

int main(){

	double a,b, total=0;

	std::cin >> a;
	if (a<=0){
		std::cout << "조건 : a > 0"<< std::endl;
		exit(0);
	}
	std::cin >> b;
	if (b>=10){
		std::cout << "조건 : b < 10"<< std::endl;
		exit(0);
	}

	total=a/b;
	std::cout << std::setprecision(10) << total << std::endl;

	return 0;
}

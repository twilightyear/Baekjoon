#include <iostream>
using namespace std;

int main(){
	int total;
	int list_count;
	int price;
	int product_count;
	int check = 0;

	cin >> total >> list_count;

	if (list_count>100 or list_count<1 or total<1 or total>1000000000){
		cout << "ER0" << endl;
		exit(0);
	}

	for (int i=1;i<=list_count;i++){
		cin >> price >> product_count;

		if (price < 1 or price > 1000000 or product_count>10 or product_count<1){
			cout << "ER1" << endl;
			exit(1);
		}

	check += price*product_count;
	price = 0;
	product_count = 0;

	}
	//cout << check <<endl;
	if (total == check){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
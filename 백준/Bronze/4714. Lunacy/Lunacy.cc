#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float weight,original;

	while(1){
		cin >> original;

		if(original<0){
			break;
		}
		weight = original*0.167;
		cout << fixed << setprecision(2) << "Objects weighing " << original << " on Earth will weigh "<< weight << " on the moon.\n";
	}
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N,K,G;
	vector<int> my_vector;
	cin >> N >> K;

	for(int i=0;i<K;i++){
		cin >> G;
		if((G*100)/N>=0 && 4>=(G*100)/N){
			my_vector.push_back(9);
		} else if((G*100)/N>4 && 11>=(G*100)/N){
			my_vector.push_back(8);
		} else if((G*100)/N>11 && 23>=(G*100)/N){
			my_vector.push_back(7);
		} else if((G*100)/N>23 && 40>=(G*100)/N){
			my_vector.push_back(6);
		} else if((G*100)/N>40 && 60>=(G*100)/N){
			my_vector.push_back(5);
		} else if((G*100)/N>60 && 77>=(G*100)/N){
			my_vector.push_back(4);
		} else if((G*100)/N>77 && 89>=(G*100)/N){
			my_vector.push_back(3);
		} else if((G*100)/N>89 && 96>=(G*100)/N){
			my_vector.push_back(2);
		} else if((G*100)/N>96 && 100>=(G*100)/N){
			my_vector.push_back(1);
		}
	}

	for(int i=0;i<K;i++){
		if(i==K-1){
			cout << 10-my_vector[i] << '\n';
		} else {
			cout << 10-my_vector[i] << ' ';
		}
	}
	return 0;
}
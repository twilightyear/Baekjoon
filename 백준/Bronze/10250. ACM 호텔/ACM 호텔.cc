#include <iostream>
#include <string>
using namespace std;




//핵심구간
int calculate(int H, int W, int N){


	int result,room_num,floor_num;
	string value;



	if ((N%H)!= 0){
		room_num = (N/H)+1;
		floor_num = N%H;
	} else {
		room_num = (N/H);
		floor_num = H;
	}


	value = to_string(floor_num);
	if (room_num<10){
		value+="0";
	}
	value += to_string(room_num);
	result = stoi(value);



	return result;
}





int main(){
	int cnt,H,W,N;

	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> H >> W >> N;
		cout << calculate(H,W,N) << endl; 
	}

	return 0;
}
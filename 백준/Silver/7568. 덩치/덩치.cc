#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N,x,y,cnt;
	vector<pair<int,int>> array;
	vector<int> result;
	cin >> N;


	for(int i=0;i<N;i++){
		cin >> x >> y;
		array.push_back({x,y});
	}


	for(int j=0;j<N;j++){
		cnt=1;
		for(int k=0;k<N;k++){
			if(array[j].first < array[k].first and array[j].second < array[k].second){
				cnt++;
			}
		}
		result.push_back(cnt);
	}


	for(int l=0;l<N;l++){
		if(l!=N-1){
			cout << result[l] << ' ';
		} else {
			cout << result[l] << '\n';
		}
		
	}


	return 0;
}
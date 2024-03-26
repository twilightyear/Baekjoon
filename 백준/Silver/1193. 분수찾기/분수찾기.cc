#include <iostream>
using namespace std;

int main(){
	int count,result;
	int universal_count=0;
	cin >> count;
	int tmp = count;

	int i=0;

	while(1){
		if(count>0){
			i++;
			count-=i;
			universal_count++;
		} else {
			break;
		}

	}

	if (tmp == 1){
		result = 1;
	} else {
		for (int i=1;i<=universal_count-1;i++){
			tmp-=i;
		}
		result = tmp;
	}
	
	if (universal_count%2 == 0){
		cout << result << "/" << universal_count-result+1 << endl;
	} else if (universal_count%2==1){
		cout << universal_count-result+1 << "/" << result << endl;	
	}
	return 0;
}

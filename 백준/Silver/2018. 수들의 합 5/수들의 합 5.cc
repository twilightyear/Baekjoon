#include <iostream>
using namespace std;

int main(){
	int n,tmp,result=0;


	cin >> n;

	for(int i=1;i<=n;i++){
		tmp=0;
		for(int j=i;j<=n;j++){
			tmp+=j;
			if(tmp>n){
				break;
			} else if(tmp==n){
				result++;
				break;
			}
		}
	}

	cout << result << endl;
}
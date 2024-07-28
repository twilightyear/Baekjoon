#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int a,b,n,result,tmp;

	cin >> a >> b >> n;

	if(a%b==0){
		result=0;
	} else {
		tmp=a%b;

		for(int i=0;i<n;i++){
			tmp*=10;
			result =tmp/b;
			tmp%=b;
		}
	}


	cout << result << endl;

	return 0;
}
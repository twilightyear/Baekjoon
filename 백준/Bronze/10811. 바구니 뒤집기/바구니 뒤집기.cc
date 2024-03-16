#include <iostream>
using namespace std;

int main(){
	int my_list[100];
	int n,m,a,b;
	cin >> n >> m;

	for (int i=1;i<n+1;i++){
		my_list[i] = i;
	}

	while(m--){
		cin >> a >>b;
		for (int j=0;j<=(b-a)/2;j++){
 			swap(my_list[a+j],my_list[b-j]);
		}
	}



	for (int i=1;i<n+1;i++){
		cout<<my_list[i]<<" ";
	}
	cout<<endl;


	return 0;
}
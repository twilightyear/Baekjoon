#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2;
	int index,result;

	while(cin >> s1 >> s2){

		index=0;
		result=0;

		for(int i=0;i<s2.length();i++){
			if(s1[index]==s2[i]){
				index++;
			}
			if(index==s1.length()){
				result=1;
				break;
			}
		}

		(result==1) ? (cout << "Yes" << '\n') : (cout << "No" << "\n");
	}

	return 0;
}
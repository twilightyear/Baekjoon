#include <iostream>
#include <string>
using namespace std;

int main(){
	int cases,width,height;
	int tmp;
	string word;
	char array[401][401];
	cin >> cases;

	for(int i=0;i<cases;i++){

		int count=0;


		cin >> height >> width;

		//입력
		for(int j=0;j<height;j++){
			cin >> word;
			int l=0;
			for(int k=0;k<width;k++){
				array[j][k] = (char)word[l];
				l++;
			}
		}





		//>o< 검색
		for(int j=0;j<height;j++){
			for(int k=0;k<width;k++){
				if(k+2<width){
					if(array[j][k]=='>' && array[j][k+1]=='o' && array[j][k+2]=='<'){
						count++;
					}	
				}
			}
		}




		/*
		v
		o  검색
		^
		*/
		for(int j=0;j<height;j++){
			for(int k=0;k<width;k++){
				if(j+2<height){
					if(array[j][k]=='v' and array[j+1][k]=='o' and array[j+2][k]=='^'){
						count++;
					}	
				}
			}
		}

		cout << count << '\n';

	}
	return 0;
}
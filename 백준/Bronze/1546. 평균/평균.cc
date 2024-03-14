#include <iostream>
using namespace std;

int main (){
	int cnt;
	double max=0,total=0;
	double num[1001];

	//첫값 입력
	cin >> cnt;

	//오류처리
	if (cnt>1000 or cnt<1){
		exit(0);
	}

	//점수입력
	for (int i=0;i<cnt;i++){
		cin >> num[i];
		if (num[i] >= max){
			max = num[i];
		}
	}

	//점수변환
	for (int i=0;i<cnt;i++){
		total += (num[i]/max*100);
	}

	//평균 변환
	double result = total/cnt;

	//결과 출력
	cout << result << endl;

	return 0;
}
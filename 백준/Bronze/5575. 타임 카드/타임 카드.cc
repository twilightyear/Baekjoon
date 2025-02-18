#include <iostream>
using namespace std;

int main(){
	int ASh,ASm,ASs,AEh,AEm,AEs;
	int t,h,m,s;

	for(int i=0;i<3;i++){
			cin >> ASh >> ASm >> ASs >> AEh >> AEm >> AEs;
			t = (((AEh*3600)+(AEm*60)+(AEs))-((ASh*3600)+(ASm*60)+(ASs)));
			h = (t)/3600;
			m = (t%3600)/60;
			s = (t%3600)%60;

			cout << h << " " << m << " " << s << '\n';
	}
	return 0;
}
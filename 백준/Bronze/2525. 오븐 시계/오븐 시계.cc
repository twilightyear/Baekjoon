#include <iostream>
using namespace std;

int main(){
	int h,m,time;

	cin >> h >> m >> time;

	if (h>23 or h<0 or m>59 or m<0 or time < 0 or time > 1000){
		exit(0);
	}

	if (m+time>59){
		if (h+((m+time)/60)>23){
			h+=(((m+time)/60)-24);
			m = (m+time)-((m+time)/60)*60;
		} else {
			h+=((m+time)/60);
			m = (m+time)-((m+time)/60)*60;
		}
	} else {
		m+=time;
	}

	cout << h << " " << m << endl;

	return 0;
} 





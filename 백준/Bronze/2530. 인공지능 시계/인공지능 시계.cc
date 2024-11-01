#include <iostream>
using namespace std;

int main(){
	int h,m,s,t;
	cin >> h >> m >> s;

	cin >> t;

	int time = (h*3600)+(m*60)+(s)+(t);

	int hh = (time/3600)%24;

	int mm = (time/60)%60;

	int ss = time%60;

	cout << hh << " " << mm << " " << ss << '\n';


	return 0;
}
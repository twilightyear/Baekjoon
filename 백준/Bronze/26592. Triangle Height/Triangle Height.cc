#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	float a,h,b;
	int n;

	cin >> n;
	cout << fixed << setprecision(2);

	for(int i=0;i<n;i++){
		cin >> a >> b;
		cout << "The height of the triangle is " << a*2/b << " units\n";
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int intergrate(int y, int m, int d){
	int result,y_to_d,m_to_d;

	y_to_d = (2010-y)*365;
	m_to_d = ((12-m)*31);
	d = (31-d);

	result = y_to_d+m_to_d+d;

	return result;
}

int main(){

	int cnt,d,m,y,intergrated,max,least;
	string name,max_name,least_name;
	int count=1;
	cin >> cnt;


	for (int i=0;i<cnt;i++){

		cin >> name >> d >> m >> y;
		intergrated = intergrate(y,m,d);


		if (count==1){
			max_name = name;
			max = intergrated;
			least_name = name;
			least = intergrated;
		} else {

			if (intergrated>=max){
				max_name = name;
				max = intergrated;
			}

			if (intergrated<=least){
				least_name = name;
				least = intergrated;
			}
		}


	count++;
	}



	cout << least_name << '\n' << max_name << endl;

	return 0;
}
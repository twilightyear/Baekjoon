#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <iomanip>
using namespace std;

int main(){

	vector<tuple<string, double, double> > data;
	string class_name;
	double score,multi;
	double total = 0;
	double hak = 0;
	string grade;

	for (int i=0;i<20;i++){
		cin >> class_name >> score >> grade;
		if (grade == "A+"){
			multi = 4.5;
		} else if (grade == "A0"){
			multi = 4.0;
		} else if (grade == "B+"){
			multi = 3.5;			
		} else if (grade == "B0"){
			multi = 3.0;	
		} else if (grade == "C+"){
			multi = 2.5;		
		} else if (grade == "C0"){
			multi = 2.0;			
		} else if (grade == "D+"){
			multi = 1.5;		
		} else if (grade == "D0"){
			multi = 1.0;		
		} else if (grade == "F"){
			multi = 0.0;			
		} else if (grade == "P"){
			multi = 0.0;
			score = 0;
		}
		data.push_back(make_tuple(class_name,score,multi));
	}

	for (const auto& item : data){
		total += get<2>(item)*get<1>(item);
		hak += get<1>(item);
	}


	cout << fixed;
	cout << setprecision(6);
	cout << total/hak << endl;

	return 0;
}
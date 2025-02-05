#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int K,D,A;
	vector<int> KDA_val;
	int pos=0;
	int cur_pos=0;
	string KDA;
	cin >> KDA;

	while((pos = KDA.find("/",cur_pos))!=string::npos){
		int len = pos-cur_pos;
		KDA_val.push_back(stoi(KDA.substr(cur_pos,len)));
		cur_pos=pos+1;
	}

	KDA_val.push_back(stoi(KDA.substr(cur_pos)));


	if(KDA_val[0]+KDA_val[2]<KDA_val[1] || KDA_val[1]==0){
		cout << "hasu\n";
	} else {
		cout << "gosu\n";
	}

	return 0;
}
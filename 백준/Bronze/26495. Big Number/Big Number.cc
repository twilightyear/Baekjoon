#include <iostream>
#include <string>
using namespace std;

int main(){
	string n;
	cin >> n;
	for(int i=0;i<n.length();i++){
		if(n[i]=='0'){
			cout << "0000\n";
			cout << "0  0\n";
			cout << "0  0\n";
			cout << "0  0\n";
			cout << "0000\n";
		} else if(n[i]=='1'){
			cout << "   1\n";
			cout << "   1\n";
			cout << "   1\n";
			cout << "   1\n";
			cout << "   1\n";
		} else if(n[i]=='2'){
			cout << "2222\n";
			cout << "   2\n";
			cout << "2222\n";
			cout << "2\n";
			cout << "2222\n";
		} else if(n[i]=='3'){
			cout << "3333\n";
			cout << "   3\n";
			cout << "3333\n";
			cout << "   3\n";
			cout << "3333\n";
		} else if(n[i]=='4'){
			cout << "4  4\n";
			cout << "4  4\n";
			cout << "4444\n";
			cout << "   4\n";
			cout << "   4\n";
		} else if(n[i]=='5'){
			cout << "5555\n";
			cout << "5\n";
			cout << "5555\n";
			cout << "   5\n";
			cout << "5555\n";
		} else if(n[i]=='6'){
			cout << "6666\n";
			cout << "6\n";
			cout << "6666\n";
			cout << "6  6\n";
			cout << "6666\n";
		} else if(n[i]=='7'){
			cout << "7777\n";
			cout << "   7\n";
			cout << "   7\n";
			cout << "   7\n";
			cout << "   7\n";
		} else if(n[i]=='8'){
			cout << "8888\n";
			cout << "8  8\n";
			cout << "8888\n";
			cout << "8  8\n";
			cout << "8888\n";
		} else if(n[i]=='9'){
			cout << "9999\n";
			cout << "9  9\n";
			cout << "9999\n";
			cout << "   9\n";
			cout << "   9\n";
		}
		if(i!=n.length()-1){
			cout << "\n";
		}
	}
	return 0;
}
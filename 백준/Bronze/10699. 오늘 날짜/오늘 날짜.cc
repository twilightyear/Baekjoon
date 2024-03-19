#include <iostream>
#include <ctime>
using namespace std;

int main(){
	time_t t;
	tm* info;
	char buffer[80];

	time(&t);
	info = localtime(&t);
	strftime(buffer,sizeof(buffer),"%Y-%m-%d",info);

	cout << buffer << '\n';

	return 0;
}
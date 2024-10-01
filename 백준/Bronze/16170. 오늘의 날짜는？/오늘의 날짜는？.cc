#include <iostream>
#include <ctime>
using namespace std;

int main(){
	time_t now = time(NULL);
	struct tm* time_info;
	time_info = localtime(&now);

	cout << time_info->tm_year + 1900 << '\n';
	cout << time_info->tm_mon + 1 << '\n';
	cout << time_info->tm_mday << '\n';

	return 0;
}
#include <iostream>
using namespace std;


int main(){
	int grid[9][9];
	int row,col,max=0;

	for (int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin >> grid[i][j];
			if (grid[i][j] >= max){
				max = grid[i][j];
				row = i+1;
				col = j+1;
			}
		}
	}

	cout << max << '\n' << row << ' ' << col << endl;
}
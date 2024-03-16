#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> baskets(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int from, to, ball;
        cin >> from >> to >> ball;

        for (int j = from; j <= to; j++) {
            baskets[j] = ball;
        }
    }
    // 결과 출력
	for (int i = 1; i <= N; i++) {
	cout << baskets[i] << " ";
	}
    cout << endl;


    return 0;
}

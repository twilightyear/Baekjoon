#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    vector<int> positions(26, -1);

    for (int i = 0; i < word.length(); ++i) {
        int index = word[i] - 'a';
        if (positions[index] == -1) {
            positions[index] = i;
        }
    }

    for (int i = 0; i < 26; ++i) {
        cout << positions[i] << " ";
    }
    cout << endl;

    return 0;
}

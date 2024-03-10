#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int cases;
    string letter, message;
    list<string> my_list;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> letter;
        message = letter.substr(0, 1) + letter.substr(letter.length() - 1, 1); 
        my_list.push_back(message);
    }

    for (string element : my_list) {
        cout << element << endl;
    }

    return 0;
}

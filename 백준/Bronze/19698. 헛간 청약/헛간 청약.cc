#include <iostream>
using namespace std;

int main(){
    int n,w,h,l,result;
    
    cin >> n >> w >> h >> l;
    
    result = (w/l)*(h/l);
    
    if (result>n){
        cout << n << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}
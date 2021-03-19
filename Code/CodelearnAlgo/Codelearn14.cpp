#include <iostream>
using namespace std;

void binary(int n){
    if(n >= 0){
        if((n/2) > 0)
            binary(n / 2);
        cout << n % 2;
    }
}
int main(){
    int n;
    cin >> n;
    binary(n);
    return 0;
}
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool checkPrime(long long n) {

    const long long PRIMESAMPLE[] = {2,3,5,7,11,13,17,19};      //Some prime number smaller than 20 to make life easier

    if(n % 2 == 0 && n != 2) return false;
    if(n == 0 || n == 1) return false;
    for(int a : PRIMESAMPLE) if(n == a) return true;

    float sq = sqrt(n);
    float temp = n;
    bool isPrime = false;

    while(temp > sq) {
        temp = n/(n/temp + 2);
        isPrime = true;

        if(temp - int(temp) == 0) return false;
    }

    return isPrime;

}

string isPrime(long long n) {
    if(checkPrime(n) == 0) return to_string(n) + " is NOT a prime number";
    else return to_string(n) + " is a prime number";
}

int main() {
    long long n;
    cin >> n;
    cout << isPrime(n);
}
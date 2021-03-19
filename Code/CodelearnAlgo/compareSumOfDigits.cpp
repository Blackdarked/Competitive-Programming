#include<bits/stdc++.h>
using namespace std;

int compareSumOfDigits(string input) {
    int sumOdd = 0;
    int sumEven = 0;
    for (int i = 0; i < input.size(); i++) {
        int n = input[i] - '0';
        if (n % 2 == 0)
            sumEven += n;
        else
            sumOdd += n;
    }
    return sumOdd - sumEven;
}
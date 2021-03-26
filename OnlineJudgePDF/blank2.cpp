/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	string s;
    while (cin >> s) {
        string rev = string(s.rbegin(), s.rend());
        cout << rev << endl;
    }
    return 0;
}
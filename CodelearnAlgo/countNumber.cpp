#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) 
{ 
    if (b == 0) return a; 
    return gcd(b, a % b); 
} 
ll countNumber(vector<int> arr, ll l, ll r)
{
    int n = arr.size();
    for (int i = 0; i < n; i++){
        if(arr[i] == 0)
            return 0;
    }
    ll ans = arr[0]; 
    for (int i = 1; i < n; i++) {
        ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
    }
    if (l == r){
        if(r % ans == 0)
            return 1;
        else
            return 0;
    }
    ll x = r / ans, y = l / ans;
    if(y * ans != l)
        y++;
    return x - y + 1;
}
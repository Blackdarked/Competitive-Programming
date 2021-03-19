#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    int N, K, C;
    while(T--) {
        cin >> N >> K;
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> C;
            sum += C / K;
        }
        cout << sum << endl;
    }
    return 0;
}

/*
#include <stdio.h>
int main(){
int T;
scanf("%d",&T);
int z,x,y;
int c;
while(T--){
scanf("%d %d",&z,&x);
int sum =0;
for(c=0;c<z;c++){
    scanf("%d",&y);
    sum+=y/x;
}
printf("%d\n",sum);
}
return 0;
}
*/
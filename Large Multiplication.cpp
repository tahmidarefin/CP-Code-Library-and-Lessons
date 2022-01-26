#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long multiply(long long a, long long b, long long m) {
    long long ans = 0;
    a %= m;
    while(b) {
        if((b & 1)) ans = (1LL * ans + a) % m;
        a = (1LL * a + a) % m;
        b >>= 1;
    }
    return ans;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b;
    cin >> a >> b;
    cout << multiply(a, b, mod);
    return 0;
}


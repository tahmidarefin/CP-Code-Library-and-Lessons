#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int bin_exp(int a, int b, int m) {
    int ans = 1;
    a %= m;
    while(b) {
        if((b & 1)) ans = (1LL * ans * a) % m;
        a = (1LL * a * a) % m;
        b >>= 1;
    }
    return ans;
}
// (1 / a) % m and m must be a prime
int inverse(int a, int m) {
    return bin_exp(a, m - 2, m); // according to Fermat's little theorem
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a;
    cout << inverse(a, mod);
    return 0;
}


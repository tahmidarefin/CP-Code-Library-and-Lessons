/*
Finding prime factorization of n using Sieve and Smallest Prime Factor
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 7;
int spf[N];
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 1; i <= N - 7; i++) spf[i] = i;
    for(int i = 2; i <= N - 7; i++) {
        for(int j = i; j <= N - 7; j += i) {
            spf[j] = min(spf[j], i);
        }
    }
    int query, n;
    cin >> query;
    while(query--) {
        cin >> n;
        vector<int> pf;
        while(n > 1) {
            pf.push_back(spf[n]);
            n /= spf[n];
        }
        for(auto prime_factor : pf) cout << prime_factor << ' ';
        cout << '\n';
    }
    return 0;
}

/*
Searching an element in a sorted array
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int a[N];
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    bool ok = 0;
    int l = 1, r = n, m;
    while(l <= r) {
        m = l + (r - l) / 2;
        if(x < a[n]) {
            r = m - 1;
        }
        else if(x > a[m]) {
            l = m + 1;
        }
        else {
            ok = 1;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

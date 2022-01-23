/*
Sorting an array
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int a[N];
void mergesort(int l, int r) {
    if(l == r) return;
    int m = l + (r - l) / 2;
    mergesort(l, m);
    mergesort(m + 1, r);
    vector<int> lv, rv;
    for(int i = l; i <= m; i++) lv.push_back(a[i]);
    for(int i = m + 1; i <= r; i++) rv.push_back(a[i]);
    for(int i = l, lid = 0, rid = 0; i <= r; i++) {
        if(lid == lv.size() || (rid < rv.size() && rv[rid] <= lv[lid])) {
            a[i] = rv[rid++];
            continue;
        }
        if(rid == rv.size() || (lid < lv.size() && lv[lid] <= rv[rid])) {
            a[i] = lv[lid++];
            continue;
        }
    }
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    mergesort(1, n);
    for(int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}


/*
Printing prime numbers between 1 to n
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e8;
bitset<N> check(0);
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> prime;
    for(int i = 2; i <= n; i++) {
        if(!check[i]) {
            for(int j = i * i; j <= n; j += i) {
                check[j] = 1;
            }
            prime.push_back(i);
        }
    }
    for(auto p : prime) cout << p << ' ';
    cout << '\n';
    return 0;
}



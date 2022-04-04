/*
Counting the number of divisors between 1 to n
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 7;
int divisors[N] =  {0};
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i) {
            divisors[j] += 1;
        }
    }
    for(int i = 1; i <= n; i++) cout << divisors[i] << ' ';
    cout << '\n';
    return 0;
}



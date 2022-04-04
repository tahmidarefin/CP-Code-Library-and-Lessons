/*
Find Greatest Common Divisor of two numbers
*/

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b % a, a);
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
    return 0;
}



/*
    4
    6 = 6-4 = 2
    9 
    12 = 12-9 = 3
    16
    30 
    1 3 5 7 
    2 4 6 8 10 12 14 16 = 

*/

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
    ll n; 
    cin >> n;
    if(n & 1)
    {
        cout << (n-1)/2-n;
        return 0;
    }
    cout << n/2 << "\n";
    return 0;
}
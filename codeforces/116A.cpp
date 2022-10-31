#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    int act = 0;
    int res = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b; 
        cin >> a >> b;
        act-= a;
        act+= b;
        res = max(act, res);
    }    
    cout << res << "\n";
    return 0;
}
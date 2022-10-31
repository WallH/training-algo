#include "bits/stdc++.h"
using namespace std; 

int main()
{
    string a, b;
    cin >> a >> b;
    string res = a;
    for(int i = 0; i < a.length(); i++)
    {
        res[i] = (a[i] != b[i])+48;
    }
    cout << res << "\n";
}
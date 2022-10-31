//https://codeforces.com/problemset/problem/116/A
#include "bits/stdc++.h"
using namespace std;

int main()
{
    string x;
    cin >> x;
    int count = 0;
    for(int i = 0; i < x.length(); i++)
    {
        count+= (x[i] == '4' || x[i] == '7');
    }
    if(count == 4 || count == 7)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}
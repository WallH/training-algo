#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        count += abs(p-q) >= 2;
    }
    cout << count << "\n";
    return 0;
}

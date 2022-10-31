#include "bits/stdc++.h"
#include "string"
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    for(int time = 0; time < t; time++)
    {
        for(int i = 0; i < n-1; i++)
        {
            if(q[i] == 'B' && q[i+1] =='G')
            {
                q[i] = 'G';
                q[i+1] = 'B';
                i++;
            }
        }
    }
    cout << q;
    return 0;
}
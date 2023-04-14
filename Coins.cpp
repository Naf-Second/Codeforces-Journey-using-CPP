#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
       long long int n,k;
        cin >> n >> k;
        int x=0,y=0;
        int z = 2*x+k*y;

        if(n%2==0)
            cout << "Yes" << "\n";
        else if(n%2!=0 && k%2==0)
        {
            cout << "No" << "\n";
        }
        else
            cout << "Yes" << "\n";




}

    }

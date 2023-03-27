#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,c,d;
        long long int l,m,k,j;
        cin >> a >> b >> c >> d;
        long long int x = a/b;
        long long int y = c/d;
        long long int track = 0;
        if(a!=0 && c!=0)
         l = b*c, m = a*d;

        //cout << track;
        //if(a==0&&c==0)
            //cout << 0 << "\n";
        if(a==0 && c==0)
            cout << 0 << "\n";
        else if(a==0||c==0)
            cout << 1 << "\n";
        else if(l==m)
            cout << 0 << "\n";

        else if(l%m==0||m%l==0)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";

    }
}

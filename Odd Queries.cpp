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
        int n,q,l,r;
        long long int k;
        cin >> n >> q;
        long long int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
        }
        long long int pfx[n];
         pfx[0]=0;
         for(int j=1;j<=n;j++)
        {
            pfx[j]=pfx[j-1]+arr[j];
        }
        long long int sum = 0;
        for(int z=1;z<=q;z++)
        {
          cin >> l >> r >> k;
          sum = k*(r-l+1)+pfx[n]-(pfx[r]-pfx[l-1]);
             if(sum%2!=0)
            cout << "Yes" << "\n";
            else
            cout << "No" << "\n";
        }




}
}


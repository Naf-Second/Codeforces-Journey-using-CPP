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
        long long int k,n,a,b;
        cin >> k >> n >> a >> b;
        long long int ans;
        if((n*b)>=k)
            cout << -1 << "\n";
        else
        {
            long long int l = 0;
            long long int r = n;
            while(r-l>=0)
            {
                long long int mid = ((l + r) / 2);
                if(mid*a+(n-mid)*b < k){
                        ans = mid;


                    l = mid+1;

                }
                else
                    r = mid-1;
            }
            cout << ans << "\n";
        }

    }
}

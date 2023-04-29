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
        priority_queue<long long int> pq;
        long long int n,ans=0;
        cin >> n;
        long long int arr[n];
        for(long long int i =0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]!=0)
                pq.push(arr[i]);
            else if(arr[i]==0 && !pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }

        }
        cout << ans << "\n";

    }
}

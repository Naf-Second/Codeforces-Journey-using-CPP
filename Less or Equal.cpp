#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int x = 0;
        int n,k;
        cin >> n >> k;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        if(k==0 && arr[0]==1)
            cout << -1;
        else if(k==0 && arr[0]>1)
            cout << arr[0]-1;
        else if(arr[k-1]==arr[k])
            cout << -1;
        else
            cout << arr[k-1];


}

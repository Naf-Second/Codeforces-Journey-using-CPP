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
        long long int n,sum=0;
        vector <long long int> v;
        cin >> n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(long long int i=1;i<n;i++)
        {
            arr[0] = arr[0]*arr[i];
            v.push_back(1);
        }
        sum = accumulate(v.begin(), v.end(), 0);
        //cout << sum;
        cout << 2022*(sum+arr[0]) << "\n";
    }
}

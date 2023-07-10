#include <bits/stdc++.h>

using namespace std;

int main()
{

   long long int t;
    cin >> t;
    while(t--)
    {
        vector<long long int> v;
        v.push_back(0);
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int x=0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                x = arr[i];
        }
        long long int mx = *max_element(arr,arr+n);
        if (x < 0)
            cout << x << "\n";
        else
        {
          cout << mx << "\n";
        }
    }
}


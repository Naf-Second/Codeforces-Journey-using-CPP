#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        v.push_back(0);
        int x = *max_element(arr,arr+n);
        int mn = *min_element(arr,arr+n);
       for(int i=0;i<n;i++)
       {


               int z = arr[i]-1;
               int f = x-z;
               v.push_back(f);

       }

         for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
        cout << endl;
    }

    return 0;
}

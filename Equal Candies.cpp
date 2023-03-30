#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--)
    {
        int x,m,sum=0;
        cin >> x;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin >> arr[i];
            sum += arr[i];
            m = *min_element(arr,arr+x);
        }
        int A = sum-(m*x);
        cout << A << "\n";


    }

}

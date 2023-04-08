#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,b,d;
    cin >> n >> b >> d;
    int arr[n];
    int waste = 0,track = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

        if(arr[i]<=b)
        {
            waste += arr[i];
            if(waste>d)
            {
                track++;
                waste = 0;
            }
        }
    }
    cout << track << "\n";
}

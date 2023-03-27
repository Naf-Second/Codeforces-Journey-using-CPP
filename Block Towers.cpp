#include <bits/stdc++.h>
//#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sum = arr[0];
        sort(arr+1,arr+n);
        for(int i=1;i<n;i++)
        {
            if(arr[i] > arr[0])
            {

                arr[0]= ceil((arr[i]+arr[0])/2.0);
               // cout << arr[i] << " " << arr[0];
            }

            sum = arr[0];
        }
        cout << sum << "\n";
    }
    return 0;
}
   // return 0;




   // return 0;



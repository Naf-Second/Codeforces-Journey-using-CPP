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
        int a,p,x;
        cin >> a;
        int arr[a];
        int count1 = 0;
        for(int i=1;i<=a;i++)
        {
            cin >> arr[i];
        }

        for(int i=1;i<a;i++)
        {
            x = (arr[i]+arr[i+1])%2;
            if(x==0)
            {
                if(arr[i]!= a-1)
                p = arr[i]*arr[i+1];
                arr[i] = p;
             //   cout << p << "\n";
                count1++;
            }


        }
        if(count1==0)
            cout << count1 << "\n";
        else
            cout << count1 << "\n";
    }
}

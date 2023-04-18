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

     int n;
     cin >> n;
     int arr[n];
     int c=0;

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i+1>=arr[i])
            {
                c++;
            }
        }
        if(c>0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }

}



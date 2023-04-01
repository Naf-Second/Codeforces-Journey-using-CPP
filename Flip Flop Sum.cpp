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
        int n,sum=0,track=0,track2=0;
        cin >> n;
        vector <int> v;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];

        }

        for(int i=0;i<n;i++)
        {
            if(arr[i]+arr[i+1]== -2){
                    if(arr[i]==n-1)
                        break;
                track++;
            }
            if(arr[i]<0)
            {
                 if(arr[i]+arr[i+1]!= -2)
                    track2++;
            }

                sum += arr[i];
        }

        if(track>0)
            cout << sum + 4 << "\n";
        else if(track2 == 0)
            cout << sum -4 << "\n";
        else if(track==0)
            cout << sum << "\n";




    }
    cout << "\n";
}

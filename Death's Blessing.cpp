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
        long long int n,sum1=0,sum2=0;
        cin >> n;
       // vector <long long int> v1,v2,v3;

        long long int arr[n],b[n];

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            //v1.push_back(x);
            sum1 += arr[i];
        }
      //  cout << sum1 << "\n";

        for(long long int i=0;i<n;i++)
        {
            cin >> b[i];
        }
     //   long long int z = *max_element(b,b+n);
       //               a = *min_element(b,b+n);
                           sort(b,b+n);
     //   if(n==1)
       // cout << arr[0] << "\n";

        if(n>1)
        {
           // cout <<  z << "\n";

          // if(z!=a)
            for(long long int i=0;i<n;i++)
            {

                if(i!=n-1)
                    sum2+= b[i];

            }

            cout << sum1+sum2 << "\n";
        }
        else
            cout << arr[0] << "\n";
        /*
        else if(z==a)
        {
            for(long long int i=0;i<n;i++)
            {
                    sum2+= b[i];
            }
        }*/
       // cout << sum2 << "\n";


    }
    return 0;
}

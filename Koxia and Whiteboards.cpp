#include <bits/stdc++.h>

using namespace std;

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;

    cin >> t;

    while(t--){

        long long int n,m;
        int track =0;
        cin >> n >> m;
        long long int arr[n]; // for storing the values of the whiteboard
        vector <long long int> v;
        for(long long int i=0;i<n;i++)
        {
            cin >> arr[i];
            v.push_back(arr[i]);
        }

        long long int arr2[m],sum2=0; // push the values long long into the whiteboard
        for(long long int j=0;j<m;j++)
        {
            cin >> arr2[j];
            v.push_back(arr2[j]);
            sum2+=arr2[j];
            track++;
        }


        long long int sum=0;


             sort(v.begin(),v.end()-1);
             reverse(v.begin(),v.end());
              for (int i = 0; i < n; i++) {

        sum += v[i];

        }



        cout << sum << endl;


    }
    return 0;
}








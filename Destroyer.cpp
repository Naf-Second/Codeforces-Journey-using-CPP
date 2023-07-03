#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];

        }
        sort(arr,arr+n);
        vector <int> v;
        vector <int> v2;
        int cnt=0;
        int mx = *max_element(arr,arr+n);
        while(cnt-1!=mx)
        {

            int result = count(arr, arr + n, cnt);
            v.push_back(result);
            v2.push_back(result);
            cnt++;
        }
           sort(v2.begin(), v2.end(), [](int a, int b) {
        return a > b;
    });
    int fxz = 0;
        for(int i=0;i<v.size();i++)
        {
            //cout << v[i] << " ";
            if(v[i]!=v2[i]){
                cout << "No" << "\n";
            break;
            }
            fxz++;
            if(fxz==mx+1)
            {
                cout << "Yes" << "\n";
                break;
            }

        }
    }

}

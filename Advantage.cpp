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
        int n,h=0,l=0;
        cin >> n;
        int arr[n];
        int arr1[n];

            for (int i=0;i<n;i++)
            {
                cin >> arr[i];
                arr1[i] = arr[i];

            }
           sort(arr,arr+n);
            h = *max_element(arr,arr+n);
            l = *max_element(arr,arr+n-1);

            for(int i=0;i<n;i++)
            { if(arr1[i]==h){
                    int z = h-l;
                    arr[i]=z;
                }
                else
                    {
                int x = arr1[i]-h;
                arr[i] = x;

                }
            }
            for(int i=0;i<n;i++)
            {
                cout << arr[i] << " ";
            }

            cout << "\n";

    }
}

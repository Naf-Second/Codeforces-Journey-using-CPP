#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum1=0,sum2=0,track=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
                sum1++;
            else
                sum2++;

        }
        if(sum1%2==0)
            track = sum1/2;
        else
            track =(float)sum1/2 + 0.5;
        cout << track+sum2 << "\n";
        }




    return 0;
}

/*
3
4
1 2 1 2
3
2 4 2
5
1 2 3 4 5

3
10
1 1 1 1 1 1 1 1 1 1
6
1 1 1 1 1 1
4
1 1 1 1


*/

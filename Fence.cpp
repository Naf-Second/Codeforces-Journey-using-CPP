#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n],sum=0;
    int compare = 100000;
    int m=0,xc=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<k;i++)
    {
        sum += arr[i];
    }
    xc = sum;
    for(int i=k;i<n;i++)
    {
        sum += arr[i] - arr[i-k];
        if(sum < xc)
        {
            xc = sum;
            m = i-k+1;
        }
    }

    cout << m+1;
    return 0;
}



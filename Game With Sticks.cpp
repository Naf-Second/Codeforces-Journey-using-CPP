#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;

   // int x=1; //number of sticks
    int track = 0;
    int x = n*m;
    while(n*m!=0)
    {   n--;
        m--;
        x = n*m;
        track++;
    }
   // cout << track << endl;
    if(track%2==0)
        cout << "Malvika";
    else
        cout << "Akshat";

    return 0;
}

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
        int n,track=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n/2;i++)
        {

                if(s[i]+s[n-i-1]==97)
                {
                   track+=2;
               // cout << track;

                }
                else{
                    break;
                }


        }
        cout << n-track << "\n";
    }
}
/*

9
3
100
4
0111
5
10101
6
101010
7
1010110
1
1
2
10
2
11
10
1011011010

*/

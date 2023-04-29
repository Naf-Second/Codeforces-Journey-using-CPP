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
        string pi = "31415926535897932384626433832795";

        string n;
        cin >> n;
        int track = 0;
        for(int i=0;i<30;i++)
        {

            if(n[i]!=pi[i])
            {
                break;
            }
             track++;


        }
        cout << track << "\n";
    }
}

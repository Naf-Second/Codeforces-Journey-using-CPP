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
        int ans=0;
        string s;
        cin >> s;
        //string s1,s2;
            if(s[0]==s[1])
                ans++;
            if(s[0]==s[2])
                ans++;
            if(s[0]==s[3])
                ans++;
            //    cout << ans;
            if(ans==0)
            {
                if(s[1]==s[2])
                    ans++;
                if(s[1]==s[3])
                    ans++;
            }

            if(ans==3)
                cout << -1 << "\n";
            else if(ans==2)
                cout << 6 << "\n";
            else
                cout << 4 << "\n";

    }
}

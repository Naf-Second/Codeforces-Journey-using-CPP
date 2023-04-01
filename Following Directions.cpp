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
        int n,sum=0,sum2=0;
        cin >> n;
        string s;
        cin >> s;
        string ans = "No";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                sum++;
            else if(s[i]=='L')
                sum--;
            else if(s[i]=='U')
                sum2++;
            else if(s[i]=='D')
                sum2--;
            if(sum==1 && sum2==1)
            {
                ans = "Yes";
            }

        }
        cout << ans << "\n";
    }
}

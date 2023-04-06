#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string ans = "NO";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]== 'Q' || s[i] == '9' )
            {
                ans = "YES";
                break;
            }


    }
        cout << ans;
}

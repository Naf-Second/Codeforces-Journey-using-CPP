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
        string s;
        cin >> s;

        if(s[0]=='a'){

                int f = s[0]- 96;
                int l = s[1]- 96;
                cout << l-f << "\n";
        }
        else
        {
            int x;
            int z = (s[0]-97)*25;
            if(s[0]>s[1])
             x = s[1] - 96;
            else
             x = s[1] - 97;


            cout << z+x << "\n";
        }
    }
}

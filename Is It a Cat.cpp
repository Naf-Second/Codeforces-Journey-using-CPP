#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int track1 = 0, track2 = 0, track3 = 0, track4 = 0, track5 = 0;
        int i = 0;
        for(int j = 0; j < n; j++)
        {
            if(s[j] != 'm' && s[j] != 'e' && s[j] != 'o' && s[j] != 'w')
                track5++;
        }
        if(n < 4)
            track5++;

        while(i < n && s[i] == 'm')
        {
            i++;
            track1++;
        }

        if(track1 > 0)
        {
            while(i < n && s[i] == 'e')
            {
                i++;
                track2++;
            }

        }

        if(track2 > 0)
        {
            while(i < n && s[i] == 'o')
            {
                i++;
                track3++;
            }

        }

        if(track3 > 0)
        {
            while(i < n && s[i] == 'w')
            {
                if(i != n - 1 && s[i+1] != 'w')
                {
                    track5++;
                    break;
                }
                i++;
                track4++;
            }

        }

        if(track1 > 0 && track2 > 0 && track3 > 0 && track4 > 0 && track5 == 0)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";

    }
}



/*
MEOWEW
MEOEMW
MOMEEOWEEE
MEOWOOEOEO
*/

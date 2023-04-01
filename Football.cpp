#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int track = 0;

    /*
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            v1.push_back(s[i]);
        else
            v2.push_back(s[i]);
    }
    */
    if(s.size()<8)
        cout << "NO" << "\n";
    else
      //  for( i=0;i<s.size()-6;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==s[j+1])
                    track++;
                else if(track<6)
                track = 0;
            }

               // cout << track << " " << track2;

                if(track>=6)
        cout << "YES" << "\n";
            else
        cout << "NO" << "\n";


            }

        }




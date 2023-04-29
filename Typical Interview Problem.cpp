#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
   for(int k=1;k<=t;k++)
    {

        int n, track = 0;
        string s;
        cin >> n >> s;
        int xqc = 1;
        string m;
        while(m.size()<100)
        {
            if(xqc%3==0)
                m += "F";
            if(xqc%5==0)
                m += "B";
            xqc++;
        }
      //  if(k==170)
      //  cout << s << "\n";
        for(int i=0; i<m.size(); i++)
        {
            if(track != n)
            {
                track = 0;
                for(int j=0, l=i; j<s.size(); j++, l++)
                {
                    if(s[j] == m[l])
                        track++;
                }


            }
        }

            for(int i=m.size();i>0; i--)
        {
            if(track!= n)
            {
                track = 0;
                for(int j=0, l=i; j<s.size(); j++, l--)
                {
                    if(s[j] == m[l])
                        track++;
                }


            }
        }


        //cout << track << "\n";
        if(track == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

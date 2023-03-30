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
        int x = s.size();
       // if(s[x]=='0')

        //cout << "qqw";

        int f=0,l=0;

            for(int i=0;i<x;i++)
            {
                if(s[i]=='1')
                {
                   f = i;
                   break;
                }
            }
            for(int i=x;i>1;i--)
            {
                if(s[i]=='1')
                {
                   l = i;
                   break;
                }
            }
            int track = 0;



            if(f!='0' || l!='0'){
            for(int i=f;i<l;i++)
            {   //cout << "asd";
                if(s[i]=='0')
                {
                    track++;
                }
            }

            }


        cout << track << "\n";
    }
    return 0;
}




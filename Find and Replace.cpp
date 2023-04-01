#include <bits/stdc++.h>

using namespace std;


int count_unique_chars(const string& str) {
    unordered_set<char> unique_chars;

    for (char c : str) {
        unique_chars.insert(c);
    }

    return unique_chars.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {

        int n;
        cin >> n;
        string s,s2,s3;
        cin >> s;
        int z = count_unique_chars(s);
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                s2 += s[i];
            else
                s3 += s[i];
        }
        int ans =0;
       int x = s2.size();
       int y = s3.size();
       if(x>=y)
       {
           for(int i=0;i<x;i++)
           {
               for(int j=0;j<y;j++)
               {
                   if(s2[i]==s3[j]){
                    ans++;
                    break;
                   }
               }
           }
       }
       else if(y>x)
       {
                for(int i=0;i<y;i++)
           {
               for(int j=0;j<x;j++)
               {
                   if(s2[i]==s3[j]){
                    ans++;
                    break;
                   }
               }
           }
       }


        if(n==1)
            cout << "Yes" << "\n";
       // else if(z==n)
           // cout << "Yes" << "\n";
        else if(ans>0)
            cout << "No" << "\n";
        else
            cout << "Yes" << "\n";


    }
}

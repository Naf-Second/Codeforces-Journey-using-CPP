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
        long long int n,d;
        cin >> n >> d;
        string s;
        cin >> s;
        if(d==0)
        {
             s.insert(n,to_string(d));
        }
        else if(d==1)
        {
            for(int j=0;j<n;j++)
            if(s[j] - '0' < d){
            s.insert(j,to_string(d));
            d = -1;
            }
            else if(j==n-1 && d!=-1)
                s += d;
        }
        else
        for(int i=0;i<n;i++)
        {

            if(s[i] - '0' < d){
            s.insert(i,to_string(d));
            d = -1;
            }
            if(i==n-1 && d!=-1)
                 s += to_string(d);
        }
        cout << s << "\n";

    }
}

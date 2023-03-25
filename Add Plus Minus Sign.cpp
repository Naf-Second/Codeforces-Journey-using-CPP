#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x=0;
        for(int i=0;i<n-1;i++)
        {
            if((s[i+1]-s[i])!=0){
            x++;
            cout << "+";
            }
            else{
                if(x!=0)
            cout << "+";
                else
             cout << "-";
        }
        }
        cout << "\n";
    }
}

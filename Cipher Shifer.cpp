#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <char> v;
        string str;
        cin >> str;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(str[i]==str[j])
                {

                    v.push_back(str[i]);
                    i = j;
                    break;
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout << v[i];
        }
        cout << "\n";
    }
}

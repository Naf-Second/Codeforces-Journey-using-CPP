#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        vector <char> v;
        string s;
        cin>>s;

        int n = s.size();
        int cnt=1;
        if(s[0]=='a' && s[n-1]=='a')
        {
            cout << s[0] << " ";
            for(int i=1;i<n-1;i++)
            {
                cout << s[i];
            }
            cout << " " << s[n-1];
        }
        else if(s[0]=='b' && s[n-1]=='b')
        {
            cout << s[0] << " ";
            for(int i=1;i<n-1;i++)
            {
                cout << s[i];
            }
            cout << " " << s[n-1];
        }

        else if(s[0]=='a' && s[n-1]=='b')
        {
            if(s[1]=='b')
            {
                cout << s[0] << " ";
                for(int i=1;i<n-1;i++)
                {
                    cout << s[i];
                }
                cout << " " << s[n-1];
            }
            else
            {
                for(int i=0;i<n-2;i++)
                    cout << s[i];
                cout << " " << s[n-2];
                cout << " " << s[n-1];

            }

        }
        else if(s[0]=='b' && s[n-1]=='a')
        {
            if(s[1]=='a')
            {
                cout << s[0] << " ";
                cout << s[1] << " ";
                for(int i=2;i<n;i++)
                {
                    cout << s[i];
                }
            }
            else
            {
                cout << s[0] << " ";
                 for(int i=1;i<n-1;i++)
                {
                    cout << s[i];
                }
                cout << " ";
                cout << s[n-1];
            }

        }
        cout << "\n";


    }


}

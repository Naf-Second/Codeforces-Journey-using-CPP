#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        int cnt = 0;
        char x = 97;
        vector <char> c;
        if(a==b)
        {
             for(int i=0;i<n;i++)
             {
                 cout << x;
                 x++;
                 if(x>122)
                    x=97;
             }
        }
        else{
        while(c.size()<n)
        {

            if(cnt!=b-1)
            {
                c.push_back(x);
                x++;
                cnt++;
                //i=cnt;
            }
            if(cnt==b-1){

                while(cnt!=a){
                 c.push_back(x);
                cnt++;
                if(x>122)
                    x=97;
                }
            }
            if(cnt>=a)
            {
                cnt=0;
                x=97;
            }

        }
         for(int i=0;i<n;i++)
        {
            cout << c[i];
        }

        }

        cout << "\n";

    }
}

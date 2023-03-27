#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int a,b,c,d;
    cin >> t;
    bool ans = true;
    while(ans!=false){
        t++;
        a = t%10;
        b = (t/10)%10;
      //  cout << a << " " << b;

        if(a!=b)
        {
           // cout << a;

           //t = t/10;
            c = (t/100)%10;
            if(b!=c && a!=c)
            {

                d = t/1000;
                if(d!=a && d!=b && d!=c)
                    {
                        ans = false;
                    }
            }

        }

    }
    cout << t;


}

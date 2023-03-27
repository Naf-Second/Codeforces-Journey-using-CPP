#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        int n,count =0;
        char x,y;
        cin >> n;
        cin >> str;
        for(int i=2;i<n;i+=3)
        {
            if(n<=2)
                cout << "No" << endl;
            else if(str[i]==str[i-1])
                cout << "YES" << endl;
            else
                cout << "No" << endl;

        }




}
}

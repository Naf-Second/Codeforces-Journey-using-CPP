#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    cin >> s1;

    string a = "Alice",b = "Bob",c = "Cindy";
    int l = a.size(),o = b.size(), p = c.size();
    int x = s1.size();
    int count1=0,count2=0,count3=0,count4=0;


    for(int i=0;i<x;i++)
    {
        if(s1[i]==a[i])
        {
            count1++;
        }
        else if(s1[i]==b[i])
        {
            count2++;
        }
        else if(s1[i]==c[i])
        {
            count3++;
        }
        else if(s1[i]=='.')
        {
            count4++;
        }


    }
        if(count4==x && (x==l || x==p))
            cout << "CAN'T TELL";
        else if(x==5 && count4!=x && (count1+count4)==l)
            cout << a;
        else if(x==3 && (count2+count4)==o)
            cout << b;
        else if(x==5 && count4!=x && (count3+count4)==p)
            cout << c;
        else if(x!=l || x!=o || x!= p || x==2 || x==4)
        {
            cout << "SOMETHING'S WRONG";
        }

        return 0;
    }

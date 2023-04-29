#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int track = 1;
    for(int i=1;i<=501;i++)
    {

        if(track==n){
            cout << "YES";
            break;
        }
        if(i>n){
            cout << "NO";
            break;
        }
        if(i!=1)
        track+=i;
    }

}

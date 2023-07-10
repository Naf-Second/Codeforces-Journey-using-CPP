#include <bits/stdc++.h>

using namespace std;

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    long long  g=0;
    for(long long int i=0;i<n;i++)
    {
        long long x;
        cin >> x;
        g = __gcd(x,g);

    }


    int ans = 0;
    for(long long int i=1;i<=sqrt(g);i++)
    {
		if (g % i == 0) {
			++ans;
			if (i != g / i) {
				++ans;
			}
		}
	}
	cout << ans;




}

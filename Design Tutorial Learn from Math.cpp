#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int x,y;
    x = t/2;
    y = t-x;
    while((isPrime(x))|| isPrime(y))
    {
        x = x - 1;
        y = t - x;
    }
    printf("%d %d",x,y);
}


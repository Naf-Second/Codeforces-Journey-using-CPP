#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        double n, a, b;
        cin >> n >> a >> b;

        if (b < a) {
            cout << 1 << "\n";
        } else if (b > a) {

            cout << fixed << setprecision(0) << ceil(n/a) << "\n";
        } else {

            cout << fixed << setprecision(0) << ceil(n/a) << "\n";
        }
    }

    return 0;
}


// 1 5124149 4 29
 //  1 8546866 16 16

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
  while(t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        map<int, int> m;
        map<int, int> m1;

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == arr1[i + 1] && i!=n-1)
            {
                cnt++;
            }
            else if (arr1[i] != arr1[i + 1])
            {
                int x = max(m[arr1[i]],cnt);
                if(x>(m[arr1[i]]))
                m[arr1[i]] = x;
                cnt = 1;
            }
            else
            {
                  int x = max(m[arr1[i]],cnt);
                   if(x>(m[arr1[i]]))
                m[arr1[i]] = x;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr2[i] == arr2[i + 1] && i!=n-1)
            {
                cnt++;
            }
               else if (arr2[i] != arr2[i + 1] )
            {
                int x = max(m1[arr2[i]],cnt);
                if(x>(m1[arr2[i]]))
                m1[arr2[i]] = x;
                cnt = 1;
            }
             else
            {
                int x = max(m1[arr2[i]],cnt);
                 if(x>(m1[arr2[i]]))
                m1[arr2[i]] = x;
            }
        }

        int largestSum = 1;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            int key = it->first;
            int value = it->second;

            if (m1.count(key) > 0)
            {
                int value1 = m1[key];
                int sum = value + value1;
                largestSum = max(largestSum, sum);
            }
            else
            {
                largestSum = max(largestSum, value);
            }
        }
         for (auto it = m1.begin(); it != m1.end(); it++)
        {
            int key = it->first;
            int value = it->second;

            if (m.count(key) > 0)
            {
                int value1 = m[key];
                int sum = value + value1;

                largestSum = max(largestSum, sum);
            }
            else
            {
                largestSum = max(largestSum, value);
            }
        }

        cout << largestSum << endl;
    }
    return 0;
}

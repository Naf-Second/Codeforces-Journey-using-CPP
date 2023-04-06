#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;


    for(int j=1;j<=t;j++)
    {

        int n,l;
        cin >> n;
        int arr[n];
    vector <int> v1,v2,v3,v4;
    vector <int> :: iterator it;


        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
            if(arr[i]%2!=0){
            v3.push_back(i);

        }
            else{
            v4.push_back(i);
        }
        }
            l = v3.size();

  /*          if(v4.size()==2 && l==1)
            {
                cout << "Yes" << "\n";
                cout << "1" << " "<< "2" << " " << "3";
            }

*/
           if(l >= 3) {
    cout << "Yes" << "\n";

    int count = 0;
    for(it = v3.begin(); it != v3.end(); ++it) {
        if (count == 3) {
            break;
        }
        cout << *it << " ";
        count++; // increment the counter
        }
                        }
            else if(l>=1 && v4.size()>=2){
                            cout << "Yes" << "\n";
                            cout << v3[0] << " " << v4[0] << " " << v4[1];
            }

            else{
                cout << "No";

                }



                cout << "\n";


    }


    return 0;
}



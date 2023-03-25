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
        int AW = 0, AB = 0,BW = 0, BB = 0,Alice = 0, Bob = 0;
        int n;
        cin >> n;
        int x = n,j;
        int y = 0;
        for (int i=1;i<=x;i++)
        {
            if(i%4==0 || i%4==1)
                {
                    Alice += i;

                if(i%2==0)
                   {
                      AW += ceil(i/2.0);
                      AB += floor(i/2.0);
                   }
                   else
                   {
                       if(i%4==3)
                       {
                        AB += ceil(i/2.0);
                        AW += floor(i/2.0);
                       }
                       else
                       {
                            AW += ceil(i/2.0);
                            AB += floor(i/2.0);
                       }
                   }

                }

            else
                {
                    Bob += i;
                    if(i%2==0)
                   {
                      BW += ceil(i/2.0);
                      BB += floor(i/2.0);
                   }
                   else
                   {
                       if(i%4==3)
                       {
                        BB += ceil(i/2.0);
                        BW += floor(i/2.0);
                       }
                       else
                       {
                            BW += ceil(i/2.0);
                            BB += floor(i/2.0);
                       }
                   }

                }
                n -= i;
               j = i;
             if((Alice+Bob)>=x)
               {
                y = x - (Alice+Bob);
                break;
               }

        }

         if(y!=0)
               {
                   // cout << j << "\n";
                if(j%4==0 || j%4==1)
                {
                    if(j%2==0)
                   {
                      AW += ceil(y/2.0);
                      AB += floor(y/2.0);
                   }
                   else
                   {
                       if(j%4==3)
                       {
                        AB += ceil(y/2.0);
                        AW += floor(y/2.0);
                       }
                       else
                       {
                            AW += floor(y/2.0);
                            AB += ceil(y/2.0);
                       }
                   }

                }

            else
            {
                 if(j%2==0)
                   {
                      BB += ceil(y/2.0);
                       BW += floor(y/2.0);
                   }
                   else
                   {
                       if(j%4==3)
                       {
                        BB += floor(y/2.0);
                        BW += ceil(y/2.0);
                       }
                       else
                       {
                            BW += ceil(y/2.0);
                            BB += floor(y/2.0);
                       }
                   }

            }


               }

        cout << AW << " " << AB << " " << BW << " " << BB << "\n";
    }
}

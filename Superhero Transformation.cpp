#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> s;
    cin >> t;
    int count=0;
    if(s.length()!=t.length())
        cout << "NO";
    else{
        for(int i=0;i<s.length();i++)
    {
         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {

      if (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u') {
        cout << "No" << endl;
        break;
      }
      else
        count++;

    }
       else if (!(s[i]=='a'|| s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')&&(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'))
            {cout << "NO";
            break;
            }

       else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
          count+=1;

       else if((s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')&&(t[i]!='a'||t[i]!='e'||t[i]!='i'||t[i]!='o'||t[i]!='u')){
            count+=1;
       }

        else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]!='a'||t[i]!='e'||t[i]!='i'||t[i]!='o'||t[i]!='u')){
            cout << "NO";

        }

        else{
            count++;
        }
    }
  if(count==s.length()){
    cout << "YES";
    }
    }

return 0;

}


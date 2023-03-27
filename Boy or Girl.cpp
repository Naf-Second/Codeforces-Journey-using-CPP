#include <bits/stdc++.h>

using namespace std;

int main() {

  string input;
  cout << "Enter a string: ";
  getline(cin, input);

    sort(input.begin(),input.end());

    int count = input.size();
    for(int i=0;i<count;i++)
    {
        if(input[i]!=input[i+1])
            cout << input;
    }



  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string name = "codeforces";
    while(t--)
    {
        string s;
        int count = 0;
        cin >> s;
        for(int i=0;i<10;i++)
        {
            if(s[i]!= name[i])
            {
                count++;
            }
          
             
            
        }
        cout << count << endl;
    }
}
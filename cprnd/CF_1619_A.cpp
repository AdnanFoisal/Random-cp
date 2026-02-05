#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int pos = 0;
        cin >> s;
        
        if(s.length() %2!=0)
        {
            cout << "NO" << endl;
           continue;
        }
        else
        {
            int k = s.length()/2;
        vector<char> a(s.length()/2);
        vector<char> b(s.length()/2);
        for(int i=0;i<k;i++)
        {
            a[i] = s[i];
            pos=i;
        }
        for(int i=0;i<k;i++)
        {
            b[i] = s[pos+1+i];

        }
        if(a==b)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
            cin >>b[i];
        }
        int count=1;
           
       sort(b.begin(),b.end());
      
       for(int i=1;i<n;i++)
       {
        if(b[i]!=b[i-1])
        {
            count++;
        }
       }
       cout << count << endl;
    }
}
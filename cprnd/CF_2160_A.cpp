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
        vector<int> a(n);
        int pos=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
       int freq[102] = {0};
       for(int i = 0;i<n;i++)
       {
        freq[a[i]]++;
       }

       int ans=0;
       for(int i=0;i<102;i++)
       {
        if(freq[i] == 0)
        {
            ans = i;
            break;
        }
        freq[i]--;
       }
       cout << ans<< endl;
    }
}
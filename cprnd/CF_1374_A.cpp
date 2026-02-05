#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y,n;
       
        cin >> x >> y >> n;
        long long temp=n-((n-y)%x);
        
        cout << temp << endl;
    }
}
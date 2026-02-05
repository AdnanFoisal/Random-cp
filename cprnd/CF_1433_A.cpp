#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int num = stoi(s);
        if(num/10==0)
        cout << 10*(num%10)-9 << endl;
     else if(num/100==0)
        cout << 10*(num%10)-7 << endl;
     else if(num/1000==0)
        cout << 10*(num%10)-4 << endl;
     else if(num/10000==0)
        cout <<10*(num%10) << endl;
    }
}
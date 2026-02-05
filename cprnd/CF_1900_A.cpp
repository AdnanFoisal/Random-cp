#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int m;
        string a ;
        cin >> m;
        cin >> a;
        bool finish = false;
        int c=0;
        for(int i=0;i<m;i++) {
            if(a[i] =='.' && i+1<m && a[i+1] == '.' && i+2<m && a[i+2] == '.')
            {
                finish  = true;
                break;
            }
            else if(a[i] == '.')
            c++;
        }
        if(finish==true) {
            cout << 2 << endl;
        }
        else
        cout << c <<endl;
    }
}
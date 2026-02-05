#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin  >> t;
while(t--) {
    int n,x;
    cin >>n >> x;
    vector<int> a(n);
    for(int i= 0;i<n;i++) {
        cin >>a[i];
    }
    int v1= a[0]; 
int v2=0,ans = 0;
int v3 = 2*(x-a[n-1]);
ans = v1>v3? v1:v3;
 for(int i= 1;i<=n-1;i++)
  {  v2 = a[i]-a[i-1];
if(v2 > ans) {
    ans = v2;
}
}
cout << ans << endl;
}
}
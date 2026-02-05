#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ones = 0;
        bool has_gap = false; // is there a 0 between any two 1s?
        int last_one = -1;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                ones++;
                if(last_one != -1 && i - last_one > 1)
                    has_gap = true;
                last_one = i;
            }
        }

        if(ones == 0) cout << 0 << "\n";
        else if(!has_gap) cout << 1 << "\n";
        else {
            // count number of 1s separated by 0s
            int count = 0;
            for(int i = 0; i < n; i++) {
                if(s[i] == '1' && (i == 0 || s[i-1] == '0')) count++;
            }
            cout << count << "\n";
        }
    }
}

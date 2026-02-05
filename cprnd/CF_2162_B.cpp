/* You are given a binary∗
 string s
 of length n
.

Your task is to find any subsequence†
 p
 of s
 such that:

The subsequence p
 is non-decreasing.
Let x
 denote the string obtained by removing all characters of p
 from s
, while preserving the order of the remaining characters. Then x
 must be a palindrome‡
.
You only need to output any valid subsequence p
 that satisfies both conditions. If no such subsequence exists, output −1
.

Note that an empty string is both non-decreasing and a palindrome.

∗
A binary string is a string consisting of characters '0' and '1'.

†
A subsequence of a string s=s1s2…sn
 is a sequence p=si1si2…sik
 such that 1≤i1<i2<…<ik≤n
. The characters are selected in order, but not necessarily contiguously. Note that an empty string is a subsequence of any string.

‡
A string t=t1t2…tm
 is a palindrome if ti=tm−i+1
 for all 1≤i≤m
. In other words, the string reads the same forward and backward.

Input
The first line contains a single integer t
 (1≤t≤3000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤10
) — the length of the string.

The second line contains a binary string s
 of length n
.

Output
If a solution exists:

On the first line, print a single integer k
 (0≤k≤n
) — the length of the subsequence p
.
On the second line, print k
 distinct integers i1,i2,…,ik
 (1≤i1<i2<⋯<ik≤n
) — the indices of the characters in s
 that form p
 (in order as they appear in s
).
Otherwise, print a single line containing −1
.

Example
InputCopy
5
3
010
3
001
5
00111
8
11010011
6
100101
OutputCopy
0

2
2 3
5
1 2 3 4 5
2
3 4
2
5 6
*/

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
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        //palindrome check
        for(int i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-i-1])
            {
                cout << n << endl;
                
               
             
            }
            else
        }
    }
}
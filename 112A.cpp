#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, k;
string s, q;
int a[51];

int main()
{
    start
        getline(cin, s);
        getline(cin, q);
        for(int i = 0; i < s.length();++i)
            {
                n = s[i];
                k = q[i];
                if (n < 96) s[i] = char(n + 32);
                if (k < 96) q[i] = char(k + 32);
            }
        if(s > q) cout << 1;
        else if (s<q) cout << -1;
        else cout << 0;
}





#include <bits/stdc++.h>

#define ALL(x) x.begin(), x.end()
#define RALL(x) x.rbegin(), x.rend()
#define pb push_back
#define emba emplace_back
#define S second
#define F first
#define flash ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using str = string;
using db = double;

void solve() {
    ll n;
    cin >> n;
    map<str, str> mp;
    for(int i = 0; i < n; i++){
        str s1, s2;
        cin >> s1 >> s2;
        mp[s1] = s2;
        mp[s2] = s1;
    }
    str s3;
    cin >> s3;
    if(mp.find(s3) != mp.end()){
        cout << mp[s3];
    }

}

int main() {
   flash;
   int z = 1;
   //cin >> z;
   while (z--) {
      solve();
   }
   return 0;
}
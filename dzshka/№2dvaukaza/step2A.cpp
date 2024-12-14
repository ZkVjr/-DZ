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
    ll n, s;
    cin >> n >> s;
    vll v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll x = 0, l = 0, res = 0;
    for(int r = 0; r < n; r++){
        x += v[r];
        while(x > s){
            x -= v[l];
            l++;
        }
        res = max(res, r - l + 1);
    }
    cout << res;

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
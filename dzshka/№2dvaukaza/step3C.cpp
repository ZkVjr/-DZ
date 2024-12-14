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
    vll a(n);
    vll v;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        v.pb(a[i + 1] - a[i]);
    }
    ll l = 0, x = 0, cnt = 0;
    for(int r = 0; r < v.size(); r++){
        x += a[r];
        if(x > s){
            cnt += r - l + 1;
        }        
    }
    cout << cnt - 1;

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
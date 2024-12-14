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
    ll n, p;
    cin >> n >> p;
    vll a(n);
    ll sumo = 0;
    vll v;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v.pb(a[i]);
        sumo += a[i];
    }
    if(sumo == n && n <= p){
        cout << 1 << " " << p;
        return;
    }
    for(int i = 0; i < n; i++){
        a.pb(v[i]);
    }
    ll cnt = (p / sumo) * n ; 
    p = p - (p / sumo) * sumo;
    ll l = 0, sum = 0, res = 1e18, ind = 0;
    for(ll r = 0; r < 2 * n; r++){
        sum += a[r];
        while(sum - a[l] > p){
            sum -= a[l];
            l++;
        }
        if(sum >= p){
            if(res > r - l + 1){
                res = r - l + 1;
                ind = l;
            }

        }
    }
    cout << ind + 1 << " " << res + cnt << "\n";
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
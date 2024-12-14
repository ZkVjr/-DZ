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
    ll n, m;
    cin >> n >> m;
    vll a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    ll i = 0, j = 0;
    while(i < n || j < m) {
        if(j == m || (i < n && a[i] < b[j])) {
            i++;
        }  else {
            j++;
            cout << i << " ";
        }
 
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
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
    vll a(n);
    vll b(m);
    vll c(n + m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    ll i = 0, j = 0;
    while(i < a.size() || j < b.size()){
        if(i < a.size() && (j == b.size() || a[i] < b[j])){
            c[i + j] = a[i];
            i++;
        } else {
            c[i + j] = b[j];
            j++;
        }
    }
    for(int s = 0; s < c.size(); s++){
        cout << c[s] << " ";
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
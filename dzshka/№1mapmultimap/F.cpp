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
    str s;
    getline(cin, s); 
    for(int i = 0; i < n; i++) {
        str s;
        getline(cin, s); 
        str country;
        istringstream iss(s);
        iss >> country; 

        str city;
        while(iss >> city) { 
            mp[city] = country;
        }
    }

    ll m;
    cin >> m; 

    for(int i = 0; i < m; i++) {
        str q;
        cin >> q;
        if(mp.find(q) != mp.end()) {
            cout << mp[q] << "\n";
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
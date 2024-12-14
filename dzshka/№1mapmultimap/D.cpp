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
    str s;
    map<str, ll> mp;
    while(getline(cin, s)){
        istringstream iss(s);
        str word;
        
        while(iss >> word){
            mp[word]++;
        }
    }
    
    ll mx = -1e9;
    str ans;
    for(auto it : mp){
        if(it.S > mx){
            mx = it.S;
            ans = it.F;
        }
    }
    cout << ans;

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
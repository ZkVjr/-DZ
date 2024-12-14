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
    ll a, b;
    cin >> a >> b;
    set<ll> sta;
    multiset<int> st;
    for(int i = 0; i < a; i++){
        ll c;
        cin >> c;
        st.insert(c);
        sta.insert(c);
    }

    set<ll> stb;
    for(int i = 0; i < b; i++){
        ll d;
        cin >> d;
        st.insert(d);
        stb.insert(d);
    }
    int cnt = 0;
    set<int> ans;
    for(auto it : st){
        if(st.count(it) == 2){
            cnt++;
            ans.insert(it);
            sta.erase(it);
            stb.erase(it);
        }
    } cout << cnt / 2 << "\n";

     for(auto it : ans){
        cout << it << " ";
     } cout << "\n";

    cout << sta.size() << "\n";
    for(auto it : sta){
        cout << it << " ";
    } cout << "\n";

    cout << stb.size() << "\n";
    for(auto it : stb){
        cout << it << " ";
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
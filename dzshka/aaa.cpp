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

void solve(){
    ll n;
    cin >> n;
    set<ll> st;
    for (int i = 1; i <= n; ++i) {
        st.insert(i);
    }
    while (true) {
        str s;
        getline(cin, s);
        stringstream iss (s);
        str t;
        iss >> t;
        if (t == "HELP") {
            break;
        }
        set<ll> myset;
        ll ch = stoll(t);
        myset.insert(ch);
        while(iss >> ch){
            myset.insert(ch);
        }
        str p;
        cin >> p;
        set<ll> res;
        if(p == "YES"){
            for(ll num : st){
                if(myset.find(num) != myset.end()){
                    res.insert(num);
                }
            }
        } else{
            for(ll num : st){
                if(myset.find(num) == myset.end()){
                    res.insert(num);
                }
            }
        }
        swap(res, st);
    }
    for(ll num : st){
        cout << num << " ";
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
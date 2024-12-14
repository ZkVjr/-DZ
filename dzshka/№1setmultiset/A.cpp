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
    getline(cin, s);
    multiset<int> ms;
    istringstream iss(s);
    int num = 0;
    while(iss >> num){
        if(ms.count(num) > 0){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
        ms.insert(num);
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
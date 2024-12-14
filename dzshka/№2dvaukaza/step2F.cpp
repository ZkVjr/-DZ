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

void solve() {
    ll n, k;
    cin >> n >> k;
    vll a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    multiset<ll> st;
    ll l = 0, res = 0;

    for(int r = 0; r < n; r++) {
        st.insert(a[r]);

        while(*st.rbegin() - *st.begin() > k) {
            st.erase(st.find(a[l]));
            l++;
        }

        res += r - l + 1;
    }

    cout << res;
}

int main() {
    flash;
    int z = 1;
    while (z--) {
        solve();
    }
    return 0;
}

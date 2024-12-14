#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;

array<ll, 3> Recalc(const array<ll, 3> &a, const array<ll, 3> &b) {
    array<ll, 6> all;
    for (int i = 0; i < 3; i++) {
        all[i] = a[i];
        all[i + 3] = b[i];
    }
    sort(all.begin(), all.end());
    array<ll, 3> ans {};
    for (int i = 0; i < 3; i++) {
        ans[i] = all[i + 3];
    }
    return ans;
}

struct Dsu {
    struct info {
        ll x {};
        array<ll, 3> a {};
    };

    int n;
    vector<info> f;
    vector<ll> val;
    Dsu(const vector<ll> &a) : n((int)a.size()), f(n), val(a.begin(), a.end()) {
        for (int i = 0; i < n; i++) {
            f[i].x = i;
            f[i].a = {-1LL, -1LL, a[i]};
        }
    }

    int Get(int x) {
        while (x != f[x].x) x = f[x].x = f[f[x].x].x;
        return x;
    }

    array<ll, 3> Get3(int x) {
        return f[Get(x)].a;
    }

    void Unite(int x, int y) {
        x = Get(x);
        y = Get(y);
        if (x == y) return;
        f[y].x = x;
        f[x].a = Recalc(f[x].a, f[y].a);
    }

    void Delete(int x) {
        vector<int> c;
        int xx = Get(x);
        array<ll, 3> newa {-1LL, -1LL, -1LL};
        for (int i = 0; i < n; i++) if (Get(i) == xx) {
            c.push_back(i);
        }
        int newx = -1;
        for (int i : c) if (i != x) {
            newx = i;
            break;
        }
        for (int i : c) if (i != x) {
            f[i].x = newx;
            newa = Recalc(newa, {-1LL, -1LL, val[i]});
        }
        f[x].x = x;
        if (newx != -1) {
            f[newx].a = newa;
        }
    }
};

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif // LOCAL
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;

    Dsu dsu(a);

    int z;
    cin >> z;
    while (z--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            x--;
            dsu.Delete(x);
        } else if (t == 2) {
            int x, y;
            cin >> x >> y;
            x--; y--;
            dsu.Unite(x, y);
        } else {
            int x;
            cin >> x;
            x--;
            auto ans = dsu.Get3(x);
            for (int i : ans) cout << i << ' ';
            cout << '\n';
        }
    }
}

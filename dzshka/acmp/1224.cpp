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

int n, m;
struct Student {
    string fio;
    vector <int> marks;
    int sum = 0;
    int ind = 0;
};

istream &operator>>(istream &in, Student &s) {
    cin.ignore();
    getline(in, s.fio);
    for(int i = 0; i < m; i++) {
        int x;
        in >> x;
        s.marks.push_back(x);
        s.sum += x;
    }
    return in;
}
ostream &operator<<(ostream &out, const Student &s) {
    out << s.fio << " (";
    for(int i = 0; i < s.marks.size() - 1; i++) {
        out << s.marks[i] << " ";
    }
    out << s.marks.back() << ")\n";
    return out;
}


bool comp1(Student &x, Student &y) {
    return x.sum > y.sum;
}

bool comp2(Student &x, Student &y) {
    return x.ind < y.ind;
}

int main() {
   flash;
   cin >> n >> m;
    vector <Student> base(n);
    for(int i = 0; i < n; i++) {
        cin >> base[i];
        base[i].ind = i;
    }
    sort(base.begin(), base.end(), comp1);
    int last = base[2].sum;
    sort(base.begin(), base.end(), comp2);
    
    for(int i = 0; i < base.size(); i++) {
        if(base[i].sum >= last) {
            cout << base[i];
        }
    }
   return 0;
}

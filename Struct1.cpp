// #include<bits/stdc++.h>
// using namespace std;


// struct DonThuc {
//     int n, m;
//     constexpr int num1() const { return n; }
//     constexpr int num2() const { return n; }

//     istream& operator>> (istream& is, DonThuc& obj) {
//         is >> obj.num1();
//         return is;
//     }
//     ostream& operator<< (ostream& os, DonThuc& obj) {
//         os << obj.num1();
//         return os;
//     }

//     DonThuc& operator+() {
//         return n + m;
//     }
//     DonThuc& operator-() {
//         return n - m;
//     }
// };

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
// }

#include<bits/stdc++.h>


using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef pair<bool, int> pbi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;


#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define TRAV(v) for(auto &e : v)
#define ALLVEC(v) v.begin(), v.end()
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define ins insert
#define INF (ll)1e17
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define nl '\n'


template <typename T> void ckmin(T& a, const T& b) { a = min(a, b); }
template <typename T> void ckmax(T& a, const T& b) { a = max(a, b); }


ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 9097;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;

struct Monomial {
    double coefficient;
    int exponent;

    Monomial inputMonomial() {
        Monomial m;
        cout << "Enter coefficient: ";
        cin >> m.coefficient;
        cout << "Enter exponent: ";
        cin >> m.exponent;
        return m;
    }

    void outputMonomial(Monomial m) {
        cout << m.coefficient << "x^" << m.exponent << nl;
    }

    Monomial addMonomials(Monomial m1, Monomial m2) {
        Monomial m;
        if (m1.exponent == m2.exponent) {
            m.coefficient = m1.coefficient + m2.coefficient;
            m.exponent = m1.exponent;
        }
        return m;
    }

    Monomial subtractMonomials(Monomial m1, Monomial m2) {
        Monomial m;
        if (m1.exponent == m2.exponent) {
            m.coefficient = m1.coefficient - m2.coefficient;
            m.exponent = m1.exponent;
        }
        return m;
    }

    Monomial multiplyMonomials(Monomial m1, Monomial m2) {
        Monomial m;
        m.coefficient = m1.coefficient * m2.coefficient;
        m.exponent = m1.exponent + m2.exponent;
        return m;
    }

    Monomial divideMonomials(Monomial m1, Monomial m2) {
        Monomial m;
        if (m2.coefficient != 0) {
            m.coefficient = m1.coefficient / m2.coefficient;
            m.exponent = m1.exponent - m2.exponent;
        }
        else cout << "Cannot divide by zero." << nl;
        return m;
    }

    Monomial differentiateMonomial(Monomial m) {
        Monomial m_diff;
        m_diff.coefficient = m.coefficient * m.exponent;
        m_diff.exponent = m.exponent - 1;
        return m_diff;
    }
}

void solve() {
    Monomial m1 = inputMonomial();
    Monomial m2 = inputMonomial();

    cout << "First monomial: ";
    outputMonomial(m1);
    cout << "Second monomial: ";
    outputMonomial(m2);

    cout << "Addition: ";
    outputMonomial(addMonomials(m1, m2));
    cout << "Subtraction: ";
    outputMonomial(subtractMonomials(m1, m2));
    cout << "Multiplication: ";
    outputMonomial(multiplyMonomials(m1, m2));
    cout << "Division: ";
    outputMonomial(divideMonomials(m1, m2));

    cout << "Differential of first monomial: ";
    outputMonomial(differentiateMonomial(m1));
    cout << "Differential of second monomial: ";
    outputMonomial(differentiateMonomial(m2));
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}
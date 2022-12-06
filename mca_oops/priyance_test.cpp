/* Priyansh Agarwal*/
#pragma GCC optimize("O3,unroll-loops")
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
#ifdef Priyansh31dec
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
/*--------------------------------------------------------------------------------------------------------------------------*/
template<typename Node>
struct SparseTable {
    vector<vector<Node>> table;
    vector<ll> logValues;
    int n;
    int maxLog;
    vector<ll> a;
    SparseTable(int n1, vector<ll> &arr) {
        n = n1;
        a = arr;
        table.resize(n);
        logValues.resize(n + 1);
        maxLog = log2(n);
        logValues[1] = 0;
        for (int i = 2; i <= n; i++) {
            logValues[i] = logValues[i / 2] + 1;
        }
        for (int i = 0; i < n; i++) {
            table[i].resize(maxLog + 1);
            fill(all(table[i]), Node());
        }
        build();
    }
    void build() {
        for (int i = 0; i < n; i++) {
            table[i][0] = Node(a[i]);
        }
        for (int i = 1; i <= maxLog; i++) {
            for (int j = 0; (j + (1 << i)) <= n; j++) {
                table[j][i].merge(table[j][i - 1], table[j + (1 << (i - 1))][i - 1]);
            }
        }
    }
    Node queryNormal(int left, int right) {
        Node ans = Node();
        for (int j = logValues[right - left + 1]; j >= 0; j--) {
            if ((1 << j) <= right - left + 1) {
                ans.merge(ans, table[left][j]);
                left += (1 << j);
            }
        }
        return ans;
    }
    Node queryIdempotent(int left, int right) {
        int j = logValues[right - left + 1];
        Node ans = Node();
        ans.merge(table[left][j], table[right - (1 << j) + 1][j]);
        return ans;
    }
};
struct Node1 {
    ll val; // store more info if required
    Node1() { // Identity Element
        val = 0;
    }
    Node1(ll v) {
        val = v;
    }
    void merge(Node1 &l, Node1 &r) {
        val = l.val ^ r.val;
    }
};
struct Node2 {
    ll val;
    Node2() {
        val = 0;
    }
    Node2(ll v) {
        val = v;
    }
    void merge(Node2 &l, Node2 &r){
        val = l.val + r.val;
    }
};
void solve(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        SparseTable<Node1> sp1 = SparseTable<Node1>(n, arr);
        SparseTable<Node2> sp2 = SparseTable<Node2>(n, arr);
        while(q--){
            int l, r;
            cin >> l >> r;
            int l1 = l - 1, r1 = r - 1;
            int start = l1, end = r1;
            ll val = sp2.queryNormal(l1, r1).val - sp1.queryNormal(l1, r1).val;
            while(start <= end){
                int mid = (start + end) / 2;
                ll val1 = sp2.queryNormal(mid, r1).val - sp1.queryNormal(mid, r1).val;
                if(val == val1){
                    l1 = max(l1, mid);
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
            start = l1, end = r1;
            while(start <= end){
                int mid = (start + end) / 2;
                ll val1 = sp2.queryNormal(l1, mid).val - sp1.queryNormal(l1, mid).val;
                if(val == val1){
                    r1 = min(r1, mid);
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
            cout << l1 + 1 << " " << r1 + 1 << nline;
        }
    }
} 
int main() {
#ifdef Priyansh31dec
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef Priyansh31dec
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
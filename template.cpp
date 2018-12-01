#include <bits/stdc++.h>
using namespace std;

// #define int long long
struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);}} fast;

#define rep(n) for (int i = 0; i < n; ++i)

#define all(x) (x).begin(),(x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> pii;
typedef double D;
typedef complex<D> P;
typedef vector<string> vs;

#define SZ(x) ((int)(x).size())

#define fill(x,y) memset(x,y,sizeof(x))

// with compile option -DLOCAL
#ifdef LOCAL
    #define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
    #define eprintf(...) 42
#endif

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define pcnt __builtin_popcount
#define pcntll __builtin_popcountll

#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)
#define F first
#define S second

#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev

inline bool inside(int y, int x, int H, int W) {return y >= 0 && x >= 0 && y < H && x < W;}

int qp(int a,ll b){int ans=1;do{if(b&1)ans=1ll*ans*a;a=1ll*a*a;}while(b>>=1);return ans;}
int qp(int a,ll b,int mo){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};



#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

signed main() {
    Fast();

    return 0;
}


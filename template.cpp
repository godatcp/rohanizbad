#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <math.h>
#include <string>
using namespace std;
#define int long long
using ll = long long;
#define INT_MAX __LONG_LONG_MAX__
#define INT_MIN __LONG_LONG_MIN__
#define inf __LONG_LONG_MAX__
typedef vector<int> vi;
typedef vector<pair<int,int> > vpi;
typedef pair<int,int> pi;
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define For(i, a) for (int i = 0; i < (a); i++)
#define Ford(i,a,b) for (int i = (b)-1; i >= (a); i--)
#define Ford(i,a) for (int i = (a)-1; i >= 0; i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define sz(x) (int)x.size()
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define resz resize
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const int mod = (int)1e9 + 7;
void setIn(string s) { freopen(s.c_str(),"r",stdin); }
void setOut(string s) { freopen(s.c_str(),"w",stdout); }
void setIO(string s = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    if (sz(s) > 0) { setIn(s+".in"), setOut(s+".out"); }
}
void solve(){
    
}
signed main(){
    ll t; cin >> t;
    while(t--){
        solve();
    }
}

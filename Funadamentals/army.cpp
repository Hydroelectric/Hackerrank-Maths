#include <atomic>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define ll long long
#define ld long double
#define ar array
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001;


void solve() {
    ll n,m;
    cin>>n>>m;
    cout<<((n+1)/2)*((m+1)/2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te = 1;
    //cin >> te;
    while(te--) solve();
}

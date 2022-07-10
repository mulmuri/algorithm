#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl '\n'
#define int long long

typedef long long ll;
typedef pair<int,int> pii;

const int MOD = 998232453;
const int INF = 1e18;
const int SIZE = 200001;


int n;
int arr[SIZE];


void solve() {
    cin >> n;

    int cmp = 1;
    while (cmp <= n) cmp *= 10;
    cmp /= 10;
    cout << n - cmp << endl;
}

int32_t main() {
    fastio;

    int t; cin >> t;
    while (t--) solve();
}
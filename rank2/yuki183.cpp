#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define INF 1<<30
#define MP make_pair
#define mp make_pair
#define pb push_back
#define PB push_back
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define ll long long
#define ull unsigned long long
#define MOD (10 ** 9 + 7)

int dp[40000];

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout.precision(16);

  int N;
  cin >> N;

  int t;
  dp[0] = 1;
  REP(i, N) {
      cin >> t;
      REP(j, 40000) if(dp[j]) dp[j^t] = 1;
  }

  int res = 0;
  REP(j, 40000) if(dp[j]) res++;

  cout << res << endl;
  return 0;
}

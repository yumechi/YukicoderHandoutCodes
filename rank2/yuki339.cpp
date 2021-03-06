#include <iostream>
#include <cstdio>
#include <cmath>
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
#define ALEN(ARR) (sizeof(ARR) / sizeof((ARR)[0]))
#define MP make_pair
#define mp make_pair
#define pb push_back
#define PB push_back
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    while(b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int arrgcd(int *x, int length) {
    int t = x[0];
    FOR(i, 1, length) t = gcd(t, x[i]);
    return t;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout.precision(16);
	
	int num;
	cin >> num;
	
	int answers[num];
	REP(i, num) cin >> answers[i];
	
	cout << 100 / arrgcd(answers, num) << endl;

	return 0;
}

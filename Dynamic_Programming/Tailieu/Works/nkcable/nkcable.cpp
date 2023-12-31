#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const char* INPUT = "nkcable.inp";
const char* OUTPUT = "nkcable.out";

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    faster;

    // Code here
    int n;
    int arr[100004];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int dp[100004];
    dp[0] = 1;
    dp[1] = 2;

    for(int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i-1], dp[i-2]) + arr[i-1];
    }

    cout << dp[n-1]; EL;

    return 0;
}
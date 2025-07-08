#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];
#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);

// dp[pos][tight][leading_zeros][prev_digit]
int dp[20][2][2][12];
// if leading zero==1 means true else 0
// if tight==1 means true else 0

int solve(string &s, int pos, int tight, int leading_zeros, int prev) {
  if (pos == s.size())
    return 1;
  if (dp[pos][tight][leading_zeros][prev] != -1)
    return dp[pos][tight][leading_zeros][prev];
  int low = 0;
  int high = (tight) ? s[pos] - '0' : 9;
  int cnt = 0;

  for (int digit = low; digit <= high; digit++) {
    if (leading_zeros == false && digit == prev)
      continue;
    int new_lead = leading_zeros && (digit == 0);
    int new_tight = tight && (digit == high);
    int new_prev = new_lead ? 10 : digit;
    cnt += solve(s, pos + 1, new_tight, new_lead, new_prev);
  }
  return dp[pos][tight][leading_zeros][prev] = cnt;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int l, r;
  cin >> l >> r;

  // dp[pos][tight][leading_zeros][prev_digit]
  // Calculate count for [0, r]
  string ri = to_string(r);
  memset(dp, -1, sizeof(dp));
  int rightAns = solve(ri, 0, 1, 1, 10);

  // Calculate count for [0, l-1]
  memset(dp, -1, sizeof(dp));
  string le = to_string(l - 1);
  int leftAns = solve(le, 0, 1, 1, 10);

  cout << rightAns - leftAns << endl;

  return 0;
}
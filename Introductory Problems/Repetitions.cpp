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

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  unordered_map<char, int> mp;
  string s;
  cin >> s;
  int cnt = 1;
  int mx = 1;
  for (int i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1]) {
      cnt++;
    } else {
      cnt = 1;
    }
    mx = max(mx, cnt);
  }
  cout << mx << endl;

  return 0;
}
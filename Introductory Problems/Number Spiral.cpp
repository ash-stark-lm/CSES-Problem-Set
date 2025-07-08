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
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    int ans = 0;

    if (x < y) {
      if (y & 1) {
        ans = y * y - x + 1;
      } else {
        ans = (y - 1) * (y - 1) + x;
      }
    } else {
      if (x & 1) {
        ans = (x - 1) * (x - 1) + y;
      } else {
        ans = x * x - y + 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
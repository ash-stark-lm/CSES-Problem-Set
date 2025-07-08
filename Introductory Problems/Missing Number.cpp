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

  int n;
  cin >> n;
  vi(n - 1);
  int x = 0;
  for (int i = 1; i <= n; i++) {
    x ^= i;
  }
  for (int i = 0; i < n - 1; i++) {
    x ^= v[i];
  }
  cout << x << endl;

  /*
 int n;
  cin >> n;
  vi(n - 1);
  int missing = n;
  for (int i = 0; i < n - 1; i++) {
    int curr = abs(v[i]);
    if (curr <= n - 1) {
      v[curr - 1] = -v[curr - 1];
    }
  }

  for (int i = 0; i < n - 1; i++) {
    if (v[i] > 0) {
      missing = i + 1;
      break;
    }
  }
  cout << missing << endl;
  */

  return 0;
}
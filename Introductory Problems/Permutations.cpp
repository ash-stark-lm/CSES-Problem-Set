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
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
  if (n <= 3) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  int i = 1, j = 2;
  while (j <= n) {
    cout << j << " ";
    j += 2;
  }
  while (i <= n) {
    cout << i << " ";
    i += 2;
  }

  cout << endl;

  return 0;
}
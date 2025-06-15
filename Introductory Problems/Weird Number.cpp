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
#define printarr(arr, n)                                                       \
  {                                                                            \
    for (int i = 0; i < n; i++) {                                              \
      cout << arr[i] << " ";                                                   \
    }                                                                          \
    cout << endl;                                                              \
  }

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;

  cout << n << " ";
  while (n != 1) {
    if (n & 1) {
      n = n * 3 + 1;
      cout << n << " ";
    } else {
      n /= 2;
      cout << n << " ";
    }
  }

  return 0;
}

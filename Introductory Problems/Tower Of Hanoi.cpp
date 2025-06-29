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

// Just to count total moves: 2^n - 1
int totalMoves(int n) {
  if (n == 1)
    return 1;
  return 2 * totalMoves(n - 1) + 1;
}

void toh(int n, int from, int aux, int to) {
  if (n == 1) {
    cout << from << " " << to << endl;
    return;
  }

  toh(n - 1, from, to, aux);
  cout << from << " " << to << endl;
  toh(n - 1, aux, from, to);
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  // Print count first
  cout << totalMoves(n) << endl;

  // Then print moves
  toh(n, 1, 2, 3);

  return 0;
}

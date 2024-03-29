#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

ll n, ans;

ll eulerPhi() {
  long long ret = n;
  long long sqrtn = sqrt(n);
  for (long long div = 2; div <= sqrtn; div++) {
    if (n % div == 0) {
      ret = ret / div * (div - 1);
    }
    while (n % div == 0) {
      n /= div;
    }
  }
  if (n != 1) {
    ret = ret / n * (n - 1);
  }
  return ret;
}

int main() {
  fast;
  cin >> n;
  cout << eulerPhi();
}

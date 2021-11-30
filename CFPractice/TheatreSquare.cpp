#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ll n,m,f;
  cin >> n >> m >> f;
  ll width = ceil((double)n / f);
  ll height = ceil((double)m / f);
  cout << (width*height) << endl;
  return 0;
}

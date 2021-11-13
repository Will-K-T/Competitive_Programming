#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, x;
  cin >> n >> x;
  if(x == 1){
    cout << 1 << " ";
    for(int i=0; i<n-1; ++i) cout << 0 << " ";
    return 0;
  }
  long long curr = 0;
  while(n > 0){
    curr = x/n;
    cout << curr << " ";
    --n;
    x -= curr;
  }







  return 0;
}

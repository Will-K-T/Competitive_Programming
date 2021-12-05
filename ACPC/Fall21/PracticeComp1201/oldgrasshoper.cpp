#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ll n;
  cin >> n;
  ll start, jumps;
  for(ll i=0; i<n; ++i){
    cin >> start >> jumps;
    int pos = jumps % 4;
    if(pos == 0) {
      cout << start << endl;
    }else if(pos == 1){
      if(start % 2 == 0){
        cout << start - jumps << endl;
      }else{
        cout << start + jumps << endl;
      }
    }else if(pos == 2){
      if(start % 2 == 0){
        cout << start - (jumps-1) + jumps << endl;
      }else{
        cout << start + (jumps-1) - jumps << endl;
      }
    }else{
      if(start % 2 == 0){
        cout << start + (jumps+1) << endl;
      }else{
        cout << start - (jumps+1) << endl;
      }
    }
  }
  return 0;
}

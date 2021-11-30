#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> part(n);
  for(int i=0; i<n; ++i) cin >> part[i];
  int score = part[k-1];
  int result = 0;
  for(int i=0; i<n; ++i){
    if(part[i] > 0 && part[i] >= score){
      result++;
    }
    else{
      break;
    }
  }
  cout << result << endl;
  return 0;
}

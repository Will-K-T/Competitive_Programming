#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> leftTower(n);
  vector<int> rightTower(n);
  for(int i=0; i<n; ++i) cin >> leftTower.at(i) >> rightTower.at(i);
  int currLeft = -1;
  int currRight = -1;
  for(int i=0; i<n; ++i){
    if(leftTower.at(i) >= a+2 || rightTower.at(i) >= b+2) continue;
    if(leftTower.at(i) >= a-1 && rightTower.at(i) >= b-1){
      cout << "YES" << endl;
      return 0;
    }
    if(leftTower.at(i) >= a-1 && (currRight == -1 || rightTower.at(i) <= currRight)){
      currLeft = leftTower.at(i);
    }
    if(rightTower.at(i) >= b-1 && (currLeft == -1 || leftTower.at(i) <= currLeft)){
      currRight = rightTower.at(i);
    }
    if(currLeft >= a-1 && currRight >= b-1){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}

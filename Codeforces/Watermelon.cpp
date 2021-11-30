#include <bits/stdc++.h>

using namespace std;

int main(){
  int num;
  cin >> num;
  if(num == 2){
    cout << "NO" << endl;
    return 0;
  }
  if(num%2 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

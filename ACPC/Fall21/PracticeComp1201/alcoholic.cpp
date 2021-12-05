#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ll N, X;
  cin >> N >> X;
  X *= 100;
  ll intake = 0;
  ll vi;
  ll pi;
  for(int i=0; i<N; ++i){
    cin >> vi >> pi;
    //intake += vi * (pi/100);
    intake += vi * pi;
    //cout << intake << endl;
    if(intake > X){
      cout << (i+1) << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}

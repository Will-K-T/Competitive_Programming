#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  long long sum = 0;
  long long input = 0;
  for(int i=0; i<N; ++i){
    cin >> input;
    sum += input-1;
  }
  cout << sum << endl;
  return 0;
}

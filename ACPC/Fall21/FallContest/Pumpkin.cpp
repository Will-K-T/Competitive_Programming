#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  long long total;
  cin >> total >> n;
  vector<long long> nums(n);
  for(long long i=0; i<n; ++i) cin >> nums.at(i);
  sort(nums.begin(), nums.end());
  long long count = 0;
  long long currIdx = nums.size()-1;
  for(long long i=nums.size()-1; i>=0; --i){
    total -= nums.at(i);
    count++;
    if(total <= 0){
      cout << count << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}

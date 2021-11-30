#include <bits/stdc++.h>

using namespace std;

int main(){
  string first, second;
  cin >> first >> second;
  int i;
  for(i=0; i<first.size(); ++i){
    if(tolower(first[i]) < tolower(second[i])){
      cout << -1 << endl;
      break;
    }else if(tolower(first[i]) > tolower(second[i])){
      cout << 1 << endl;
      break;
    }
  }
  if(i == first.size()) cout << 0 << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
  int num;
  string input;
  cin >> num;
  for(int i=0; i<num; ++i){
    cin >> input;
    if(input.size() > 10){
      cout << input.at(0) << input.size()-2 << input.at(input.size()-1) << endl;
    }else{
      cout << input << endl;
    }
  }
  return 0;
}

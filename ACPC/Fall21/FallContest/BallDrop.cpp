#include <bits/stdc++.h>
#include <utility>

using namespace std;

//int n, jump, start, end;
/*
class Pair{
public:
  int first;
  int second;
  int end;
  Pair(int f, int s, int e): first(f), second(s), end(e){}
  bool operator<(const Pair& rhs){
    if(abs(first-end) < abs(rhs.first-end)) return true;
    return false;
    //return lhs.prior < rhs.prior;
  }
};

struct Comp{
    bool operator()(const Pair& a, const Pair& b){
      if(abs(a.first-a.end) < abs(b.first-b.end)) return true;
      return false;
    }
};
*/
int main(){
  int n, jump, start, end;
  cin >> n >> jump >> start >> end;
  if(start == end){
    cout << 0 << endl;
    return 0;
  }
  vector<int> visited(n+1, 0);
  queue<pair<int, int>> nums;
  //priority_queue<Pair, vector<Pair>, Comp> nums;

  nums.push(pair<int, int>(start, 0));
  //nums.push(Pair(start, 0, end));
  while(!nums.empty()){
    pair<int, int> curr = nums.front();
    //Pair curr = nums.top();
    nums.pop();
    visited.at(curr.first) = 1;
    if(curr.first == end){
      cout << curr.second << endl;
      return 0;
    }
    bool sameHalf = false;
    if(min(abs(end-curr.first), abs(end-(n+curr.first))) < n/2-jump){
      sameHalf = true;
    }
    if(sameHalf){
      //cout << "hey" << endl;
      for(int i=1; i<=jump; i++){
        int left = curr.first-i <= 0 ? n-i+1 : curr.first-i;
        int right = curr.first+i >= n+1 ? i : curr.first+i;
        if(visited.at(left) == 0){nums.push(pair<int, int>(left, curr.second+1));}
        if(visited.at(right) == 0){nums.push(pair<int, int>(right, curr.second+1));}

        //if(visited.at(left) == 0){nums.push(Pair(left, curr.second+1, end));}
        //if(visited.at(right) == 0){nums.push(Pair(right, curr.second+1, end));}
      }
    }else{
      //cout << "woah" << endl;
      int adjacent = ((n/2)+curr.first)%n == 0 ? n : ((n/2)+curr.first)%n;

      if(visited.at(adjacent) == 0){nums.push(pair<int, int>(adjacent, curr.second+1));}
      //if(visited.at(adjacent) == 0){nums.push(Pair(adjacent, curr.second+1, end));}
    }
  }
  return 0;
}

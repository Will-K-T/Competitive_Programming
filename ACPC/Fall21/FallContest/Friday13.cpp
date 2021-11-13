#include <iostream>
#include <string>

using namespace std;

int main(){
  string in;
  cin >> in;
  if(in == "Friday"){
    cout << "Okay!" << endl;
  }else if(in == "Saturday"){
    cout << "Off by one." << endl;
  }
  return 0;
}

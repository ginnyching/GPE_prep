#include <iostream>
#include <string>
using namespace std;

int main() {
  int input=0;
  string str;
  while(cin>>input){
    int r=0;
    if(input==0)
      break;
    while(input!=0){
      r+=input%2;
      str.insert(0,to_string(input%2));
      input/=2;
    }
    cout<<"The parity of "<<str<<" is "<<r<<" (mod 2).\n";
    str.clear();
  }
  
  return 0;
}
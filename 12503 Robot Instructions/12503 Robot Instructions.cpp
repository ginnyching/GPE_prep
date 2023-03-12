#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int T=0,n=0;
  vector<int> move;
  cin>>T;
  while(T--){
    cin>>n;
    int pos=0;
    while(n--){
      string str;
      while(str.length()==0)
        getline(cin, str);
      if(str.length()==4){
        move.push_back(-1);
        pos--;
      }
      else if(str.length()==5){
        move.push_back(1);
        pos++;
      }
      else{
        str=str.substr(str.find_last_of(" "),str.length());
        int num=stoi(str.c_str(),nullptr,10);
        move.push_back(move[num-1]);
        pos+=move[num-1];
      }
    }
    cout<<pos<<endl;
    move.clear();
  }
  return 0;
}
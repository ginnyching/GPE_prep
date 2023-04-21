#include <iostream>
#include <string>
#include <vector>

using namespace std;
void press(string s, vector<pair<int,bool>> &finger){
  for(int i=0;i<10;i++){
    if(s[i]=='1' && finger[i].second==0){
      finger[i].first++;
      finger[i].second=1;
    }
    else if(s[i]=='0' && finger[i].second==1)
      finger[i].second=0;
  }
}
int main() {
  string c="0111001111";
  string d="0111001110";
  string e="0111001100";
  string f="0111001000";
  string g="0111000000";
  string a="0110000000";
  string b="0100000000";
  string C="0010000000";
  string D="1111001110";
  string E="1111001100";
  string F="1111001000";
  string G="1111000000";
  string A="1110000000";
  string B="1100000000";
  int n=0;
  cin>>n;
  cin.ignore();
  while(n--){
    string str;
    getline(cin,str);
    vector<pair<int,bool>> finger(10,{0,0});
    for(int i=0;i<str.length();i++){
      if(str[i]=='c'){
        press(c,finger);
      }
      else if(str[i]=='d'){
        press(d,finger);
      }
      else if(str[i]=='e'){
        press(e,finger);
      }
      else if(str[i]=='f'){
        press(f,finger);
      }
      else if(str[i]=='g'){
        press(g,finger);
      }
      else if(str[i]=='a'){
        press(a,finger);
      }
      else if(str[i]=='b'){
        press(b,finger);
      }
      else if(str[i]=='C'){
        press(C,finger);
      }
      else if(str[i]=='D'){
        press(D,finger);
      }
      else if(str[i]=='E'){
        press(E,finger);
      }
      else if(str[i]=='F'){
        press(F,finger);
      }
      else if(str[i]=='G'){
        press(G,finger);
      }
      else if(str[i]=='A'){
        press(A,finger);
      }
      else if(str[i]=='B'){
        press(B,finger);
      }
    }
    for(int i=0;i<9;i++){
      cout<<finger[i].first<<" ";
    }
    cout<<finger[9].first<<endl;
  }
 
  return 0;
}
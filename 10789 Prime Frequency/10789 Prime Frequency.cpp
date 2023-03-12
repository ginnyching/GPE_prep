#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  vector<int> prime={2};
  for(int i=3;i<2002;i+=2){
    bool is_prime=1;
    for(int j=0;j<prime.size();j++){
      if(i%prime[j]==0){
        is_prime=0;
        break;
      }
    }
    if(is_prime)
      prime.push_back(i);
  }
  
  int T=0;
  cin>>T;
  cin.ignore();
  string str;
  map<char,int> show;
  for(int i=0;i<T;i++){
    
    getline(cin,str);
    cout<<"Case "<<i+1<<": ";
    for(int i=0;i<str.length();i++){
      if(show.count(str[i])){
        show[str[i]]++;
      }
      else{
        show[str[i]]=1;
      }
    }
    bool empty=1;
    for(const auto &j:show){
      
      if(find(prime.begin(),prime.end(),j.second)
        !=prime.end()){
        cout<<j.first;
        empty=0; 
      }
    }
    if(empty)
      cout<<"empty";
    cout<<"\n";
    str.clear();
    show.clear();
  }
  return 0;
}
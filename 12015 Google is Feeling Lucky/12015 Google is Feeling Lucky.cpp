#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

bool compare(pair<string,int> p1, pair<string,int> p2) {
    return p1.second<p2.second;
}
int main() {
  int n=0;
  vector<pair<string,int>> addr;
  cin>>n;
  int pop[10]={-1};
  for(int i=0;i<n;i++){
    string temp_web;
    int temp_rel,num=10;
    while(num-- >0){
      cin>>temp_web>>temp_rel;
      addr.push_back({temp_web,temp_rel});
    }
    const auto max=*max_element(addr.begin(),addr.end(),compare);
    cout<<"Case #"<<i+1<<":\n";
    for(int j=0;j<10;j++){
      if(addr[j].second==max.second)
        cout<<addr[j].first<<endl;
      
      }
   
    addr.clear();
  }

  
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct books{
  int a,b,diff;
};

bool cmp(struct books A,struct books B){
  return A.diff<B.diff;
}

int main() {
  int n=0;
  while(cin>>n && n!=EOF){
    vector<int> price;
    while(n--)
    {
      int t=0;
      cin>>t;
      price.push_back(t);
    }  
    int m=0;
    cin>>m;
    vector<struct books> buy;
    sort(price.begin(),price.end());
    for(int i=0;i<price.size();i++){
      for(int j=i+1;j<price.size();j++){
        if(price[i]+price[j]==m){
          buy.push_back({price[i],price[j],price[j]-price[i]});
        }
        else if(price[i]+price[j]>m)
          break;
      }
    }
    sort(buy.begin(),buy.end(),cmp);
    cout<<"Peter should buy books whose prices are "<<buy[0].a<<" and "<<buy[0].b<<".\n\n";
    price.clear();
    buy.clear();
    
  }
  
  return 0;
}
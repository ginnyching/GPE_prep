#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;
bool cmp(int a, int b){
  return a>b;
}
int main() {
  int cases=0;
  cin>>cases;
  while(cases--){
    int n=0;
    vector<int> land;
    while(cin>>n){
      if(n==0)
        break;
      land.push_back(n);
    }
    sort(land.begin(),land.end(),cmp);
    long long sum=0;
    for(int i=0;i<land.size();i++){
      sum+=2*pow(land[i],i+1);
      if(sum>5000000)
        break;
    }
    if(sum<=5000000)
      cout<<sum<<endl;
    else
      cout<<"Too expensive\n";

    land.clear();
  }
  
  return 0;
}
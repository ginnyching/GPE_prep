#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
  int n=0;
  while(cin>>n && n!=EOF){
    vector<int> num;
    int j=0;
    for(int i=0;i<n;i++){
      cin>>j;
      num.push_back(j);
    }
    sort (num.begin(),num.end());
    if(num.size()%2==1){
      int mid=num.size()/2;
      int count=0;
      for(int i=0;i<num.size();i++){
        if(num[i]==num[mid])
          count++;
        else if(num[i]>num[mid])
          break;
      }
      cout<<num[mid]<<" "<<count<<" 1\n";
    }
    else{
      int mid1=num.size()/2-1;
      int mid2=num.size()/2;
      if(num[mid1]==num[mid2]){
        int count=0;
        for(int i=0;i<num.size();i++){
          if(num[i]==num[mid1])
            count++;
          else if(num[i]>num[mid1])
            break;
        }
        cout<<num[mid1]<<" "<<count<<" 1\n";
      }
      else{
        int count=0;
        for(int i=0;i<num.size();i++){
          if(num[i]==num[mid1]||num[i]==num[mid2])
            count++;
          else if(num[i]>num[mid2])
            break;
        }
        cout<<num[mid1]<<" "<<count<<" "<<num[mid2]-num[mid1]+1<<"\n";
      }
    }
    num.clear();
  }

  
  return 0;
}
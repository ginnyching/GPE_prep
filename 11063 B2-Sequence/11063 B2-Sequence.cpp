#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
  int n=0,p=1;
  while(cin>>n&&n!=EOF){
    vector<int> num;
    bool is_b2=1;
    int big=0;
    for(int i=0;i<n;i++){
      int temp=0;
      cin>>temp;
      if(temp>big){
        num.push_back(temp);
        big=temp;
      }
      else
        is_b2=0;
    }
    cin.ignore();
    if(is_b2){
      map<int,int> sums;
      for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){ 
          if(sums.count(num[i]+num[j])){
            is_b2=0;
            break;
          }
          else{
            sums[num[i]+num[j]]=1;
          }
        }
        if(!is_b2)
          break;
      }
      if(is_b2)
        cout<<"Case #"<<p<<": It is a B2-Sequence.\n\n";
      else
        cout<<"Case #"<<p<<": It is not a B2-Sequence.\n\n";
    }
    else
        cout<<"Case #"<<p<<": It is not a B2-Sequence.\n\n";
    p++;
  }


  
  return 0;
}
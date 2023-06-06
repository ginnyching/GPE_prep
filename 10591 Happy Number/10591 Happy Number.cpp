#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int N=0;
  cin>>N;
  for(int p=1;p<=N;p++){
    int n=0;
    cin>>n;
    int NUM=n;
    int s=0;
    vector<int> num;
    num.push_back(n);
    while(1){
      while(n){
        int t=n%10;
        s+=t*t;
        n/=10;
      }
      if(s==1){
        cout<<"Case #"<<p<<": "<<NUM<<" is a Happy number.\n";
        break;
      }
      else{
        if(find(num.begin(),num.end(),s)!=num.end()){
          cout<<"Case #"<<p<<": "<<NUM<<" is an Unhappy number.\n";
          break;
        }
        else{
          num.push_back(s);
          n=s;
          s=0;
        }
      }
    }
   
  }
  return 0;
}
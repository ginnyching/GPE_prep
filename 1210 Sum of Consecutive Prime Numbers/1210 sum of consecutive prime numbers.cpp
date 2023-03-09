#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> prime;
  prime.push_back(2);
  for(int i=3;i<10001;i+=2){
    bool is_prime=1;
    for(int j=0;j<prime.size();j++){
      if(i%prime[j]==0){
        is_prime=0;
        break;
      }
    }
    if(is_prime==1)
      prime.push_back(i);
  }
  
  int n;
  while(cin>>n){
    if(n==0)
      break;
    int start=0,end=0;
    int sum=0;
    int count=0;
    for(int i=0;i<prime.size();i++){
      if(prime[i]>n)
        break;
      sum+=prime[i];
      end=i;
      if (sum>n){
        sum=0;
        i=start;
        start++;
      }
      if(sum==n){
        count++;
        sum=0;
        i=start;
        start++;
      }
    
    }
    cout<<count<<endl;
  }

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> prime={2};
  for(int i=3;i<10000000;i+=2){
    bool is_prime=1;
    for(int j=0;j<prime.size();j++){
      if(i%prime[j]==0){
        is_prime=0;
        break;
      }
    }
    if(is_prime)
      prime.push_back(i);
    if(prime.size()==3505)
      break;
  }
  int n=0;
  while(cin>>n && n!=0){
    vector<int> people;
    for(int i=0;i<n;i++){
      people.push_back(i+1);
    }
    vector<int>::iterator it=people.begin();
    
    for(int i=0;i<n-1;i++){
      
      it=(it-people.begin()+prime[i]-1)%people.size()+people.begin();
      people.erase(it);
      it=(it-people.begin())%people.size()+people.begin();
    }
    cout<<people[0]<<endl;
    people.clear();
  }
  return 0;
}